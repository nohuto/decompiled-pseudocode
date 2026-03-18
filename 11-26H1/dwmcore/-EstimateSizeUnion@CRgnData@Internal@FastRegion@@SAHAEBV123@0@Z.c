/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800EB930
 * Callers:
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1800E9F90 (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1800EA550 (-AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800EB500 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x1800ED904 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // rax
  _DWORD *v4; // r9
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  _DWORD *v7; // rdi
  char *v8; // r11
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // r10d
  int v12; // ecx
  _DWORD *v13; // rbp
  _DWORD *v14; // rbx
  _DWORD *v15; // r9
  _DWORD *v16; // r14
  int v17; // edx
  char *v18; // rax
  int v19; // edx
  int v20; // ecx
  char *v21; // r8
  _DWORD *v22; // rbx
  int v24; // ecx
  int i; // ecx
  char *v26; // rbx
  _DWORD *v27; // rbx
  int v28; // r8d
  char *j; // rax
  int v30; // ecx
  _DWORD *v31; // rdi
  _DWORD *v32; // rbx
  int v33; // eax
  _DWORD *k; // r9
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  _DWORD *v38; // rdi
  int v39; // r8d

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = v3;
  v6 = *(int *)a2;
  v7 = v4;
  v8 = (char *)a1 + 8 * v2 + 12;
  v9 = v6 + v2;
  v10 = *v4;
  v11 = 8 * v9 + 12;
  v12 = *v3;
  v13 = &v4[2 * v6];
  if ( *v3 < *v4 )
  {
    v24 = v3[3];
    v18 = (char *)(v3 + 2);
    for ( i = (_DWORD)v18 + v24 - v5[1] - (_DWORD)v5; ; i = *((_DWORD *)v26 + 3) - *((_DWORD *)v26 + 1) + 8 )
    {
      v11 += i;
      v26 = v18;
      if ( *(_DWORD *)v18 >= v10 )
        break;
      v18 += 8;
      if ( v18 == v8 )
      {
        v36 = v4[3];
        v15 = v4 + 2;
        v33 = (_DWORD)v15 + v36 - v7[1] - (_DWORD)v7;
        goto LABEL_31;
      }
    }
    v27 = v4 + 2;
    v15 = v4 + 2;
    if ( *(_DWORD *)v18 > v10 )
    {
      v11 += v27[1] + (_DWORD)v27 + *((_DWORD *)v18 + 1) - *((_DWORD *)v18 - 1) - (_DWORD)v7 - v7[1] + 8;
      goto LABEL_5;
    }
    v28 = v27[1];
    v18 += 8;
    if ( v18 != v8 )
    {
      v19 = v28 + (_DWORD)v27 + *((_DWORD *)v18 + 1) - *((_DWORD *)v18 - 1) - (_DWORD)v7 - v7[1] + 8;
      goto LABEL_4;
    }
    v11 += v28 + (_DWORD)v27 - (_DWORD)v7 - v7[1];
    goto LABEL_32;
  }
  v14 = v4 + 2;
  v15 = v14;
  v16 = v14 + 1;
  if ( v12 <= v10 )
  {
    v17 = v3[3];
    v18 = (char *)(v3 + 2);
    v19 = *v16 + (_DWORD)v14 + v17 - *((_DWORD *)v18 - 1) + 8 - (_DWORD)v7 - v7[1];
    goto LABEL_4;
  }
  for ( v11 += *v16 + (_DWORD)v14 - (_DWORD)v7 - v7[1]; ; v11 += v31[3] - v31[1] + 8 )
  {
    v31 = v15;
    if ( v12 < *v15 )
      break;
    v32 = v15 + 2;
    if ( v12 <= *v15 )
    {
      v18 = (char *)(v3 + 2);
      v15 += 2;
      if ( v32 == v13 )
      {
        v11 += (_DWORD)v18 + *((_DWORD *)v18 + 1) - (_DWORD)v5 - v5[1];
        goto LABEL_19;
      }
      v19 = v32[1] + v5[3] - *(v32 - 1) - v5[1] + 16;
LABEL_4:
      v11 += v19;
      goto LABEL_5;
    }
    v15 += 2;
    if ( v15 == v13 )
    {
      v37 = v3[3];
      v18 = (char *)(v3 + 2);
      v11 += (_DWORD)v18 + v37 - v5[1] - (_DWORD)v5;
      goto LABEL_19;
    }
  }
  v39 = v3[3] - *(v15 - 1);
  v18 = (char *)(v3 + 2);
  v11 += v15[1] + v39 - *((_DWORD *)v18 - 1) + 16;
LABEL_5:
  while ( 1 )
  {
    v20 = *v15;
    v21 = v18;
    if ( *(_DWORD *)v18 >= *v15 )
      break;
    v18 += 8;
    if ( v18 == v8 )
    {
      v33 = v15[1] - *(v15 - 1);
      goto LABEL_30;
    }
    v11 += *((_DWORD *)v18 + 1) + v15[1] - *(v15 - 1) - *((_DWORD *)v18 - 1) + 16;
  }
  v22 = v15 + 2;
  v15 += 2;
  if ( *(_DWORD *)v18 > v20 )
  {
    if ( v22 != v13 )
    {
      v19 = *((_DWORD *)v18 + 1) + v22[1] - *(v22 - 1) + 8 - *((_DWORD *)v18 - 1) + 8;
      goto LABEL_4;
    }
    v11 += *((_DWORD *)v18 + 1) - *((_DWORD *)v18 - 1) + 8;
LABEL_19:
    for ( j = v18 + 8; j != v8; v11 += v30 + 8 )
    {
      v30 = *((_DWORD *)j + 1) - *((_DWORD *)j - 1);
      j += 8;
    }
    return v11;
  }
  v18 += 8;
  if ( v18 != v8 )
  {
    v38 = v21 + 12;
    if ( v15 == v13 )
    {
      v11 += *v38 + 8 - *((_DWORD *)v21 + 1);
      goto LABEL_19;
    }
    v19 = *v38 + v15[1] - *(v15 - 1) + 8 - *((_DWORD *)v21 + 1) + 8;
    goto LABEL_4;
  }
  if ( v22 != v13 )
  {
    v33 = v22[1] - *(v22 - 1);
LABEL_30:
    v11 += 8;
LABEL_31:
    v11 += v33;
LABEL_32:
    for ( k = v15 + 2; k != v13; v11 += v35 + 8 )
    {
      v35 = k[1] - *(k - 1);
      k += 2;
    }
  }
  return v11;
}
