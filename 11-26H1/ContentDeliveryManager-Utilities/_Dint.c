/*
 * XREFs of _Dint @ 0x180020D54
 * Callers:
 *     _Xp_addh @ 0x18000D2C8 (_Xp_addh.c)
 *     _Xp_mulh @ 0x18000D794 (_Xp_mulh.c)
 *     _Xp_setw @ 0x18000DAD4 (_Xp_setw.c)
 *     _LDint @ 0x180020F18 (_LDint.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall Dint(_WORD *a1, __int16 a2)
{
  int v3; // ecx
  __int16 v4; // r11
  __int16 result; // ax
  __int16 v6; // r10
  __int16 v7; // dx
  __int64 v8; // rcx
  __int16 v9; // r10

  v3 = (unsigned __int16)a1[3];
  v4 = ((unsigned __int16)v3 >> 4) & 0x7FF;
  if ( v4 != 2047 )
  {
    if ( (v3 & 0xFFFF7FFF) == 0 && !a1[2] && !a1[1] && !*a1 )
      return 0;
    v6 = 1075 - v4 - a2;
    if ( v6 <= 0 )
      return 0;
    if ( v6 >= 53 )
    {
      *(_DWORD *)(a1 + 1) = 0;
      *a1 = 0;
      a1[3] = v3 & 0x8000;
      return -1;
    }
    v7 = v6 >> 4;
    v8 = qword_1800E4A68[v6 >> 4];
    v9 = word_1800E4A48[v6 & 0xF] & a1[v8];
    a1[v8] ^= v9;
    if ( v7 != 1 )
    {
      if ( v7 != 2 )
      {
        if ( v7 != 3 )
          return -(v9 != 0);
        v9 |= a1[2];
        a1[2] = 0;
      }
      v9 |= a1[1];
      a1[1] = 0;
    }
    v9 |= *a1;
    *a1 = 0;
    return -(v9 != 0);
  }
  if ( (v3 & 0xF) != 0 )
    return 2;
  if ( a1[2] )
    return 2;
  if ( a1[1] )
    return 2;
  result = 1;
  if ( *a1 )
    return 2;
  return result;
}
