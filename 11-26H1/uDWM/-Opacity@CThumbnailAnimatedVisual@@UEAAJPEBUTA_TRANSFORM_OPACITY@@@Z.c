/*
 * XREFs of ?Opacity@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x1800C9190
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Opacity(
        CThumbnailAnimatedVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2,
        __int64 a3)
{
  bool v3; // zf
  double v4; // xmm1_8

  v3 = *((_BYTE *)this + 76) == 0;
  v4 = *((float *)a2 + 5);
  *((double *)this + 7) = v4;
  if ( !v3 )
    v4 = 0.0;
  CVisual::SetOpacity((CThumbnailAnimatedVisual *)((char *)this - 264), v4, a3);
  return 0LL;
}
