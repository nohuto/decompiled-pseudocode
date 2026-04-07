/*
 * XREFs of ??$find@U?$find_iid_traits@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@2345@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@12@@Z @ 0x1800DD2C0
 * Callers:
 *     ??$find_iid@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@YA?A_PPEBU?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@01@AEBUguid@1@@Z @ 0x1800DD3F0 (--$find_iid@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeVisual.c)
 * Callees:
 *     ??$is_guid_of@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DD4AC (--$is_guid_of@U-$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windo.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>::find<winrt::impl::find_iid_traits<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>>>(
        __int64 a1)
{
  _QWORD *v1; // rdx

  if ( (unsigned __int8)winrt::is_guid_of<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>(
                          *(_QWORD *)(a1 + 8),
                          a1) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v1 + 16LL) & -(__int64)(*v1 != 0LL));
  else
    return winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>::find<winrt::impl::find_iid_traits<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>>>(v1);
}
