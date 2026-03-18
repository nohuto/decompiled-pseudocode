/*
 * XREFs of KeResumeClockTimerSafe @ 0x1405EE0F0
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1404A70C8 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF2260 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x140BF2DAC (PnprWakeProcessors.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiResumeClockTimer @ 0x140523C58 (KiResumeClockTimer.c)
 */

__int64 KeResumeClockTimerSafe()
{
  unsigned __int8 EffectiveIrql; // al
  __int64 v1; // rcx
  __int64 v2; // rdx
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  EffectiveIrql = KeGetEffectiveIrql();
  v2 = 13LL;
  if ( EffectiveIrql >= 0xDu )
    return KiResumeClockTimer(v1, 13LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 13 )
    __writecr8(0xDuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 13);
  KiResumeClockTimer(v1, v2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
