/*
 * XREFs of ??8@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18017FEC0
 * Callers:
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180022AA0 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180023DF0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180099FC0 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetColor@?$CColorBrushGeneratedT@VCColorBrush@@VCBrush@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18017FC70 (-SetColor@-$CColorBrushGeneratedT@VCColorBrush@@VCBrush@@@@QEAAJU_D3DCOLORVALUE@@@Z.c)
 *     ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18017FD30 (-GetNextRunningEffect@CBrushRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnco.c)
 *     ?SetBoundsStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18018273C (-SetBoundsStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@.c)
 *     ?SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18018E6FC (-SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18021A844 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?SetColor@?$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024A808 (-SetColor@-$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@QEAAJU_D3DCOLORVALUE@@@Z.c)
 *     ?SetColor@?$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024A890 (-SetColor@-$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@QEAAJU_D3DCOLORVALUE.c)
 *     ?SetColor@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024A918 (-SetColor@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE@@@Z.c)
 *     ?SetColor@?$CFloodEffectGeneratedT@VCFloodEffect@@VCFilterEffect@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024A994 (-SetColor@-$CFloodEffectGeneratedT@VCFloodEffect@@VCFilterEffect@@@@QEAAJU_D3DCOLORVALUE@@@Z.c)
 *     ?SetInkColor@?$CDelegatedInkCanvasGeneratedT@VCDelegatedInkCanvas@@VCSuperWetSource@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024B424 (-SetInkColor@-$CDelegatedInkCanvasGeneratedT@VCDelegatedInkCanvas@@VCSuperWetSource@@@@QEAAJU_D3.c)
 *     ?SetInnerConeColor@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024B514 (-SetInnerConeColor@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE.c)
 *     ?SetOuterConeColor@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024C6F4 (-SetOuterConeColor@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(float *a1, float *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
