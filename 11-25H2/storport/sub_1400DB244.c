/*
 * XREFs of sub_1400DB244 @ 0x1400DB244
 * Callers:
 *     sub_1400EADB8 @ 0x1400EADB8 (sub_1400EADB8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400DB244(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) == 2
      && (*(_BYTE *)(a1 + 4) & 3) != 0
      && *(_DWORD *)(a1 + 8) == -2
      && *(_DWORD *)(a1 + 12) == -2;
}
