/*
 * XREFs of ExpApplyRewaitBoost @ 0x1404EB388
 * Callers:
 *     ExpWaitForResource @ 0x140205F8C (ExpWaitForResource.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x14020570C (ExpApplyPriorityBoost.c)
 */

void __fastcall ExpApplyRewaitBoost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ExpApplyPriorityBoost(a1, 65280LL, (__int64)KeGetCurrentThread(), a4);
}
