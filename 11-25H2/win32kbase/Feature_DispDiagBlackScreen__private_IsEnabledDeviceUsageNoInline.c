/*
 * XREFs of Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline @ 0x1401CFF30
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140137A28 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?GetBlackScreenTrigger@@YA?AW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@IW4_D3DKMT_BLACK_SCREEN_DETECTION_CALLER@@@Z @ 0x1401CC48C (-GetBlackScreenTrigger@@YA-AW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@IW4_D3DKMT_BLACK_SCREEN_DE.c)
 * Callees:
 *     Feature_DispDiagBlackScreen__private_IsEnabledFallback @ 0x1401CFF68 (Feature_DispDiagBlackScreen__private_IsEnabledFallback.c)
 */

__int64 Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DispDiagBlackScreen__private_featureState & 0x10) != 0 )
    return Feature_DispDiagBlackScreen__private_featureState & 1;
  else
    return Feature_DispDiagBlackScreen__private_IsEnabledFallback(
             (unsigned int)Feature_DispDiagBlackScreen__private_featureState,
             3LL);
}
