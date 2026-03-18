/*
 * XREFs of PsEnterPriorityRegion @ 0x14045E550
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 */

void __fastcall PsEnterPriorityRegion(__int64 a1, __int64 a2, __int64 a3, struct _SINGLE_LIST_ENTRY *a4)
{
  PsBoostThreadIo((LegacyAutoBoost *)KeGetCurrentThread(), 0LL, a3, a4);
}
