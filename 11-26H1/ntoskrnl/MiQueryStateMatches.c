/*
 * XREFs of MiQueryStateMatches @ 0x1404D72D8
 * Callers:
 *     MiQueryVadForVaAttributes @ 0x140305C54 (MiQueryVadForVaAttributes.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiQueryStateMatches(__int64 a1, __int64 a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
      && *(_WORD *)(a1 + 4) == *(_WORD *)(a2 + 4);
}
