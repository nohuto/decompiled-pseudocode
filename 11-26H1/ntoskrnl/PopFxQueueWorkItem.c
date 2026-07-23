/*
 * XREFs of PopFxQueueWorkItem @ 0x1403966C0
 * Callers:
 *     PopFxQueueWorkOrder @ 0x1403965EC (PopFxQueueWorkOrder.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x1403BE5F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1404D4680 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x140383E20 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     ExInterlockedInsertTailList @ 0x1403E1640 (ExInterlockedInsertTailList.c)
 */

char __fastcall PopFxQueueWorkItem(__int64 a1, _LIST_ENTRY *a2)
{
  char result; // al

  result = ExTryQueueWorkItem(a2, 48LL);
  if ( !result )
  {
    ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 16), a2, (PKSPIN_LOCK)(a1 + 8));
    return KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 32), 0, 1, 0);
  }
  return result;
}
