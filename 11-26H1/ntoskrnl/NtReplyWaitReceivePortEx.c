/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x1407BFF70
 * Callers:
 *     DifNtReplyWaitReceivePortExWrapper @ 0x140689450 (DifNtReplyWaitReceivePortExWrapper.c)
 *     NtReplyWaitReceivePort @ 0x1407BFF20 (NtReplyWaitReceivePort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1408F5AA0 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A49448 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140A78190 (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACBE7C (AlpcpReceiveLegacyMessage.c)
 */

__int64 __fastcall NtReplyWaitReceivePortEx(HANDLE Handle, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID v16; // rdi
  bool v17; // zf
  int v18; // eax
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v20[6]; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+70h] [rbp-28h]

  if ( *(_DWORD *)&AlpcpMessageLogLock.ApcStateFill[8] )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeLeaveCriticalRegion();
    return 3221225659LL;
  }
  else
  {
    memset_0(v20, 0, 0x40uLL);
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
      AlpcpProbeForWriteMessageHeader(a4, 0LL);
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v13 >= 0 )
    {
      v16 = Object;
      v20[0] = Object;
      v21 = 0;
      if ( !a3 )
        goto LABEL_13;
      v17 = (*((_DWORD *)Object + 104) & 0x2000) == 0;
      memset(&v20[3], 0, 24);
      if ( v17 )
      {
        v21 = 65541;
        LOBYTE(v15) = PreviousMode;
        v18 = AlpcpSendMessage(v20, a3, 0LL, v15);
      }
      else
      {
        v21 = 4;
        LOBYTE(v14) = PreviousMode;
        v18 = AlpcpReplyLegacySynchronousRequest(v20, a3, v14);
      }
      v13 = v18;
      if ( v18 < 0 )
      {
        ObfDereferenceObject(v16);
        if ( v13 == -1073740029 )
          v13 = -1073741769;
      }
      else
      {
LABEL_13:
        v13 = AlpcpReceiveLegacyMessage(v20, a4, a5, a2);
        AlpcpCompleteDeferSignalRequest(v20);
        ObfDereferenceObject(v16);
      }
    }
    KeLeaveCriticalRegion();
    return (unsigned int)v13;
  }
}
