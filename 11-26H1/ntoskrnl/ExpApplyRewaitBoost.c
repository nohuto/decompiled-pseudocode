/*
 * XREFs of ExpApplyRewaitBoost @ 0x1404E4968
 * Callers:
 *     ExpWaitForResource @ 0x14020606C (ExpWaitForResource.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1402057EC (ExpApplyPriorityBoost.c)
 */

void __fastcall ExpApplyRewaitBoost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ExpApplyPriorityBoost(a1, 65280LL, (__int64)KeGetCurrentThread(), a4);
}
