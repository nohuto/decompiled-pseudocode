/*
 * XREFs of HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership @ 0x1400208B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x140030684 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 */

__int64 __fastcall HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership(__int64 a1)
{
  return HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax(*(_QWORD *)(a1 + 960));
}
