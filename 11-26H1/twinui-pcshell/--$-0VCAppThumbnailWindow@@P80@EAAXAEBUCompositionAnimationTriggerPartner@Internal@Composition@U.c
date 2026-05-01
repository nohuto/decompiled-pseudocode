/*
 * XREFs of ??$?0VCAppThumbnailWindow@@P80@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Z@?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVCAppThumbnailWindow@@P84@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@23@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@67823@@Z@Z @ 0x1804A2264
 * Callers:
 *     ?DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x1804A5CB0 (-DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationT.c)
 *     ?DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x1804A5DE0 (-DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPar.c)
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x1804A7F50 (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 * Callees:
 *     ??0_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_@@QEAA@AEBQEAVInputAppPreloader@KeyboardHosting@@AEBQ812@EAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@45678@@Z@Z @ 0x1802AF034 (--0_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_@@QEAA@AEBQEAVInputAppPreloader@KeyboardHosting@@AEB.c)
 *     ??$?0V_lambda_4a08b89459a137103a9f10b038af039e_@@@?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_4a08b89459a137103a9f10b038af039e_@@@Z @ 0x1804A2040 (--$-0V_lambda_4a08b89459a137103a9f10b038af039e_@@@-$TypedEventHandler@UCompositionAnimationTrigg.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  v5 = *(_OWORD *)_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_::_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_(v6, &v7, &v8);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>(
    a1,
    &v5);
  return a1;
}
