/*
 * XREFs of PspSetJobPagePriorityLimitPreCallback @ 0x1407F9860
 * Callers:
 *     <none>
 * Callees:
 *     PspUpdateJobEffectivePriorityLimits @ 0x1407FA07C (PspUpdateJobEffectivePriorityLimits.c)
 */

__int64 __fastcall PspSetJobPagePriorityLimitPreCallback(__int64 a1)
{
  PspUpdateJobEffectivePriorityLimits(a1, 2LL);
  return 0LL;
}
