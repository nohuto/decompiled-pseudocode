/*
 * XREFs of _FDint @ 0x1800209CC
 * Callers:
 *     _FXp_addh @ 0x18000C538 (_FXp_addh.c)
 *     _FXp_mulh @ 0x18000C9F0 (_FXp_mulh.c)
 *     _FXp_setw @ 0x18000CD84 (_FXp_setw.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall FDint(_WORD *a1, __int16 a2)
{
  int v3; // ecx
  __int16 v4; // r11
  __int16 result; // ax
  __int16 v6; // r10
  __int16 v7; // dx
  __int64 v8; // rcx
  __int16 v9; // r10

  v3 = (unsigned __int16)a1[1];
  v4 = (unsigned __int8)((unsigned __int16)v3 >> 7);
  if ( v4 == 255 )
  {
    if ( (v3 & 0x7F) != 0 )
      return 2;
    result = 1;
    if ( *a1 )
      return 2;
  }
  else if ( ((v3 & 0xFFFF7FFF) != 0 || *a1) && (v6 = 150 - v4 - a2, v6 > 0) )
  {
    if ( v6 < 24 )
    {
      v7 = v6 >> 4;
      v8 = qword_1800E4A38[v6 >> 4];
      v9 = word_1800E4A18[v6 & 0xF] & a1[v8];
      a1[v8] ^= v9;
      if ( v7 > 0 )
      {
        v9 |= *a1;
        *a1 = 0;
      }
      return -(v9 != 0);
    }
    else
    {
      *a1 = 0;
      a1[1] = v3 & 0x8000;
      return -1;
    }
  }
  else
  {
    return 0;
  }
  return result;
}
