/*
 * XREFs of PsLeavePriorityRegion @ 0x14044FE90
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 */

void __fastcall PsLeavePriorityRegion(__int64 a1, __int64 a2, __int64 a3, struct _SINGLE_LIST_ENTRY *a4)
{
  LOBYTE(a2) = 1;
  PsBoostThreadIo((LegacyAutoBoost *)KeGetCurrentThread(), a2, a3, a4);
}
