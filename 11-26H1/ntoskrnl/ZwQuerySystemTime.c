/*
 * XREFs of ZwQuerySystemTime @ 0x140728B00
 * Callers:
 *     DifZwQuerySystemTimeWrapper @ 0x1406B83F0 (DifZwQuerySystemTimeWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
