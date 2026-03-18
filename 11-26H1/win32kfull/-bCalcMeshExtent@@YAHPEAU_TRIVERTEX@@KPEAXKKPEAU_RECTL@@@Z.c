/*
 * XREFs of ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x14007EE24
 * Callers:
 *     GreGradientFill @ 0x14007E5D4 (GreGradientFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCalcMeshExtent(
        struct _TRIVERTEX *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        struct _RECTL *a6)
{
  LONG v6; // ebx
  LONG v7; // edi
  LONG v8; // esi
  LONG v9; // ebp
  unsigned int v14; // r12d
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  LONG v18; // r10d
  LONG v19; // r8d
  __int64 v20; // rax
  LONG v21; // ecx
  LONG v22; // edx
  LONG v23; // r9d
  LONG v24; // eax
  __int64 result; // rax
  unsigned int i; // r9d
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  LONG v30; // ecx
  LONG y; // edx
  LONG x; // eax
  LONG v33; // eax
  _DWORD v34[14]; // [rsp+0h] [rbp-38h]

  v6 = 0x7FFFFFFF;
  v7 = 0x80000000;
  v8 = 0x7FFFFFFF;
  v9 = 0x80000000;
  if ( a5 >= 2 )
  {
    if ( a5 != 2 )
      goto LABEL_29;
    for ( i = 0; i < a4; ++i )
    {
      v27 = 0LL;
      v34[0] = *a3;
      v34[1] = a3[1];
      v34[2] = a3[2];
      while ( v27 < 3 )
      {
        v28 = (unsigned int)v34[v27];
        if ( (unsigned int)v28 >= a2 )
          goto LABEL_29;
        v29 = v28;
        ++v27;
        y = a1[v29].y;
        x = a1[v29].x;
        v30 = x;
        if ( x >= v6 )
          x = v6;
        v6 = x;
        v33 = y;
        if ( v30 <= v7 )
          v30 = v7;
        v7 = v30;
        if ( y >= v8 )
          v33 = v8;
        v8 = v33;
        if ( y <= v9 )
          y = v9;
        v9 = y;
      }
      a3 += 3;
    }
  }
  else
  {
    v14 = 0;
    while ( v14 < a4 )
    {
      v15 = (unsigned int)*a3;
      if ( (unsigned int)v15 > a2 )
        goto LABEL_29;
      v16 = a3[1];
      if ( v16 > a2 )
        goto LABEL_29;
      v17 = v15;
      v18 = a1[v17].y;
      v19 = a1[v17].x;
      v20 = v16;
      v21 = v18;
      v22 = a1[v20].x;
      v23 = a1[v20].y;
      v24 = v19;
      if ( v19 >= v6 )
        v24 = v6;
      v6 = v22;
      if ( v19 <= v7 )
        v19 = v7;
      v7 = v22;
      if ( v18 >= v8 )
        v21 = v8;
      v8 = v23;
      if ( v18 <= v9 )
        v18 = v9;
      a3 += 2;
      ++v14;
      v9 = v23;
      if ( v22 >= v24 )
        v6 = v24;
      if ( v22 <= v19 )
        v7 = v19;
      if ( v23 >= v21 )
        v8 = v21;
      if ( v23 <= v18 )
        v9 = v18;
    }
  }
  if ( (unsigned int)(v6 + 0x8000000) <= 0x10000000
    && (unsigned int)(v7 + 0x8000000) <= 0x10000000
    && (unsigned int)(v8 + 0x8000000) <= 0x10000000
    && (unsigned int)(v9 + 0x8000000) <= 0x10000000 )
  {
    result = 1LL;
    a6->left = v6;
    a6->right = v7;
    a6->top = v8;
    a6->bottom = v9;
    return result;
  }
LABEL_29:
  *(_QWORD *)&a6->left = 0LL;
  *(_QWORD *)&a6->right = 0LL;
  return 0LL;
}
