/*
 * XREFs of KiSuspendClockTimer @ 0x1404F8E5C
 * Callers:
 *     KeSuspendClockTimer @ 0x1404F8E44 (KeSuspendClockTimer.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiSuspendClockTimer(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  int v4; // edi

  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned int)KiClockState;
  v4 = KiClockTimerOwner;
  if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    result = guard_dispatch_icall_no_overrides(a1, a2);
    CurrentPrcb->ClockTimerState.ClockActive = 0;
    CurrentPrcb->PendingTickFlags &= ~1u;
  }
  if ( CurrentPrcb->Number == v4 )
    ++dword_140F25F84;
  if ( CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 0;
  return result;
}
