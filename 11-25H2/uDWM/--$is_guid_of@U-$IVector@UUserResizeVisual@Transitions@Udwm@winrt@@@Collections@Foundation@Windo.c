/*
 * XREFs of ??$is_guid_of@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DD4AC
 * Callers:
 *     ??$find@U?$find_iid_traits@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@2345@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@12@@Z @ 0x1800DD2C0 (--$find@U-$find_iid_traits@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UU.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>(
        _QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1
     - winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>;
  if ( *a1 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>> )
    v1 = a1[1] - 0x11406A88ABBB0784LL;
  return v1 == 0;
}
