/*
 * XREFs of ?clear@?$vector_facade@PEAVCResponseItemBase@@V?$buffer_impl@PEAVCResponseItemBase@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800316C4
 * Callers:
 *     ?UpdateClientInfo@CDesktopTree@@MEAAXXZ @ 0x180140BE0 (-UpdateClientInfo@CDesktopTree@@MEAAXXZ.c)
 *     ??1?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180140ECC (--1-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expan.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180160BE0 (-EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023DFE8 (-TrimCheckCandidatesList@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 */

_QWORD *__fastcall detail::vector_facade<CResponseItemBase *,detail::buffer_impl<CResponseItemBase *,2,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 v1; // r8
  _QWORD *result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (a1[1] - *a1) >> 3;
  if ( v1 )
  {
    result = stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v5, *a1, v1);
    *(_QWORD *)(v4 + 8) += -8 * v3;
  }
  return result;
}
