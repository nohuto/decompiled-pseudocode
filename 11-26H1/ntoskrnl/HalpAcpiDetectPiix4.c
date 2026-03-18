/*
 * XREFs of HalpAcpiDetectPiix4 @ 0x140CAF2A4
 * Callers:
 *     HalpAcpiInitSystem @ 0x140BEB270 (HalpAcpiInitSystem.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

__int64 __fastcall HalpAcpiDetectPiix4(__int64 a1)
{
  unsigned int v1; // ebx
  struct _WORK_QUEUE_ITEM *v2; // rax

  v1 = 0;
  BYTE2(IommuInterfaceStateChangeCallbackPushLock.ReadTransferCount) = 6;
  LOWORD(IommuInterfaceStateChangeCallbackPushLock.ReadTransferCount) = 0;
  HIDWORD(IommuInterfaceStateChangeCallbackPushLock.ReadTransferCount) = 0;
  IommuInterfaceStateChangeCallbackPushLock.OtherTransferCount = (__int64)&IommuInterfaceStateChangeCallbackPushLock.WriteTransferCount;
  IommuInterfaceStateChangeCallbackPushLock.WriteTransferCount = (__int64)&IommuInterfaceStateChangeCallbackPushLock.WriteTransferCount;
  v2 = (struct _WORK_QUEUE_ITEM *)HalpMmAllocCtxAlloc(a1, 32LL);
  if ( v2 )
  {
    v2->Parameter = v2;
    v2->WorkerRoutine = (void (__fastcall *)(void *))HalpAcpiDetectPiix4Work;
    v2->List.Flink = 0LL;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
