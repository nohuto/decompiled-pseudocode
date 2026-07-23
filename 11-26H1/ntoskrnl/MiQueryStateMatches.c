/*
 * XREFs of MiQueryStateMatches @ 0x1404D0AA8
 * Callers:
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiQueryStateMatches(__int64 a1, __int64 a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
      && *(_WORD *)(a1 + 4) == *(_WORD *)(a2 + 4);
}
