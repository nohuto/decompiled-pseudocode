/*
 * XREFs of ??$find@U?$find_iid_traits@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@12@@Z @ 0x1800DD300
 * Callers:
 *     ??$find@U?$find_iid_traits@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@2345@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@12@@Z @ 0x1800DD2C0 (--$find@U-$find_iid_traits@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UU.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DD45C (--$is_guid_of@U-$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Win.c)
 *     ??$is_guid_of@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DD4D4 (--$is_guid_of@U-$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@W.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>::find<winrt::impl::find_iid_traits<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r8

  if ( (unsigned __int8)winrt::is_guid_of<winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>>(
                          *(_QWORD *)(a1 + 8),
                          a2,
                          a1) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v3 + 24LL) & -(__int64)(*v3 != 0LL));
  if ( (unsigned __int8)winrt::is_guid_of<winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>(
                          v2,
                          0LL) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v6 + 32LL) & -(__int64)(*v6 != 0LL));
  return v5;
}
