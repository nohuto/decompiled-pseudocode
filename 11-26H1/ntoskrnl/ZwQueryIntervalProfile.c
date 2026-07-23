/*
 * XREFs of ZwQueryIntervalProfile @ 0x14072AB80
 * Callers:
 *     DifZwQueryIntervalProfileWrapper @ 0x1406B6030 (DifZwQueryIntervalProfileWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQueryIntervalProfile(KPROFILE_SOURCE ProfileSource, PULONG Interval)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ProfileSource);
}
