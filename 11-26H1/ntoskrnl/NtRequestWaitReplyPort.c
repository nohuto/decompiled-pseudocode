/*
 * XREFs of NtRequestWaitReplyPort @ 0x140B0F190
 * Callers:
 *     DifNtRequestWaitReplyPortWrapper @ 0x14068D650 (DifNtRequestWaitReplyPortWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140925A30 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    if ( PreviousMode )
      AlpcpProbeForWriteMessageHeader((unsigned __int64)ReplyMessage, 0);
    v7 = AlpcpProcessSynchronousRequest(
           Object,
           0x20000,
           (ULONG_PTR)RequestMessage,
           0LL,
           (char *)ReplyMessage,
           0LL,
           0LL,
           0LL,
           PreviousMode);
    if ( v7 == -1073740029 )
      v7 = -1073741769;
    if ( v7 == -1073740031 )
      v7 = -1073741229;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  KeLeaveCriticalRegion();
  return v7;
}
