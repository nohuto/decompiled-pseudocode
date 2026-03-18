/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x18020E8A8
 * Callers:
 *     ??1CaptureBitsResponse@@MEAA@XZ @ 0x18009AE40 (--1CaptureBitsResponse@@MEAA@XZ.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18009B48C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AD448 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x18014B068 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18025FE94 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800AD0D4 (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180140ECC (--1-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expan.c)
 *     ??1CD2DClipStack@@QEAA@XZ @ 0x1801832C0 (--1CD2DClipStack@@QEAA@XZ.c)
 *     ??1COccluderClipStack@@QEAA@XZ @ 0x18020E94C (--1COccluderClipStack@@QEAA@XZ.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(COcclusionContext *this)
{
  detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>((__int64 *)this + 170);
  operator delete(*((void **)this + 167));
  operator delete(*((void **)this + 164));
  operator delete(*((void **)this + 161));
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 584);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 62);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 53);
  CLightStack::~CLightStack((COcclusionContext *)((char *)this + 192));
  COccluderClipStack::~COccluderClipStack((COcclusionContext *)((char *)this + 144));
  CD2DClipStack::~CD2DClipStack((void **)this + 15);
  operator delete(*((void **)this + 10));
  operator delete(*((void **)this + 3));
  std::unique_ptr<CVisualTreePath>::~unique_ptr<CVisualTreePath>((__int64 **)this + 1);
}
