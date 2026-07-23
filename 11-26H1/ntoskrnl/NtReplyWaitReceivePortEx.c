/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x1407C2FD0
 * Callers:
 *     DifNtReplyWaitReceivePortExWrapper @ 0x14068D030 (DifNtReplyWaitReceivePortExWrapper.c)
 *     NtReplyWaitReceivePort @ 0x1407C2F80 (NtReplyWaitReceivePort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140925A30 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A52738 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140A80C30 (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACE0BC (AlpcpReceiveLegacyMessage.c)
 */

NTSTATUS __cdecl NtReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID v16; // rdi
  bool v17; // zf
  int v18; // eax
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v20[6]; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+70h] [rbp-28h]

  if ( LODWORD(AlpcpMessageLogLock.TrapFrame) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeLeaveCriticalRegion();
    return -1073741637;
  }
  else
  {
    memset_0(v20, 0, 0x40uLL);
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
      AlpcpProbeForWriteMessageHeader(ReceiveMessage, 0LL);
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v13 >= 0 )
    {
      v16 = Object;
      v20[0] = Object;
      v21 = 0;
      if ( !ReplyMessage )
        goto LABEL_13;
      v17 = (*((_DWORD *)Object + 104) & 0x2000) == 0;
      memset(&v20[3], 0, 24);
      if ( v17 )
      {
        v21 = 65541;
        LOBYTE(v15) = PreviousMode;
        v18 = AlpcpSendMessage(v20, ReplyMessage, 0LL, v15);
      }
      else
      {
        v21 = 4;
        LOBYTE(v14) = PreviousMode;
        v18 = AlpcpReplyLegacySynchronousRequest(v20, ReplyMessage, v14);
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
        v13 = AlpcpReceiveLegacyMessage(v20, ReceiveMessage, Timeout, PortContext);
        AlpcpCompleteDeferSignalRequest(v20);
        ObfDereferenceObject(v16);
      }
    }
    KeLeaveCriticalRegion();
    return v13;
  }
}
