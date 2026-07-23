/*
 * XREFs of TtmpPowerRequestEntryComparator @ 0x1407ECF20
 * Callers:
 *     TtmpFindPowerRequestEntryById @ 0x1407ECA54 (TtmpFindPowerRequestEntryById.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TtmpPowerRequestEntryComparator(__int64 a1, int a2)
{
  return *(_DWORD *)(a1 + 16) == a2;
}
