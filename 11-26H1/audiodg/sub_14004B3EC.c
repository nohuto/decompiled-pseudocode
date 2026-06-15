/*
 * XREFs of sub_14004B3EC @ 0x14004B3EC
 * Callers:
 *     sub_14004B664 @ 0x14004B664 (sub_14004B664.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14004B3EC(__int64 a1)
{
  unsigned int v1; // r10d
  unsigned int v2; // edx
  int v3; // r8d
  unsigned int v4; // r8d

  v1 = 0;
  if ( *(_WORD *)(a1 + 2) )
  {
    v2 = *(unsigned __int16 *)(a1 + 14);
    if ( v2 == 8 || (((_WORD)v2 - 16) & 0xFFE7) == 0 && v2 != 40 )
    {
      v3 = *(unsigned __int16 *)(a1 + 12);
      if ( v3 == *(unsigned __int16 *)(a1 + 2) * (v2 >> 3) )
      {
        v4 = *(_DWORD *)(a1 + 4) * v3;
        v1 = 1;
        if ( *(_DWORD *)(a1 + 8) > v4 / 0x14 + v4 || *(_DWORD *)(a1 + 8) < v4 - v4 / 0x14 )
          return 0;
      }
    }
  }
  return v1;
}
