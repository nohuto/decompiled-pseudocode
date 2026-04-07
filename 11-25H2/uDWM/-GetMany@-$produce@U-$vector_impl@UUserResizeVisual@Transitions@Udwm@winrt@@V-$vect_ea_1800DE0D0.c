/*
 * XREFs of ?GetMany@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x1800DE0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@I@impl@winrt@@YA?A_P$$QEAI@Z @ 0x1800DD1EC (--$detach_from@I@impl@winrt@@YA-A_P$$QEAI@Z.c)
 *     ??$zero_abi@UUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@YAXPEAXI@Z @ 0x1800DD5F0 (--$zero_abi@UUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@YAXPEAXI@Z.c)
 *     ?GetMany@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x1800DE200 (-GetMany@-$vector_view_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@U.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  __int64 v9; // rcx
  int v10; // eax
  void *v12; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-10h]
  unsigned int Many; // [rsp+50h] [rbp+18h] BYREF

  winrt::impl::zero_abi<winrt::Udwm::Transitions::UserResizeVisual>(a4, a3);
  v9 = a1 + 16;
  if ( !a1 )
    v9 = 40LL;
  v12 = a4;
  v13 = a3;
  Many = winrt::vector_view_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::GetMany(
           v9,
           a2,
           &v12);
  v10 = winrt::impl::detach_from<unsigned int>(&Many);
  *a5 = v10;
  return 0LL;
}
