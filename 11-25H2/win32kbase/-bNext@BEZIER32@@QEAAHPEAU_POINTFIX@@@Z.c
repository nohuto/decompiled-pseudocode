/*
 * XREFs of ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1400D5B40
 * Callers:
 *     pprFlattenRec @ 0x1400D5820 (pprFlattenRec.c)
 * Callees:
 *     ?lParentErrorDividedBy4@HFDBASIS32@@QEBAJXZ @ 0x1400D6208 (-lParentErrorDividedBy4@HFDBASIS32@@QEBAJXZ.c)
 */

__int64 __fastcall BEZIER32::bNext(BEZIER32 *this, struct _POINTFIX *a2)
{
  BEZIER32 *v2; // r10
  int v3; // r15d
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // r9d
  int v9; // ebx
  int v10; // r11d
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int i; // r11d
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  __int64 result; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  int v32; // edx
  int v33; // eax

  v2 = this;
  a2->x = *((_DWORD *)this + 9) + ((*((_DWORD *)this + 1) + 4096) >> 13);
  a2->y = *((_DWORD *)this + 10) + ((*((_DWORD *)this + 5) + 4096) >> 13);
  v3 = *(_DWORD *)this;
  if ( !*(_DWORD *)this )
    return 0LL;
  v4 = *((_DWORD *)this + 3);
  v5 = *((_DWORD *)this + 4);
  v6 = -v4;
  v7 = -*((_DWORD *)v2 + 4);
  if ( v4 >= 0 )
    v6 = v4;
  if ( v5 >= 0 )
    v7 = v5;
  if ( v6 <= v7 )
  {
    v8 = v5;
    if ( v5 < 0 )
      v8 = -*((_DWORD *)v2 + 4);
  }
  else
  {
    v8 = -v4;
    if ( v4 >= 0 )
      v8 = v4;
  }
  v9 = *((_DWORD *)v2 + 7);
  v10 = *((_DWORD *)v2 + 8);
  v11 = -v9;
  v12 = -v10;
  if ( v10 >= 0 )
    v12 = *((_DWORD *)v2 + 8);
  if ( v9 >= 0 )
    v11 = *((_DWORD *)v2 + 7);
  if ( v11 <= v12 )
  {
    v13 = *((_DWORD *)v2 + 8);
    if ( v10 < 0 )
      v13 = -*((_DWORD *)v2 + 8);
  }
  else
  {
    v13 = -*((_DWORD *)v2 + 7);
    if ( v9 >= 0 )
      v13 = *((_DWORD *)v2 + 7);
  }
  if ( v8 <= v13 )
  {
    v29 = *((_DWORD *)v2 + 7);
    v30 = *((_DWORD *)v2 + 8);
    if ( v9 < 0 )
      v29 = -*((_DWORD *)v2 + 7);
    if ( v10 < 0 )
      v30 = -*((_DWORD *)v2 + 8);
    if ( v29 <= v30 )
    {
      v16 = *((_DWORD *)v2 + 8);
      if ( v10 < 0 )
        v16 = -*((_DWORD *)v2 + 8);
    }
    else
    {
      v16 = *((_DWORD *)v2 + 7);
      if ( v9 < 0 )
        v16 = -*((_DWORD *)v2 + 7);
    }
  }
  else
  {
    v14 = v4;
    v15 = v5;
    if ( v4 < 0 )
      v14 = -v4;
    if ( v5 < 0 )
      v15 = -*((_DWORD *)v2 + 4);
    if ( v14 <= v15 )
    {
      v16 = v5;
      if ( v5 < 0 )
        v16 = -*((_DWORD *)v2 + 4);
    }
    else
    {
      v16 = v4;
      if ( v4 < 0 )
        v16 = -v4;
    }
  }
  if ( v16 > 523776 )
  {
    v17 = (v4 + v5) >> 3;
    *((_DWORD *)v2 + 3) = v17;
    v18 = *((_DWORD *)v2 + 2) - v17;
    *((_DWORD *)v2 + 4) = v5 >> 2;
    *((_DWORD *)v2 + 2) = v18 >> 1;
    v19 = (v10 + v9) >> 3;
    v20 = *((_DWORD *)v2 + 6) - v19;
    *((_DWORD *)v2 + 7) = v19;
    *((_DWORD *)v2 + 6) = v20 >> 1;
    *((_DWORD *)v2 + 8) = v10 >> 2;
    *(_DWORD *)v2 = 2 * v3;
  }
  for ( i = *(_DWORD *)v2; (i & 1) == 0; *(_DWORD *)v2 = i )
  {
    if ( (int)HFDBASIS32::lParentErrorDividedBy4((BEZIER32 *)((char *)v2 + 4)) > 130944 )
      break;
    if ( (int)HFDBASIS32::lParentErrorDividedBy4((BEZIER32 *)((char *)v2 + 20)) > 130944 )
      break;
    *((_DWORD *)v2 + 4) *= 4;
    v31 = *((_DWORD *)v2 + 3);
    i >>= 1;
    *((_DWORD *)v2 + 2) = v31 + 2 * *((_DWORD *)v2 + 2);
    *((_DWORD *)v2 + 3) = 8 * v31 - *((_DWORD *)v2 + 4);
    v32 = *((_DWORD *)v2 + 7);
    v33 = *((_DWORD *)v2 + 6);
    *((_DWORD *)v2 + 8) *= 4;
    *((_DWORD *)v2 + 6) = v32 + 2 * v33;
    *((_DWORD *)v2 + 7) = 8 * v32 - *((_DWORD *)v2 + 8);
  }
  *(_DWORD *)v2 = i - 1;
  v22 = *((_DWORD *)v2 + 3);
  v23 = *((_DWORD *)v2 + 2);
  *((_DWORD *)v2 + 1) += v23;
  *((_DWORD *)v2 + 2) = v22 + v23;
  v24 = v22 - *((_DWORD *)v2 + 4);
  *((_DWORD *)v2 + 4) = v22;
  *((_DWORD *)v2 + 3) = v22 + v24;
  result = 1LL;
  v26 = *((_DWORD *)v2 + 7);
  v27 = *((_DWORD *)v2 + 6);
  *((_DWORD *)v2 + 5) += v27;
  *((_DWORD *)v2 + 6) = v26 + v27;
  v28 = v26 - *((_DWORD *)v2 + 8);
  *((_DWORD *)v2 + 8) = v26;
  *((_DWORD *)v2 + 7) = v26 + v28;
  return result;
}
