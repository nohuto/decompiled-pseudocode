/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_4a08b89459a137103a9f10b038af039e_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804A7430
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031818C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>,_lambda_4a08b89459a137103a9f10b038af039e_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>>);
}
