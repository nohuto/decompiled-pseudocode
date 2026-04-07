/*
 * XREFs of ?CreateLinearGradientLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCLinearGradientLegacyMilBrushProxy@@@Z @ 0x180096AA4
 * Callers:
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18006ADC8 (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateLinearGradientLegacyMilBrushProxy(__int64 this, CBaseTransformProxy **a2)
{
  return CCompositor::CreateProxy<CLinearGradientLegacyMilBrushProxy>(this, a2);
}
