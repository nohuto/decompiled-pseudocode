/*
 * XREFs of ?GetAlphaDescriptor@CColorMatrixEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ @ 0x1802473C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CColorMatrixEffect::GetAlphaDescriptor(__int64 a1)
{
  return *(float *)(a1 + 412) != 0.0 || *(float *)(a1 + 428) != 1.0;
}
