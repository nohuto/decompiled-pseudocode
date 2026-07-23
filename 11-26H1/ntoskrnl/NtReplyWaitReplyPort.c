/*
 * XREFs of NtReplyWaitReplyPort @ 0x1407C3190
 * Callers:
 *     DifNtReplyWaitReplyPortWrapper @ 0x14068D370 (DifNtReplyWaitReplyPortWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140925A30 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReplyWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  struct _KTHREAD *CurrentThread; // r9
  __int16 KernelApcDisable; // r8
  KPROCESSOR_MODE PreviousMode; // r14
  int v7; // ebx
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  KernelApcDisable = CurrentThread->KernelApcDisable;
  if ( LODWORD(AlpcpMessageLogLock.TrapFrame) )
  {
    CurrentThread->KernelApcDisable = KernelApcDisable - 1;
    KeLeaveCriticalRegion();
    return -1073741637;
  }
  else
  {
    CurrentThread->KernelApcDisable = KernelApcDisable - 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v7 >= 0 )
    {
      if ( (*((_DWORD *)Object + 104) & 6) == 2 )
      {
        v7 = -1073741811;
      }
      else
      {
        if ( PreviousMode )
          AlpcpProbeForWriteMessageHeader(ReplyMessage, 0LL);
        v7 = AlpcpProcessSynchronousRequest(Object, ReplyMessage, 0LL, 0LL, 0LL, PreviousMode);
        if ( v7 == -1073740029 )
          v7 = -1073741769;
        if ( v7 == -1073740031 )
          v7 = -1073741229;
      }
    }
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
    return v7;
  }
}
