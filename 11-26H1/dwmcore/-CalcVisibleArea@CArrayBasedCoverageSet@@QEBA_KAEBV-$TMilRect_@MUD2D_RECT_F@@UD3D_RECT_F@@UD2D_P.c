/*
 * XREFs of ?CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180258E80
 * Callers:
 *     ?CalcVisibleArea@COcclusionContext@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18024F9F4 (-CalcVisibleArea@COcclusionContext@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 * Callees:
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetArea@CRegion@@QEBA_KXZ @ 0x180293B94 (-GetArea@CRegion@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall CArrayBasedCoverageSet::CalcVisibleArea(__int64 a1, __int64 a2, int a3)
{
  double v3; // xmm2_8
  unsigned __int64 Area; // rbx
  int *v8; // rax
  const struct tagRECT *v10; // rax
  unsigned int i; // esi
  const struct D2D_RECT_F *v12; // rcx
  __int64 v13; // rdx
  const struct tagRECT *v14; // rax
  int v15[4]; // [rsp+28h] [rbp-79h] BYREF
  FastRegion::CRegion *v16[10]; // [rsp+38h] [rbp-69h] BYREF
  FastRegion::CRegion *v17[10]; // [rsp+88h] [rbp-19h] BYREF

  Area = 0LL;
  if ( a3 )
  {
    v10 = (const struct tagRECT *)PixelAlign(v15, (unsigned int *)a2, v3);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v16, v10);
    for ( i = 0; i < *(_DWORD *)(a1 + 24) && *(_DWORD *)(*(_QWORD *)a1 + 48LL * i + 16) < a3; ++i )
    {
      if ( !IsEmpty((const struct D2D_RECT_F *)(*(_QWORD *)a1 + 48LL * i))
        && !IsEmpty(v12)
        && !IsEmpty((const struct D2D_RECT_F *)a2)
        && *(float *)(v13 + 8) > *(float *)a2
        && *(float *)(a2 + 8) > *(float *)v13
        && *(float *)(v13 + 12) > *(float *)(a2 + 4)
        && *(float *)(a2 + 12) > *(float *)(v13 + 4) )
      {
        v14 = (const struct tagRECT *)PixelAlign(v15, (unsigned int *)v13, v3);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v17, v14);
        CRegion::Subtract(v16, v17);
        if ( !*(_DWORD *)v16[0] )
        {
          FastRegion::CRegion::FreeMemory(v17);
          goto LABEL_18;
        }
        FastRegion::CRegion::FreeMemory(v17);
      }
    }
    Area = CRegion::GetArea((CRegion *)v16);
LABEL_18:
    FastRegion::CRegion::FreeMemory(v16);
    return Area;
  }
  else
  {
    v8 = PixelAlign(v15, (unsigned int *)a2, v3);
    return (v8[3] - v8[1]) * (v8[2] - *v8);
  }
}
