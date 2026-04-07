/*
 * XREFs of ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NMM@Z @ 0x1800CF8F4
 * Callers:
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z @ 0x1800CF6E8 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z @ 0x1800CF928 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CThumbnailVisual::s_IsCloseEnoughToReuse(float a1, float a2)
{
  return a2 > 0.0 && (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - a2) & _xmm) / a2) < 0.1;
}
