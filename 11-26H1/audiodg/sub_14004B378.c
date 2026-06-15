/*
 * XREFs of sub_14004B378 @ 0x14004B378
 * Callers:
 *     sub_14004B664 @ 0x14004B664 (sub_14004B664.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14004B378(__int64 a1)
{
  unsigned int v1; // r10d
  int v2; // r8d
  unsigned int v3; // r8d

  v1 = 0;
  if ( *(_WORD *)(a1 + 2) && (*(_WORD *)(a1 + 14) == 32 || *(_WORD *)(a1 + 14) == 64) )
  {
    v2 = *(unsigned __int16 *)(a1 + 12);
    if ( v2 == *(unsigned __int16 *)(a1 + 2) * *(unsigned __int16 *)(a1 + 14) / 8 )
    {
      v3 = *(_DWORD *)(a1 + 4) * v2;
      v1 = 1;
      if ( *(_DWORD *)(a1 + 8) > v3 / 0x14 + v3 || *(_DWORD *)(a1 + 8) < v3 - v3 / 0x14 )
        return 0;
    }
  }
  return v1;
}
