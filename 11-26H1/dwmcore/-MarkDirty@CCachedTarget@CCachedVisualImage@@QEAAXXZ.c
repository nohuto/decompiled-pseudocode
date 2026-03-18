/*
 * XREFs of ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x1801A09DC
 * Callers:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18002B2C0 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180092940 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x1801A0388 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCachedVisualImage::CCachedTarget::MarkDirty(CCachedVisualImage::CCachedTarget *this)
{
  if ( !*((_BYTE *)this + 56) )
  {
    (*(void (__fastcall **)(_QWORD, CCachedVisualImage::CCachedTarget *))(**(_QWORD **)this + 240LL))(
      *(_QWORD *)this,
      this);
    *((_BYTE *)this + 56) = 1;
  }
}
