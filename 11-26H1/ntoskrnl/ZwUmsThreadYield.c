/*
 * XREFs of ZwUmsThreadYield @ 0x14072BAE0
 * Callers:
 *     DifZwUmsThreadYieldWrapper @ 0x1406C1A00 (DifZwUmsThreadYieldWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUmsThreadYield(PVOID SchedulerParam)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SchedulerParam);
}
