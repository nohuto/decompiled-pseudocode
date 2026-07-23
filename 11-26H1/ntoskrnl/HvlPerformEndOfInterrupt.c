/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x1404B07E0
 * Callers:
 *     HvlDummyInterruptCallback @ 0x1405BAFD0 (HvlDummyInterruptCallback.c)
 * Callees:
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404B0844 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlPerformEndOfInterrupt(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v6; // rdx
  int v7; // ett

  _disable();
  result = guard_dispatch_icall_no_overrides(a1, a2);
  if ( HalpInterruptDirectedEoiModeEnabled )
    result = HalpInterruptPerformDirectedEndOfInterrupt(0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v6 = (unsigned int)result;
      LODWORD(v6) = result & 0xFFDFFFFF;
      v7 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v7 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v6, SchedulerAssist, v3);
  }
  _enable();
  return result;
}
