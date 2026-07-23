/*
 * XREFs of KeSuspendClockTimerSafe @ 0x1405F0AC4
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1404A0758 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF8260 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x140BF86B4 (PnprQuiesceProcessors.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KeSuspendClockTimerSafe()
{
  unsigned __int8 EffectiveIrql; // al
  __int64 v1; // rcx
  __int64 v2; // rdx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *v4; // rdi
  int v5; // ebp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  int v8; // esi

  EffectiveIrql = KeGetEffectiveIrql();
  v2 = 13LL;
  if ( EffectiveIrql >= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (unsigned int)KiClockState;
    v8 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      result = guard_dispatch_icall_no_overrides(v1, 13LL);
      CurrentPrcb->ClockTimerState.ClockActive = 0;
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v8 )
      ++dword_140F25F84;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 13 )
      __writecr8(0xDuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 13);
    v4 = KeGetCurrentPrcb();
    v5 = KiClockTimerOwner;
    if ( (v4->PendingTickFlags & 1) != 0 )
    {
      guard_dispatch_icall_no_overrides(v1, v2);
      v4->ClockTimerState.ClockActive = 0;
      v4->PendingTickFlags &= ~1u;
    }
    if ( v4->Number == v5 )
      ++dword_140F25F84;
    if ( v4->ClockOwner )
      v4->ClockOwner = 0;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
