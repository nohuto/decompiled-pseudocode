/*
 * XREFs of ??$find_iid@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@YA?A_PPEBU?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@01@AEBUguid@1@@Z @ 0x1800DA080
 * Callers:
 *     ?find_interface@?$implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800DCD30 (-find_interface@-$implements@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DA18C (--$is_guid_of@U-$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Win.c)
 *     ??$is_guid_of@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DA1DC (--$is_guid_of@U-$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windo.c)
 *     ??$is_guid_of@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DA204 (--$is_guid_of@U-$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@W.c)
 */

__int64 __fastcall winrt::impl::find_iid<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9

  if ( (unsigned __int8)winrt::is_guid_of<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>(
                          a2,
                          a2,
                          a1) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((v4 + 16) & -(__int64)(v4 != 0));
  if ( (unsigned __int8)winrt::is_guid_of<winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>>(
                          v3,
                          v2,
                          v4,
                          0LL) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((v6 + 24) & -(__int64)(v6 != 0));
  if ( (unsigned __int8)winrt::is_guid_of<winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>() )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((v7 + 32) & -(__int64)(v7 != 0));
  return v8;
}
