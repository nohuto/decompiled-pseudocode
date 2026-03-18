/*
 * XREFs of sub_14001CDE8 @ 0x14001CDE8
 * Callers:
 *     sub_14001E044 @ 0x14001E044 (sub_14001E044.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14001CDE8(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) == 2
      && (*(_BYTE *)(a1 + 4) & 3) != 0
      && *(_DWORD *)(a1 + 8) == -2
      && *(_DWORD *)(a1 + 12) == -2;
}
