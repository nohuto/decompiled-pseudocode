/*
 * XREFs of HvpMapEntryIsTrimmed @ 0x1408E1C70
 * Callers:
 *     HvpFindFreeCell @ 0x1408E1930 (HvpFindFreeCell.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsTrimmed(__int64 a1)
{
  return (*(_DWORD *)(a1 + 20) & 4) != 0;
}
