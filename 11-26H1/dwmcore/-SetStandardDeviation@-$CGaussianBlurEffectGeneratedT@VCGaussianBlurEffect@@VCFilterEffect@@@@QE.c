/*
 * XREFs of ?SetStandardDeviation@?$CGaussianBlurEffectGeneratedT@VCGaussianBlurEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024EA00
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CGaussianBlurEffectGeneratedT@VCGaussianBlurEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D510 (-SetProperty@-$CGaussianBlurEffectGeneratedT@VCGaussianBlurEffect@@VCFilterEffect@@@@MEAAJUDCOMP.c)
 *     ?SetProperty@?$CShadowEffectGeneratedT@VCShadowEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024DDF0 (-SetProperty@-$CShadowEffectGeneratedT@VCShadowEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROP.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGaussianBlurEffectGeneratedT<CGaussianBlurEffect,CFilterEffect>::SetStandardDeviation(
        __int64 a1,
        float a2)
{
  float v2; // xmm1_4

  v2 = fmaxf(a2, 0.0);
  if ( v2 != *(float *)(a1 + 352) )
  {
    *(float *)(a1 + 352) = v2;
    if ( *(_QWORD *)(a1 + 48) )
      CResource::InvalidateConsumingAnimationsInternal(a1);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL, 0LL);
  }
  return 0LL;
}
