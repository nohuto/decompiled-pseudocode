/*
 * XREFs of ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x1800D7860
 * Callers:
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1800D7574 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x1800D7628 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 */

bool __fastcall CProjectedShadow::CanUseFastShadow(CProjectedShadowCaster **this)
{
  return (unsigned __int8)CProjectedShadowCaster::IsRectangular(this[10])
      && (float)(*((float *)this + 96) * 0.5) >= *((float *)this + 24);
}
