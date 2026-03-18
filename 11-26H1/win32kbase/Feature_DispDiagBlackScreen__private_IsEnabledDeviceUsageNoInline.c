/*
 * XREFs of Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline @ 0x1401F9844
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140172218 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     DrvDxgkCheckDisplayState @ 0x1401F784C (DrvDxgkCheckDisplayState.c)
 * Callees:
 *     Feature_DispDiagBlackScreen__private_IsEnabledFallback @ 0x1401F9880 (Feature_DispDiagBlackScreen__private_IsEnabledFallback.c)
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
