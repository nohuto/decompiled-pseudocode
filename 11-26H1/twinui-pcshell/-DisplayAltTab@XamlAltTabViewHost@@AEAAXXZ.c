/*
 * XREFs of ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x18009FC98
 * Callers:
 *     ?ViewLoaded@XamlAltTabViewHost@@UEAAJXZ @ 0x18069F2A0 (-ViewLoaded@XamlAltTabViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?TintOpacity@?$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@N@Z @ 0x18009FD74 (-TintOpacity@-$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@.c)
 *     ?Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x18009FDB8 (-Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A0014 (-CreateInTileStore@-$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTi.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18027EEF4 (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802825E4 (--1-$com_ptr_t@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returnco.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180282604 (-reset@-$com_ptr_t@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_retu.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028262C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180283040 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028307C (-ensure_data@-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlAltTabViewHost::DisplayAltTab(XamlAltTabViewHost *this)
{
  __int64 v2; // rdx
  _QWORD *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                    &v5,
                    this);
  LOBYTE(v2) = 1;
  winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrush<winrt::Windows::UI::Xaml::Media::IAcrylicBrush>::TintOpacity(
    (char *)this + 168,
    v2);
  winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore(
    (char *)this + 168,
    0LL);
  v3 = (_QWORD *)((char *)this + 504);
  v4 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::ensure_data((char *)this + 504);
  v5 = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 280));
  tip2::details::shared_data<0,0,1>::begin_update(v4 + 8);
  *(_BYTE *)(v4 + 272) = 1;
  tip2::details::shared_data<0,0,0>::end_update(v4 + 8);
  wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>,wil::err_returncode_policy>::reset(&v5);
  wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>,wil::err_returncode_policy>(&v5);
  if ( *v3 )
    tip2::details::shared_data<0,0,0>::complete_without_lock(*v3 + 8LL);
  XamlSwitcherTelemetry::ShowAltTab::Stop((XamlAltTabViewHost *)((char *)this + 176), 1);
}
