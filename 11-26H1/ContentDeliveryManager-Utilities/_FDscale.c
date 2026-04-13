/*
 * XREFs of _FDscale @ 0x18000C358
 * Callers:
 *     _Stofx @ 0x180004E48 (_Stofx.c)
 *     _FXp_addh @ 0x18000C538 (_FXp_addh.c)
 *     _FXp_mulh @ 0x18000C9F0 (_FXp_mulh.c)
 *     _FXp_setw @ 0x18000CD84 (_FXp_setw.c)
 * Callees:
 *     _FDnorm @ 0x180020864 (_FDnorm.c)
 */

__int16 __fastcall FDscale(unsigned __int16 *a1, int a2)
{
  unsigned __int16 *v2; // r14
  unsigned __int16 v4; // ax
  __int16 v6; // cx
  __int16 v7; // cx
  __int16 v9; // di
  unsigned __int16 *v10; // rdx
  float Float; // xmm0_4
  int v12; // r10d
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // bp
  unsigned __int16 v15; // r11
  __int16 v16; // r10
  unsigned __int16 v17; // r9
  bool v18; // zf

  v2 = a1 + 1;
  v4 = a1[1];
  v6 = (unsigned __int8)(v4 >> 7);
  if ( v6 == 255 )
  {
    if ( (v4 & 0x7F) != 0 )
      return 2;
    v7 = 1;
    if ( *a1 )
      return 2;
    return v7;
  }
  HIBYTE(v9) = 0;
  v10 = v2;
  if ( !(unsigned __int8)(v4 >> 7) )
  {
    v6 = FDnorm(a1, v2);
    if ( v6 > 0 )
      return 0;
    v10 = a1 + 1;
  }
  if ( a2 <= 0 || 255 - v6 > a2 )
  {
    if ( -v6 < a2 )
    {
      *v2 = *v2 & 0x807F | ((v6 + (_WORD)a2) << 7);
      return -1;
    }
    v12 = v6 + a2 - 1;
    v13 = *v2 & 0x7F | 0x80;
    v14 = *v2 & 0x8000;
    *v2 = v13;
    if ( (unsigned int)(v12 + 24) <= 0x17 )
    {
      v15 = 0;
      if ( (__int16)v12 <= -16 )
      {
        v15 = *a1;
        LOWORD(v12) = v12 + 16;
        *a1 = v13;
        v13 = 0;
        *v10 = 0;
      }
      v16 = -(__int16)v12;
      if ( v16 )
      {
        LOBYTE(v9) = v15 != 0;
        v15 = v9 | (*a1 << (16 - v16));
        *a1 = (v13 << (16 - v16)) | (*a1 >> v16);
        v13 >>= v16;
      }
      v17 = v14 | v13;
      a1[1] = v17;
      if ( (v15 > 0x8000u || v15 == 0x8000 && (*(_BYTE *)a1 & 1) != 0) && (v18 = *a1 == 0xFFFF, ++*a1, v18) )
      {
        a1[1] = v17 + 1;
      }
      else if ( v17 == v14 )
      {
        return -(*a1 != 0);
      }
      return -1;
    }
    *v10 = v14;
    *a1 = 0;
    return 0;
  }
  Float = FInf._Float;
  if ( (*v2 & 0x8000u) != 0 )
    LODWORD(Float) = LODWORD(FInf._Float) ^ _xmm;
  *(float *)a1 = Float;
  return 1;
}
