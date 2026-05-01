/*
 * XREFs of ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x180498A90
 * Callers:
 *     _lambda_eb02d5272acc639a9001bc530d909dad_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&_ @ 0x1804915E8 (_lambda_eb02d5272acc639a9001bc530d909dad_--operator()_winrt--Windows--UI--Composition--Internal-.c)
 *     ?DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x180494DF0 (-DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationT.c)
 *     ?DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x180494F30 (-DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPar.c)
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x180498F50 (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 *     ??1EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180675DA0 (--1EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
        _QWORD *a1,
        _QWORD *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, *a2);
}
