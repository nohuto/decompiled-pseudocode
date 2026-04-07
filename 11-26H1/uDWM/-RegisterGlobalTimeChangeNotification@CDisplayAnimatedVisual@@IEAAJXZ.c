/*
 * XREFs of ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180070FDC
 * Callers:
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x180070D5C (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x180070E10 (-StartImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ @ 0x180070EF8 (-SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800AFE00 (-SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800AFEA0 (-StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B0ACC (-SetupDelayBeforeEntranceAnimation@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B0B70 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B14F8 (-SetupDelayBeforeEntranceAnimation@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800B15A0 (-StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B1B38 (-SetupDelayBeforeEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B272C (-SetupDelayBeforeEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B27D0 (-StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ @ 0x1800B3530 (-SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x1800B35D0 (-StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B3DD0 (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B44A0 (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B4540 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification(CDisplayAnimatedVisual *this)
{
  *((_BYTE *)this + 354) = 1;
  return CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
}
