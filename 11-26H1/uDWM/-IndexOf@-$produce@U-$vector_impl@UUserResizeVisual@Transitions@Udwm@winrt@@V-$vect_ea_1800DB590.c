/*
 * XREFs of ?IndexOf@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x1800DB590
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@_N@impl@winrt@@YA?A_P$$QEA_N@Z @ 0x18008815C (--$detach_from@_N@impl@winrt@@YA-A_P$$QEA_N@Z.c)
 *     ?IndexOf@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBA_NAEBUUserResizeVisual@Transitions@Udwm@2@AEAI@Z @ 0x1800DB5E0 (-IndexOf@-$vector_view_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@U.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>>::IndexOf(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v6 = a1 + 16;
  if ( !a1 )
    v6 = 40LL;
  LOBYTE(v8) = winrt::vector_view_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::IndexOf(
                 v6,
                 &v9);
  *a4 = winrt::impl::detach_from<bool>((__int64)&v8);
  return 0LL;
}
