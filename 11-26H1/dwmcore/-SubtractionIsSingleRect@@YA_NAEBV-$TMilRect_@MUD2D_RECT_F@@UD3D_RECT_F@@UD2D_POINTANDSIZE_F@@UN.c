/*
 * XREFs of ?SubtractionIsSingleRect@@YA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801B6974
 * Callers:
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x180201808 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 * Callees:
 *     <none>
 */

bool __fastcall SubtractionIsSingleRect(float *a1, float *a2)
{
  float v2; // xmm1_4

  v2 = a2[1];
  return v2 >= a1[1] && a1[3] >= a2[3] && (*a2 >= *a1 || a1[2] >= a2[2])
      || *a2 >= *a1 && a1[2] >= a2[2] && (v2 >= a1[1] || a1[3] >= a2[3]);
}
