/*
 * XREFs of Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14004B08C
 * Callers:
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14003B7E0 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 *     VidSchCancelPresentAtFlips @ 0x140040840 (VidSchCancelPresentAtFlips.c)
 *     VidSchInitializeAdapter @ 0x1400C2230 (VidSchInitializeAdapter.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback @ 0x14004B0C8 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompositionSwapchainAdvancedSyncSupport__private_featureState & 0x10) != 0 )
    return Feature_CompositionSwapchainAdvancedSyncSupport__private_featureState & 1;
  else
    return Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback(
             (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_featureState,
             3LL);
}
