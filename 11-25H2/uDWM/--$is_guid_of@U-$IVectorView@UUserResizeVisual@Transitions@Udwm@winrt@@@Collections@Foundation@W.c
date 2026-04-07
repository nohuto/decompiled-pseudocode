/*
 * XREFs of ??$is_guid_of@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DD4D4
 * Callers:
 *     ??$find@U?$find_iid_traits@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@12@@Z @ 0x1800DD300 (--$find@U-$find_iid_traits@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@_ea_1800DD300.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>>(
        _QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1
     - winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>>;
  if ( *a1 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>> )
    v1 = a1[1] - 0x15353155B0C7238DLL;
  return v1 == 0;
}
