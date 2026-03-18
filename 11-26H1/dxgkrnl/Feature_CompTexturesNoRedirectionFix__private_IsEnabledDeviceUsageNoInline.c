/*
 * XREFs of Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline @ 0x140019460
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x140019350 (-Discard@CFlipManagerToken@@UEAAXXZ.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14001A938 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 * Callees:
 *     Feature_CompTexturesNoRedirectionFix__private_IsEnabledFallback @ 0x140067794 (Feature_CompTexturesNoRedirectionFix__private_IsEnabledFallback.c)
 */

__int64 Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompTexturesNoRedirectionFix__private_featureState & 0x10) != 0 )
    return Feature_CompTexturesNoRedirectionFix__private_featureState & 1;
  else
    return Feature_CompTexturesNoRedirectionFix__private_IsEnabledFallback(
             (unsigned int)Feature_CompTexturesNoRedirectionFix__private_featureState,
             3LL);
}
