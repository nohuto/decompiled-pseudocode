/*
 * XREFs of ZwSetIntervalProfile @ 0x14069E780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE Source)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Interval);
}
