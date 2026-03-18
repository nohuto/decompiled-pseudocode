/*
 * XREFs of ?CalcDesktopClip@COverlayContext@@IEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802394AC
 * Callers:
 *     ?CalcDesktopPlaneClip@COverlayContext@@IEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180239620 (-CalcDesktopPlaneClip@COverlayContext@@IEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-.c)
 * Callees:
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x1800F5C08 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180146DA8 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18016A260 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlayContext::CalcDesktopClip(__int64 a1, unsigned __int64 *a2, struct tagRECT *a3)
{
  bool v3; // zf
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // edi
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  const struct tagRECT *v13; // rcx
  bool BoundingRect; // bl
  __int128 v16; // [rsp+20h] [rbp-89h] BYREF
  LONG *v17; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v18[18]; // [rsp+38h] [rbp-71h] BYREF
  FastRegion::CRegion *v19[10]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *(_DWORD *)(a1 + 19048) == 0;
  v17 = v18;
  v18[0] = 0;
  if ( v3 )
  {
    v6 = *(_DWORD *)(a1 + 19016);
    v7 = *(_DWORD *)(a1 + 19008);
    if ( v7 < v6 )
    {
      v8 = *(_DWORD *)(a1 + 19020);
      v9 = *(_DWORD *)(a1 + 19012);
      if ( v9 < v8 )
      {
        v18[0] = 2;
        v18[4] = 16;
        v18[6] = 16;
        v18[1] = v7;
        v18[2] = v6;
        v18[3] = v9;
        v18[7] = v7;
        v18[8] = v6;
        v18[5] = v8;
      }
    }
  }
  else
  {
    v16 = *(_OWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 256LL))(*(_QWORD *)(a1 + 56)) + 24);
    CRegion::SetRectangle((CRegion *)&v17, (const struct MilRectU *)&v16);
  }
  v10 = *(_DWORD *)a2 - 1;
  if ( v10 >= 0 )
  {
    v11 = v10;
    do
    {
      v12 = *(_QWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v11);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v19, (const struct tagRECT *)(v12 + 68));
      CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)&v17, v19);
      FastRegion::CRegion::FreeMemory(v19);
      if ( !TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(v12 + 228)) )
      {
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v19, v13);
        CRegion::Union((const struct FastRegion::Internal::CRgnData **)&v17, v19);
        FastRegion::CRegion::FreeMemory(v19);
      }
      --v11;
      --v10;
    }
    while ( v10 >= 0 );
  }
  BoundingRect = FastRegion::CRegion::GetBoundingRect(&v17, a3);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v17);
  return BoundingRect;
}
