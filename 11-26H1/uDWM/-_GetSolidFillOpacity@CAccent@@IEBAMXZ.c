/*
 * XREFs of ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x18007034C
 * Callers:
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCNineGridVisual@@PEAVCVisual@@@Z @ 0x180063914 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCNineGridVisual@@PEAVCVisual@@@.c)
 * Callees:
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18008DA1C (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 */

float __fastcall CAccent::_GetSolidFillOpacity(CAccent *this)
{
  float result; // xmm0_4
  __int64 v2; // r8

  result = FLOAT_1_0;
  if ( CAccent::_AnyTransparentBackground(this) )
    return (float)*(unsigned __int8 *)(v2 + 259) / 255.0;
  return result;
}
