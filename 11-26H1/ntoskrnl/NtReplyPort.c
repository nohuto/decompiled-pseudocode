/*
 * XREFs of NtReplyPort @ 0x1407BFDE0
 * Callers:
 *     DifNtReplyPortWrapper @ 0x1406892E0 (DifNtReplyPortWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A49448 (AlpcpReplyLegacySynchronousRequest.c)
 */

__int64 __fastcall NtReplyPort(HANDLE Handle, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  struct _KTHREAD *v6; // rax
  PVOID v7; // rdi
  struct _KTHREAD *v8; // r8
  struct _KTHREAD *v9; // r9
  _QWORD v11[6]; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+60h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  if ( *(_DWORD *)&AlpcpMessageLogLock.ApcStateFill[8] )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = -1073741637;
    --CurrentThread->KernelApcDisable;
  }
  else
  {
    memset_0(v11, 0, 0x40uLL);
    v6 = KeGetCurrentThread();
    Object = 0LL;
    --v6->KernelApcDisable;
    v5 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v7 = Object;
      v11[0] = Object;
      v12 = 0;
      if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
      {
        v8 = KeGetCurrentThread();
        LOBYTE(v8) = v8->PreviousMode;
        v5 = AlpcpReplyLegacySynchronousRequest(v11, a2, v8);
      }
      else
      {
        v12 = 65537;
        v9 = KeGetCurrentThread();
        LOBYTE(v9) = v9->PreviousMode;
        v5 = AlpcpSendMessage(v11, a2, 0LL, v9);
        if ( v5 == -1073740029 )
          v5 = -1073741769;
      }
      ObfDereferenceObject(v7);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
