/*
 * XREFs of ?IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800AF6A4
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800AE51C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z @ 0x1802041E8 (-UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18022864C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNot.c)
 * Callees:
 *     ?IsPixelAligned@@YA_NM@Z @ 0x1800AF700 (-IsPixelAligned@@YA_NM@Z.c)
 */

char __fastcall IsPixelAligned(const struct D2D_RECT_F *a1)
{
  char v1; // dl
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8

  if ( IsPixelAligned(a1->left)
    && IsPixelAligned(*(float *)(v2 + 4))
    && IsPixelAligned(*(float *)(v3 + 8))
    && IsPixelAligned(*(float *)(v4 + 12)) )
  {
    return 1;
  }
  return v1;
}
