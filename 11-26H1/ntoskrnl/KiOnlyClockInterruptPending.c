/*
 * XREFs of KiOnlyClockInterruptPending @ 0x1405F0FA0
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiOnlyClockInterruptPending(__int64 a1, _BYTE *a2)
{
  if ( !*a2 )
  {
    *(_BYTE *)a1 = guard_dispatch_icall_no_overrides(a1, a2);
    *a2 = 1;
  }
  return *(_BYTE *)a1;
}
