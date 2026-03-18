/*
 * XREFs of NtReplyWaitReplyPort @ 0x1407C0130
 * Callers:
 *     DifNtReplyWaitReplyPortWrapper @ 0x140689790 (DifNtReplyWaitReplyPortWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1408F5AA0 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtReplyWaitReplyPort(void *a1, volatile void *a2)
{
  struct _KTHREAD *CurrentThread; // r9
  __int16 KernelApcDisable; // r8
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  KernelApcDisable = CurrentThread->KernelApcDisable;
  if ( *(_DWORD *)&AlpcpMessageLogLock.ApcStateFill[8] )
  {
    CurrentThread->KernelApcDisable = KernelApcDisable - 1;
    KeLeaveCriticalRegion();
    return 3221225659LL;
  }
  else
  {
    CurrentThread->KernelApcDisable = KernelApcDisable - 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v7 >= 0 )
    {
      if ( (*((_DWORD *)Object + 104) & 6) == 2 )
      {
        v7 = -1073741811;
      }
      else
      {
        if ( PreviousMode )
          AlpcpProbeForWriteMessageHeader(a2, 0LL);
        v7 = AlpcpProcessSynchronousRequest(Object, a2, 0LL, 0LL, 0LL, PreviousMode);
        if ( v7 == -1073740029 )
          v7 = -1073741769;
        if ( v7 == -1073740031 )
          v7 = -1073741229;
      }
    }
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
    return (unsigned int)v7;
  }
}
