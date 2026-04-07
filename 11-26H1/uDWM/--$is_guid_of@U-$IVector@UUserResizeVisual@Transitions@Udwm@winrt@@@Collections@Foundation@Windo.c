/*
 * XREFs of ??$is_guid_of@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DA1DC
 * Callers:
 *     ??$find_iid@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@YA?A_PPEBU?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@01@AEBUguid@1@@Z @ 0x1800DA080 (--$find_iid@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeVisual.c)
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
