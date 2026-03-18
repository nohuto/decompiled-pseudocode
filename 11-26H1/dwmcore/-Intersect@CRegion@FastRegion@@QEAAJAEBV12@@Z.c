/*
 * XREFs of ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18012DEDC
 * Callers:
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18002B340 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18012D6D0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18012DBA4 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x18012DEA8 (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x18012F240 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18012F9DC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1801D5CC0 (-AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18012E180 (-EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18012E3B0 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Intersect(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  FastRegion::Internal::CRgnData *v7; // rcx
  const struct FastRegion::Internal::CRgnData *v8; // r14
  unsigned int v9; // esi
  int *v10; // r15
  _DWORD *v11; // rbx
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // edi
  char *v16; // r8
  _BYTE *v17; // r9
  _DWORD *v18; // r11
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r9
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v26; // rax
  int v27; // [rsp+20h] [rbp-E0h]
  FastRegion::Internal::CRgnData *lpMem; // [rsp+28h] [rbp-D8h]
  _BYTE v29[256]; // [rsp+30h] [rbp-D0h] BYREF

  v4 = *a2;
  v5 = *this;
  if ( !*(_DWORD *)v4 )
  {
    *(_DWORD *)v5 = 0;
    return 0LL;
  }
  if ( !*(_DWORD *)v5 )
    return 0LL;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeIntersect(v5, v4);
  v7 = (FastRegion::Internal::CRgnData *)v29;
  lpMem = (FastRegion::Internal::CRgnData *)v29;
  v27 = v6;
  if ( (unsigned __int64)v6 > 0x100 )
  {
    v26 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v6);
    v7 = v26;
    if ( !v26 )
      return 2147942414LL;
    lpMem = v26;
  }
  FastRegion::Internal::CRgnData::Intersect(v7, *this, *a2);
  v8 = lpMem;
  v9 = 0;
  if ( *(_DWORD *)lpMem )
  {
    v10 = (int *)(this + 1);
    if ( v29 == (_BYTE *)lpMem )
    {
      v11 = *this;
      v12 = 60;
      v13 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
          - *((_DWORD *)lpMem + 4)
          + 8 * *(_DWORD *)lpMem
          - 12
          + 8 * (*(_DWORD *)lpMem - 1)
          + 24;
      if ( v10 != (int *)*this )
        v12 = *v10;
      if ( v12 >= v13 )
        goto LABEL_9;
      v11 = MIDL_user_allocate(v13);
      if ( v11 )
      {
        FastRegion::CRegion::FreeMemory(this);
        *this = (const struct FastRegion::Internal::CRgnData *)v11;
        *v10 = v13;
LABEL_9:
        v14 = *(_DWORD *)lpMem;
        v15 = 0;
        *v11 = *(_DWORD *)lpMem;
        v11[1] = *((_DWORD *)lpMem + 1);
        v11[2] = *((_DWORD *)lpMem + 2);
        v16 = (char *)&v11[2 * v14 + 3];
        v17 = (char *)lpMem + *((int *)lpMem + 4) + 12;
        if ( v14 > 0 )
        {
          v18 = v11 + 3;
          do
          {
            *v18 = *(_DWORD *)((char *)v18 + lpMem - (FastRegion::Internal::CRgnData *)v11);
            v18 += 2;
            v19 = v15++;
            v11[2 * v19 + 4] = (_DWORD)lpMem
                             + 8 * v19
                             + 4 * ((v16 - v17) >> 2)
                             + *((_DWORD *)lpMem + 2 * v19 + 4)
                             - ((_DWORD)v11
                              + 8 * v19);
          }
          while ( v15 < *v11 );
        }
        v20 = (__int64)lpMem + 8 * *(_DWORD *)lpMem + 4;
        v21 = (unsigned __int64)((int)v20 + *(_DWORD *)(v20 + 4) - *((_DWORD *)lpMem + 4) - ((int)lpMem + 12)) >> 2;
        v22 = (int)v21;
        if ( (int)v21 > 0 )
        {
          v23 = v17 - v16;
          do
          {
            *(_DWORD *)v16 = *(_DWORD *)&v16[v23];
            v16 += 4;
            --v22;
          }
          while ( v22 );
        }
        v9 = 0;
        goto LABEL_16;
      }
      v9 = -2147024882;
    }
    else
    {
      lpMem = (FastRegion::Internal::CRgnData *)v29;
      FastRegion::CRegion::FreeMemory(this);
      *this = v8;
      *v10 = v27;
    }
  }
  else
  {
    *(_DWORD *)*this = 0;
  }
LABEL_16:
  if ( v29 != (_BYTE *)lpMem )
  {
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  return v9;
}
