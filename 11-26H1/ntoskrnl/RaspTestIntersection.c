/*
 * XREFs of RaspTestIntersection @ 0x1403573DC
 * Callers:
 *     RaspScanConvert @ 0x140356F8C (RaspScanConvert.c)
 * Callees:
 *     BgpFmSqrt @ 0x140357694 (BgpFmSqrt.c)
 */

__int64 __fastcall RaspTestIntersection(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r10
  _DWORD *v5; // r11
  _DWORD *v6; // r13
  _DWORD *v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r8
  bool v19; // cc
  __int64 v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 result; // rax
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r10
  __int64 v33; // rcx
  bool v34; // cc
  __int64 v35; // [rsp+20h] [rbp-38h]
  __int64 v36; // [rsp+28h] [rbp-30h]

  v4 = *(_DWORD **)a1;
  v5 = a4;
  v6 = *(_DWORD **)(a1 + 8);
  v9 = *(_DWORD **)(a1 + 16);
  v35 = *v4 + v4[2];
  v10 = v4[1] + v4[3];
  v11 = v6[1] + v6[3];
  v36 = *v9 + v9[2];
  v12 = a2;
  v13 = v35 << 16;
  v14 = (__int64)a2 << 16;
  v15 = v10 << 16;
  v16 = v11 << 16;
  v17 = v36 << 16;
  v18 = (__int64)(v9[1] + v9[3]) << 16;
  if ( v10 << 16 == v18 )
  {
    if ( v15 == v14 )
      goto LABEL_15;
  }
  else if ( v15 == v14 )
  {
    goto LABEL_7;
  }
  if ( v18 == v14 )
  {
LABEL_7:
    ++v14;
    if ( *(_BYTE *)(a1 + 24) != 1 )
      goto LABEL_8;
LABEL_31:
    result = 0x7FFFFFFFLL;
    *v5 = 0x7FFFFFFF;
    v34 = v15 < v14;
    if ( v15 > v14 )
    {
      if ( v18 > v14 )
      {
LABEL_37:
        *a3 = result;
        return result;
      }
      v34 = v15 < v14;
    }
    if ( !v34 || v18 >= v14 )
      result = (v13 + (v17 - v13) * (v14 - v15) / (v18 - v15)) / 0x10000;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(a1 + 24) == 1 )
    goto LABEL_31;
  if ( v16 == v14 )
    ++v14;
LABEL_8:
  v19 = v15 < v14;
  if ( v15 > v14 )
  {
    if ( v16 <= v14 )
      goto LABEL_13;
    if ( v18 > v14 )
    {
LABEL_15:
      result = 0x7FFFFFFFLL;
      *a3 = 0x7FFFFFFF;
LABEL_16:
      *v5 = 0x7FFFFFFF;
      return result;
    }
    v19 = v15 < v14;
  }
  if ( v19 && v18 < v14 && v16 < v14 )
    goto LABEL_15;
LABEL_13:
  if ( v15 + v18 - ((__int64)(v6[1] + v6[3]) << 17) )
  {
    v20 = *v6 + v6[2];
    v21 = v9[1] + v9[3] - 2 * v11;
    v22 = 2 * (v11 - v10);
    v23 = v21 + v10;
    v24 = v22 * v22 - 4 * (v21 + v10) * (v10 - v12);
    if ( v24 < 0 )
      goto LABEL_15;
    v26 = BgpFmSqrt(v24);
    v27 = 2 * v23;
    v28 = -65536 * v22;
    v29 = (v28 + v26) / (2 * v23);
    v30 = (v28 - v26) / v27;
    v31 = v35 * (0x10000 - v30);
    v32 = (__int64)(v36 * v29 * v29 + (0x10000 - v29) * (v35 * (0x10000 - v29) + 2 * v20 * v29)) / 0x100000000LL;
    *a3 = v32;
    *v5 = (__int64)(v36 * v30 * v30 + (0x10000 - v30) * (v31 + 2 * v20 * v30)) / 0x100000000LL;
    v33 = (__int64)(v36 * v30 * v30 + (0x10000 - v30) * (v31 + 2 * v20 * v30)) / 0x100000000LL;
    result = 0x7FFFFFFFLL;
    if ( v29 > 0x10000 )
    {
      *a3 = 0x7FFFFFFF;
      LODWORD(v32) = 0x7FFFFFFF;
    }
    if ( v30 > 0x10000 )
    {
      *v5 = 0x7FFFFFFF;
      LODWORD(v33) = 0x7FFFFFFF;
    }
    if ( (int)v32 <= (int)v33 )
    {
      if ( (_DWORD)v32 == (_DWORD)v33 )
        goto LABEL_16;
    }
    else
    {
      *a3 = v33;
      *v5 = v32;
    }
  }
  else
  {
    *v5 = 0x7FFFFFFF;
    result = (v13 + (v17 - v13) * (v14 - v15) / (v18 - v15)) / 0x10000;
    *a3 = result;
  }
  return result;
}
