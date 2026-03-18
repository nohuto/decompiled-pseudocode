/*
 * XREFs of ?CanFastDisableDesktopPlane@COverlayContext@@IEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180239844
 * Callers:
 *     ?CalcDesktopPlaneClip@COverlayContext@@IEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180239620 (-CalcDesktopPlaneClip@COverlayContext@@IEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180146DA8 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18018BF10 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlayContext::CanFastDisableDesktopPlane(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  unsigned int v7[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  if ( !*a2 )
    return 0;
  v3 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_DWORD **)v3;
  v7[0] = *(_DWORD *)(*(_QWORD *)v3 + 68LL);
  v7[1] = v5[18];
  v7[2] = v5[19];
  v7[3] = v5[20];
  v8 = *(_OWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 256LL))(v4) + 24);
  return TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(v7, &v8)
      && TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(v5 + 57);
}
