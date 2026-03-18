/*
 * XREFs of ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180075C80
 * Callers:
 *     ?ComputeOcclusion@CMegaRectCollection@@QEAAXXZ @ 0x180072F90 (-ComputeOcclusion@CMegaRectCollection@@QEAAXXZ.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x180076F80 (-AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180077240 (-OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeSubtract(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  int *v3; // rax
  int *v4; // r11
  int *v5; // rdi
  __int64 v6; // rdx
  char *v7; // rbx
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // r10d
  int v11; // ecx
  int *v12; // rsi
  int *v13; // r9
  char *v14; // rax
  int j; // edx
  int v16; // ecx
  char *v17; // r8
  int v18; // edi
  int v19; // r11d
  int v21; // ecx
  int i; // ecx
  char *v23; // r9
  int v24; // r8d
  int v25; // r11d
  int v26; // r8d
  char *k; // rax
  int v28; // ecx
  int *v29; // r11
  int v30; // ecx

  v2 = *(int *)a1;
  v3 = (int *)((char *)a1 + 12);
  v4 = (int *)((char *)a2 + 12);
  v5 = v3;
  v6 = *(int *)a2;
  v7 = (char *)a1 + 8 * v2 + 12;
  v8 = v6 + v2;
  v9 = *v4;
  v10 = 8 * v8 + 12;
  v11 = *v3;
  v12 = &v4[2 * v6];
  if ( *v3 < *v4 )
  {
    v21 = v3[3];
    v14 = (char *)(v3 + 2);
    for ( i = (_DWORD)v14 + v21 - v5[1] - (_DWORD)v5; ; i = *((_DWORD *)v23 + 3) - *((_DWORD *)v23 + 1) + 8 )
    {
      v10 += i;
      v23 = v14;
      if ( *(_DWORD *)v14 >= v9 )
        break;
      v14 += 8;
      if ( v14 == v7 )
        return v10;
    }
    v13 = v4 + 2;
    if ( *(_DWORD *)v14 > v9 )
    {
      j = *((_DWORD *)v14 + 1) + v4[3] - *((_DWORD *)v14 - 1) - v4[1] + 16;
      goto LABEL_4;
    }
    v14 += 8;
    if ( v14 != v7 )
    {
      j = *((_DWORD *)v14 + 1) + v4[3] - *((_DWORD *)v14 - 1) - v4[1] + 16;
      goto LABEL_4;
    }
  }
  else
  {
    v13 = v4 + 2;
    if ( v11 > v9 )
    {
      while ( 1 )
      {
        if ( v11 < *v13 )
        {
          v24 = v3[3] - *(v13 - 1);
          v14 = (char *)(v3 + 2);
          v10 += v13[1] + v24 - *((_DWORD *)v14 - 1) + 16;
          goto LABEL_5;
        }
        v29 = v13 + 2;
        if ( v11 <= *v13 )
          break;
        v13 += 2;
        if ( v13 == v12 )
        {
          v30 = v3[3];
          v14 = (char *)(v3 + 2);
          v10 += (_DWORD)v14 + v30 - v5[1] - (_DWORD)v5;
          goto LABEL_22;
        }
      }
      v14 = (char *)(v3 + 2);
      v13 += 2;
      if ( v29 != v12 )
      {
        j = v5[3] + v29[1] - *(v29 - 1) + 8 - v5[1] + 8;
        goto LABEL_4;
      }
      v10 += (_DWORD)v14 + *((_DWORD *)v14 + 1) - (_DWORD)v5 - v5[1];
    }
    else
    {
      v14 = (char *)(v3 + 2);
      for ( j = *((_DWORD *)v14 + 1) + v4[3] - *((_DWORD *)v14 - 1) - v4[1] + 16; ; j = v25
                                                                                      + v13[1]
                                                                                      - *(v13 - 1)
                                                                                      - v26
                                                                                      + 16 )
      {
        while ( 1 )
        {
LABEL_4:
          while ( 1 )
          {
            v10 += j;
LABEL_5:
            v16 = *v13;
            v17 = v14;
            if ( *(_DWORD *)v14 >= *v13 )
              break;
            v14 += 8;
            if ( v14 == v7 )
              return v10;
            j = *((_DWORD *)v14 + 1) + v13[1] - *(v13 - 1) - *((_DWORD *)v14 - 1) + 8;
            v10 += 8;
          }
          v13 += 2;
          if ( *(_DWORD *)v14 > v16 )
            break;
          v14 += 8;
          if ( v14 == v7 )
            return v10;
          v18 = *((_DWORD *)v17 + 3) - *((_DWORD *)v17 + 1);
          if ( v13 == v12 )
          {
            v19 = v18 + 8;
            goto LABEL_21;
          }
          j = v18 + v13[1] - *(v13 - 1) + 16;
        }
        v25 = *((_DWORD *)v14 + 1);
        v26 = *((_DWORD *)v14 - 1);
        if ( v13 == v12 )
          break;
      }
      v19 = v25 - v26;
      v10 += 8;
LABEL_21:
      v10 += v19;
    }
LABEL_22:
    for ( k = v14 + 8; k != v7; v10 += v28 + 8 )
    {
      v28 = *((_DWORD *)k + 1) - *((_DWORD *)k - 1);
      k += 8;
    }
  }
  return v10;
}
