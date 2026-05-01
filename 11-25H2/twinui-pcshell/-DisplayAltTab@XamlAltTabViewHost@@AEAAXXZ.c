/*
 * XREFs of ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x180106178
 * Callers:
 *     ?ViewLoaded@XamlAltTabViewHost@@UEAAJXZ @ 0x180678790 (-ViewLoaded@XamlAltTabViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FC828 (-CreateInTileStore@-$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTi.c)
 *     ?TintOpacity@?$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@N@Z @ 0x180106240 (-TintOpacity@-$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@.c)
 *     ?Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180106280 (-Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180289DF0 (--1-$com_ptr_t@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returnco.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028A668 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028A69C (-ensure_data@-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@@tip.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AC1C (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18028ADC4 (-reset@-$com_ptr_t@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_retu.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028ADE8 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlAltTabViewHost::DisplayAltTab(XamlAltTabViewHost *this, __int64 a2)
{
  __int64 *v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 168);
  LOBYTE(a2) = 1;
  winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrush<winrt::Windows::UI::Xaml::Media::IAcrylicBrush>::TintOpacity(
    (char *)this + 168,
    a2);
  winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore(v3);
  v4 = (_QWORD *)((char *)this + 504);
  v5 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::ensure_data((char *)this + 504);
  v6 = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 272));
  tip2::details::shared_data<0,0,1>::begin_update(v5 + 8);
  *(_BYTE *)(v5 + 264) = 1;
  tip2::details::shared_data<0,0,0>::end_update(v5 + 8);
  wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>,wil::err_returncode_policy>::reset(&v6);
  wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>,wil::err_returncode_policy>(&v6);
  if ( *v4 )
    tip2::details::shared_data<0,0,0>::complete_without_lock(*v4 + 8LL);
  XamlSwitcherTelemetry::ShowAltTab::Stop((XamlAltTabViewHost *)((char *)this + 176), 1);
}
