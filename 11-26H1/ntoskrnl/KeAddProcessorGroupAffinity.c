/*
 * XREFs of KeAddProcessorGroupAffinity @ 0x1405EF240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorGroupAffinity(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax

  result = *a1;
  _bittestandset64(&result, *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + a2) & 0x3F);
  *a1 = result;
  return result;
}
