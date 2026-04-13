/*
 * XREFs of _FXp_addh @ 0x18000C538
 * Callers:
 *     _FXp_addx @ 0x18000C8C4 (_FXp_addx.c)
 *     _FXp_mulh @ 0x18000C9F0 (_FXp_mulh.c)
 *     _FXp_setn @ 0x18000CCFC (_FXp_setn.c)
 * Callees:
 *     _FDscale @ 0x18000C358 (_FDscale.c)
 *     _Feraise @ 0x180020948 (_Feraise.c)
 *     _FDtest @ 0x18002097C (_FDtest.c)
 *     _FDint @ 0x1800209CC (_FDint.c)
 *     _FDunscale @ 0x180020AA4 (_FDunscale.c)
 */

float *__fastcall FXp_addh(float *a1, int a2, float a3)
{
  __int64 v3; // r14
  __int64 v5; // r13
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // ebx
  __int64 v9; // r15
  __int16 v10; // ax
  float v11; // xmm1_4
  int v12; // ecx
  int v13; // ecx
  __int64 i; // rax
  __int64 j; // rdx
  float v16; // xmm1_4
  __int64 k; // rax
  float v18; // xmm0_4
  __int64 v19; // rdx
  float v20; // xmm0_4
  __int64 m; // rax
  float v22; // xmm0_4
  float *v23; // rax
  unsigned __int16 *v24; // rbx
  float v25; // xmm1_4
  float v26; // xmm0_4
  int v28; // [rsp+20h] [rbp-30h]
  float v29; // [rsp+24h] [rbp-2Ch] BYREF
  int v30; // [rsp+28h] [rbp-28h]
  float *v31; // [rsp+30h] [rbp-20h]
  __int16 v32; // [rsp+90h] [rbp+40h] BYREF
  __int16 v33; // [rsp+98h] [rbp+48h] BYREF
  float v34; // [rsp+A0h] [rbp+50h] BYREF
  float v35; // [rsp+A8h] [rbp+58h] BYREF

  v34 = a3;
  v3 = 0LL;
  v35 = a3;
  v5 = a2;
  v32 = 0;
  if ( !a2 )
    return a1;
  v6 = FDunscale(&v32, &v35);
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      return a1;
    v28 = 256;
    v8 = 0;
    if ( (int)v5 <= 0 )
      return a1;
    v9 = 1LL;
    v31 = a1 - 1;
    while ( 1 )
    {
      v29 = a1[v3];
      v33 = 0;
      v10 = FDunscale(&v33, &v29);
      if ( v10 > 0 )
        return a1;
      if ( !v10 )
      {
        a1[v8] = v34;
        if ( v8 + 1 < (int)v5 )
          a1[v8 + 1] = 0.0;
        return a1;
      }
      v11 = v34;
      v12 = v33 - v32;
      if ( v12 <= -12 )
        break;
      if ( v12 < 12 || v34 == 0.0 )
        goto LABEL_31;
      v28 = v33;
      ++v8;
LABEL_50:
      ++v3;
      ++v9;
      ++v31;
LABEL_51:
      if ( v8 >= (int)v5 )
        return a1;
    }
    if ( v34 != 0.0 )
    {
      v13 = v8 + 1;
      for ( i = v9; i < v5; ++i )
      {
        if ( a1[i] == 0.0 )
          break;
        ++v13;
      }
      if ( v13 >= (int)v5 - 1 )
      {
        if ( v13 == (_DWORD)v5 )
          --v13;
      }
      else
      {
        ++v13;
      }
      for ( j = v13; j > v3; --j )
        a1[j] = a1[j - 1];
      a1[v3] = v11;
      v34 = 0.0;
      goto LABEL_51;
    }
LABEL_31:
    v16 = v34 + a1[v3];
    a1[v3] = v16;
    if ( v16 == 0.0 )
    {
      for ( k = v9; k < v5; ++k )
      {
        v18 = a1[k];
        a1[k - 1] = v18;
        if ( v18 == 0.0 )
          break;
      }
      a1[v5 - 1] = 0.0;
      v16 = a1[v3];
      if ( v16 == 0.0 )
        return a1;
    }
    v34 = v16;
    FDunscale(&v32, &v34);
    v19 = (unsigned int)v32;
    if ( v28 - 12 < (int)v19 )
    {
      LOWORD(v19) = v32 - v28 + 12;
      FDint(&v34, v19);
      FDscale((unsigned __int16 *)&v34, v32);
      v20 = a1[v3] - v34;
      a1[v3] = v20;
      if ( v20 == 0.0 )
      {
        for ( m = v9; m < v5; ++m )
        {
          v22 = a1[m];
          a1[m - 1] = v22;
          if ( v22 == 0.0 )
            break;
        }
        a1[v5 - 1] = 0.0;
      }
      --v3;
      v23 = v31 - 1;
      --v9;
      --v31;
      if ( --v8 )
      {
        v35 = *v23;
        FDunscale(&v33, &v35);
        v28 = v33;
      }
      else
      {
        v28 = 256;
      }
      goto LABEL_51;
    }
    v30 = v8 + 1;
    if ( v8 + 1 == (_DWORD)v5 )
      return a1;
    v34 = a1[v3];
    v24 = (unsigned __int16 *)&a1[v8];
    FDunscale(&v33, v24);
    FDint(v24, 12LL);
    FDscale(v24, v33);
    v25 = a1[v3];
    v26 = v34 - v25;
    v28 = v33;
    v34 = v34 - v25;
    if ( v34 == 0.0 )
      v35 = v25;
    else
      v35 = v26;
    FDunscale(&v32, &v35);
    v8 = v30;
    goto LABEL_50;
  }
  if ( v6 == 2 || (v7 = FDtest(a1), v7 <= 0) )
  {
    *a1 = v34;
  }
  else if ( v7 != 2 && ((*((_WORD *)a1 + 1) ^ HIWORD(v34)) & 0x8000u) != 0 )
  {
    Feraise(1);
    *a1 = FNan._Float;
    if ( (int)v5 > 1 )
      a1[1] = 0.0;
  }
  return a1;
}
