/*
 * XREFs of ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x18005AB18
 * Callers:
 *     ??0CTreeDirty@@QEAA@PEAVCVisualTree@@@Z @ 0x18005A0B8 (--0CTreeDirty@@QEAA@PEAVCVisualTree@@@Z.c)
 *     ?Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005A2A4 (-Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 * Callees:
 *     <none>
 */

CDirtyRegionAnnotation *__fastcall CDirtyRegionAnnotation::CDirtyRegionAnnotation(CDirtyRegionAnnotation *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
