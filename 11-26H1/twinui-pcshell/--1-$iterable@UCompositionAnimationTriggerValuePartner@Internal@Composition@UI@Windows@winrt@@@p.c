/*
 * XREFs of ??1?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@XZ @ 0x1802C6028
 * Callers:
 *     ?DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x1804A5CB0 (-DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationT.c)
 *     ?DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x1804A5DE0 (-DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPar.c)
 *     ?SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x1804A7A9C (-SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x1804A7F50 (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x1804A8234 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     ?SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXAEBUGestureAnimationData@Input@UI@WindowsUdk@7@W4ShellView@4UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069D704 (-SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Inte.c)
 *     _CControlCenterExperienceManager::Show_::_1_::dtor$4 @ 0x1806D7210 (_CControlCenterExperienceManager--Show_--_1_--dtor$4.c)
 *     _CAppThumbnailWindow::DirectionChangeTriggerFiredHandler_::_1_::dtor$1 @ 0x1806F0B45 (_CAppThumbnailWindow--DirectionChangeTriggerFiredHandler_--_1_--dtor$1.c)
 *     _CAppThumbnailWindow::SetupFlickScaleFactorAnimations_::_1_::dtor$26 @ 0x1806F0C7D (_CAppThumbnailWindow--SetupFlickScaleFactorAnimations_--_1_--dtor$26.c)
 *     _CAppThumbnailWindow::SetupTriggersForDragDirectionChange_::_1_::dtor$12 @ 0x1806F0CB3 (_CAppThumbnailWindow--SetupTriggersForDragDirectionChange_--_1_--dtor$12.c)
 *     _CAppThumbnailWindow::StartMinimizeGestureOperation_::_1_::dtor$21 @ 0x1806F0D0D (_CAppThumbnailWindow--StartMinimizeGestureOperation_--_1_--dtor$21.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::SetupTaskbarOffsetTrigger_::_1_::dtor$6 @ 0x18070643B (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_18070643B.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::~iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>(
        __int64 a1)
{
  _BYTE *v1; // rax

  v1 = *(_BYTE **)(a1 + 8);
  if ( v1 )
    *v1 = 1;
  if ( !*(_BYTE *)(a1 + 16) )
    *(_QWORD *)a1 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a1);
}
