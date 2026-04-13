/*
 * XREFs of _Xp_addh @ 0x18000D2C8
 * Callers:
 *     _Xp_addx @ 0x18000D660 (_Xp_addx.c)
 *     _Xp_mulh @ 0x18000D794 (_Xp_mulh.c)
 * Callees:
 *     _Dscale @ 0x18000D010 (_Dscale.c)
 *     _Feraise @ 0x180020948 (_Feraise.c)
 *     _Dtest @ 0x180020CEC (_Dtest.c)
 *     _Dint @ 0x180020D54 (_Dint.c)
 *     _Dunscale @ 0x180020E6C (_Dunscale.c)
 */

double *__fastcall Xp_addh(double *a1, int a2, double a3)
{
  __int64 v3; // r14
  __int64 v5; // r13
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // ebx
  __int64 v9; // r15
  __int16 v10; // ax
  double v11; // xmm1_8
  int v12; // ecx
  int v13; // ecx
  __int64 i; // rax
  __int64 j; // rdx
  double v16; // xmm1_8
  __int64 k; // rax
  double v18; // xmm0_8
  __int64 v19; // rdx
  double v20; // xmm0_8
  __int64 m; // rax
  double v22; // xmm0_8
  double *v23; // rax
  __int16 *v24; // rbx
  double v25; // xmm1_8
  double v26; // xmm0_8
  int v28; // [rsp+20h] [rbp-30h]
  double v29; // [rsp+28h] [rbp-28h] BYREF
  double *v30; // [rsp+30h] [rbp-20h]
  double v31; // [rsp+38h] [rbp-18h] BYREF
  __int16 v32; // [rsp+90h] [rbp+40h] BYREF
  __int16 v33; // [rsp+98h] [rbp+48h] BYREF
  double v34; // [rsp+A0h] [rbp+50h] BYREF
  int v35; // [rsp+A8h] [rbp+58h]

  v34 = a3;
  v3 = 0LL;
  v29 = a3;
  v5 = a2;
  v32 = 0;
  if ( !a2 )
    return a1;
  v6 = Dunscale(&v32, &v29);
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      return a1;
    v35 = 2048;
    v8 = 0;
    if ( (int)v5 <= 0 )
      return a1;
    v9 = 1LL;
    v30 = a1 - 1;
    while ( 1 )
    {
      v31 = a1[v3];
      v33 = 0;
      v10 = Dunscale(&v33, &v31);
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
      if ( v12 <= -26 )
        break;
      if ( v12 < 26 || v34 == 0.0 )
        goto LABEL_31;
      v35 = v33;
      ++v8;
LABEL_50:
      ++v3;
      ++v9;
      ++v30;
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
    Dunscale(&v32, &v34);
    v19 = (unsigned int)v32;
    if ( v35 - 26 < (int)v19 )
    {
      LOWORD(v19) = v32 - v35 + 26;
      Dint(&v34, v19);
      Dscale((__int16 *)&v34, (unsigned int)v32);
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
      v23 = v30 - 1;
      --v9;
      --v30;
      if ( --v8 )
      {
        v29 = *v23;
        Dunscale(&v33, &v29);
        v35 = v33;
      }
      else
      {
        v35 = 2048;
      }
      goto LABEL_51;
    }
    v28 = v8 + 1;
    if ( v8 + 1 == (_DWORD)v5 )
      return a1;
    v34 = a1[v3];
    v24 = (__int16 *)&a1[v8];
    Dunscale(&v33, v24);
    Dint(v24, 26LL);
    Dscale(v24, (unsigned int)v33);
    v25 = a1[v3];
    v26 = v34 - v25;
    v35 = v33;
    v34 = v34 - v25;
    if ( v34 == 0.0 )
      v29 = v25;
    else
      v29 = v26;
    Dunscale(&v32, &v29);
    v8 = v28;
    goto LABEL_50;
  }
  if ( v6 == 2 || (v7 = Dtest(a1), v7 <= 0) )
  {
    *a1 = v34;
  }
  else if ( v7 != 2 && ((*((_WORD *)a1 + 3) ^ HIWORD(v34)) & 0x8000u) != 0 )
  {
    Feraise(1);
    *a1 = Nan._Double;
    if ( (int)v5 > 1 )
      a1[1] = 0.0;
  }
  return a1;
}
