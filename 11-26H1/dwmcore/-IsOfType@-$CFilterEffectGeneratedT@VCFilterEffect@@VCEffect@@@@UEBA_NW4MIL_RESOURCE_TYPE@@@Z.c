/*
 * XREFs of ?IsOfType@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248EB0
 * Callers:
 *     ?IsOfType@?$CAffineTransform2DEffectGeneratedT@VCAffineTransform2DEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248CC0 (-IsOfType@-$CAffineTransform2DEffectGeneratedT@VCAffineTransform2DEffect@@VCFilterEffect@@@@UEBA.c)
 *     ?IsOfType@?$CArithmeticCompositeEffectGeneratedT@VCArithmeticCompositeEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248D20 (-IsOfType@-$CArithmeticCompositeEffectGeneratedT@VCArithmeticCompositeEffect@@VCFilterEffect@@@@.c)
 *     ?IsOfType@?$CBlendEffectGeneratedT@VCBlendEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248D50 (-IsOfType@-$CBlendEffectGeneratedT@VCBlendEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?IsOfType@?$CBrightnessEffectGeneratedT@VCBrightnessEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248DB0 (-IsOfType@-$CBrightnessEffectGeneratedT@VCBrightnessEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOUR.c)
 *     ?IsOfType@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248DE0 (-IsOfType@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESO.c)
 *     ?IsOfType@?$CCompositeEffectGeneratedT@VCCompositeEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248E10 (-IsOfType@-$CCompositeEffectGeneratedT@VCCompositeEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE.c)
 *     ?IsOfType@?$CFloodEffectGeneratedT@VCFloodEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248EE0 (-IsOfType@-$CFloodEffectGeneratedT@VCFloodEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?IsOfType@?$CGaussianBlurEffectGeneratedT@VCGaussianBlurEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248F10 (-IsOfType@-$CGaussianBlurEffectGeneratedT@VCGaussianBlurEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RE.c)
 *     ?IsOfType@?$CHueRotationEffectGeneratedT@VCHueRotationEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180248F40 (-IsOfType@-$CHueRotationEffectGeneratedT@VCHueRotationEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESO.c)
 *     ?IsOfType@?$CSaturationEffectGeneratedT@VCSaturationEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180249080 (-IsOfType@-$CSaturationEffectGeneratedT@VCSaturationEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOUR.c)
 *     ?IsOfType@?$CShadowEffectGeneratedT@VCShadowEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180249160 (-IsOfType@-$CShadowEffectGeneratedT@VCShadowEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@.c)
 *     ?IsOfType@?$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18027A370 (-IsOfType@-$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@UEBA_NW4MI.c)
 *     ?IsOfType@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802852F0 (-IsOfType@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@UEBA_NW4MIL_.c)
 *     ?IsOfType@?$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180285C70 (-IsOfType@-$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@UEBA_NW4MIL_RESOUR.c)
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180189E80 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 */

char __fastcall CFilterEffectGeneratedT<CFilterEffect,CEffect>::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 51 )
    return 1;
  v2 = CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
