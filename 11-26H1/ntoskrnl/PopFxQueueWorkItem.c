/*
 * XREFs of PopFxQueueWorkItem @ 0x140394940
 * Callers:
 *     PopFxQueueWorkOrder @ 0x14039486C (PopFxQueueWorkOrder.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x1403B46F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1404DAFA0 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x140382070 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     ExInterlockedInsertTailList @ 0x1403DE450 (ExInterlockedInsertTailList.c)
 */

char __fastcall PopFxQueueWorkItem(__int64 a1, struct _LIST_ENTRY *a2)
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
