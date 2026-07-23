/*
 * XREFs of ZwCreateJobSet @ 0x140729660
 * Callers:
 *     DifZwCreateJobSetWrapper @ 0x1406A34B0 (DifZwCreateJobSetWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwCreateJobSet(ULONG NumJob, PJOB_SET_ARRAY UserJobSet, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&NumJob);
}
