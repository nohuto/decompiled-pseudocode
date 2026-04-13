/*
 * XREFs of _Dscale @ 0x18000D010
 * Callers:
 *     _Stodx @ 0x1800059B0 (_Stodx.c)
 *     _Xp_addh @ 0x18000D2C8 (_Xp_addh.c)
 *     _Xp_mulh @ 0x18000D794 (_Xp_mulh.c)
 *     _Xp_setw @ 0x18000DAD4 (_Xp_setw.c)
 *     _LDscale @ 0x18000DE6C (_LDscale.c)
 * Callees:
 *     _Dnorm @ 0x180020B34 (_Dnorm.c)
 */

__int16 __fastcall Dscale(__int16 *a1, __int64 a2)
{
  unsigned __int16 *v2; // r14
  unsigned __int16 v4; // ax
  int v5; // esi
  __int16 v6; // cx
  unsigned __int16 *v9; // r8
  double Double; // xmm0_8
  __int16 v11; // r11
  int v12; // ebp
  unsigned __int16 v13; // r12
  unsigned __int16 v14; // r11
  unsigned __int16 v15; // r15
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // r9
  __int16 v18; // r10
  __int64 v19; // rcx
  __int16 v20; // bp
  unsigned __int16 *v21; // r14
  unsigned __int16 v22; // r9
  _WORD *v23; // r8
  unsigned __int16 v24; // dx
  __int16 v25; // r11
  _WORD *v26; // rcx
  _WORD *v27; // rax
  _WORD *v28; // rdx
  bool v29; // zf

  v2 = (unsigned __int16 *)(a1 + 3);
  v4 = a1[3];
  v5 = a2;
  v6 = (v4 >> 4) & 0x7FF;
  if ( v6 == 2047 )
  {
    if ( (v4 & 0xF) != 0 || a1[2] || a1[1] || *a1 )
      return 2;
    else
      return 1;
  }
  v9 = v2;
  if ( !v6 )
  {
    v6 = Dnorm(a1, a2, v2);
    if ( v6 > 0 )
      return 0;
    v9 = (unsigned __int16 *)(a1 + 3);
  }
  if ( v5 <= 0 || 2047 - v6 > v5 )
  {
    v11 = *v2;
    if ( -v6 < v5 )
    {
      *v2 = v11 & 0x800F | (16 * (v6 + v5));
      return -1;
    }
    v12 = v6 + v5 - 1;
    v13 = v11 & 0x8000;
    v14 = *v2 & 0xF | 0x10;
    *v2 = v14;
    if ( (unsigned int)(v12 + 53) <= 0x34 )
    {
      v15 = 0;
      if ( (__int16)v12 <= -16 )
      {
        v16 = a1[2];
        v17 = a1[1];
        v18 = *a1;
        v19 = (unsigned __int16)(((unsigned __int16)(-16 - v12) >> 4) + 1);
        LOWORD(v12) = 16 * v19 + v12;
        do
        {
          v15 = v18 | (v15 != 0);
          v18 = v17;
          v17 = v16;
          v16 = v14;
          v14 = 0;
          --v19;
        }
        while ( v19 );
        *a1 = v18;
        *v9 = 0;
        a1[2] = v16;
        a1[1] = v17;
      }
      v20 = -(__int16)v12;
      v21 = (unsigned __int16 *)(a1 + 1);
      if ( v20 )
      {
        v22 = *v21;
        v15 = (v15 != 0) | (unsigned __int16)(*a1 << (16 - v20));
        v23 = a1 + 2;
        v24 = a1[2];
        *a1 = ((unsigned __int16)*a1 >> v20) | (*v21 << (16 - v20));
        *v21 = (v22 >> v20) | (v24 << (16 - v20));
        a1[2] = (v14 << (16 - v20)) | (v24 >> v20);
        v14 >>= v20;
      }
      else
      {
        v23 = a1 + 2;
      }
      v25 = v13 | v14;
      a1[3] = v25;
      v26 = a1 + 1;
      if ( v15 > 0x8000u )
      {
        v28 = v23;
      }
      else
      {
        v27 = v23;
        if ( v15 != 0x8000 || (*(_BYTE *)a1 & 1) == 0 )
        {
LABEL_37:
          if ( v25 == v13 && !*v27 && !*v26 )
            return -(*a1 != 0);
          return -1;
        }
        v28 = a1 + 2;
        v26 = a1 + 1;
      }
      v29 = (*a1)++ == -1;
      v27 = v23;
      if ( v29 )
      {
        v29 = (*v21)++ == 0xFFFF;
        v27 = v28;
        if ( v29 )
        {
          v29 = (*v23)++ == 0xFFFF;
          if ( v29 )
          {
            a1[3] = v25 + 1;
            return -1;
          }
        }
      }
      goto LABEL_37;
    }
    *v9 = v13;
    *(_DWORD *)(a1 + 1) = 0;
    *a1 = 0;
    return 0;
  }
  Double = Inf._Double;
  if ( (*v2 & 0x8000u) != 0 )
    *(_QWORD *)&Double = *(_QWORD *)&Inf._Double ^ _xmm;
  *(double *)a1 = Double;
  return 1;
}
