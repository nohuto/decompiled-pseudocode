/*
 * XREFs of ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x18026B7F4
 * Callers:
 *     ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x18026BCB8 (-OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180079D94 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAX_N@Z @ 0x18007D3E0 (-Stop@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAX_N@Z.c)
 *     ??$?R$$TUPoint@Foundation@Windows@winrt@@@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$TAEBUPoint@Foundation@Windows@1@@Z @ 0x1800DCC24 (--$-R$$TUPoint@Foundation@Windows@winrt@@@-$event@U-$TypedEventHandler@UIInspectable@Foundation@.c)
 *     ?GetHitTestResultForPoint@WindowDragInputProvider@@AEAA?AUIInspectable@Foundation@Windows@winrt@@AEBUPoint@345@@Z @ 0x1801FBA60 (-GetHitTestResultForPoint@WindowDragInputProvider@@AEAA-AUIInspectable@Foundation@Windows@winrt@.c)
 *     ?ReceivedHitTestResult@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18020C6C0 (-ReceivedHitTestResult@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUWindowDragH.c)
 *     ?StartActivity@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1802A18FC (-StartActivity@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation@Wi.c)
 *     ??1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x1802C4744 (--1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowDragInputProvider::OnArrangementReset(
        WindowDragInputProvider *this,
        const struct tagSHELL_WND_MGMT_SIMPLE_PAYLOAD *a2)
{
  __int64 v3; // rdx
  WindowDragInputProvider *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  unsigned int v6; // eax
  unsigned __int8 v7; // dl
  __int64 v8; // [rsp+20h] [rbp-E0h] BYREF
  float v9[2]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+48h] [rbp-B8h]
  _QWORD v14[42]; // [rsp+60h] [rbp-A0h] BYREF

  v9[0] = (float)*((__int16 *)a2 + 4);
  v9[1] = (float)*((__int16 *)a2 + 5);
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"OnArrangementReset");
  v14[0] = &WindowDragInputProviderTelemetry::OnArrangementReset::`vftable';
  WindowDragInputProviderTelemetry::OnArrangementReset::StartActivity(
    (WindowDragInputProviderTelemetry::OnArrangementReset *)v14,
    (const struct winrt::Windows::Foundation::Point *)v9);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>::operator()<std::nullptr_t,winrt::Windows::Foundation::Point>(
    (__int64)this + 64,
    v3,
    (__int64)v9);
  WindowDragInputProvider::GetHitTestResultForPoint(v4, (const struct winrt::Windows::Foundation::Point *)&v11);
  v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v11;
  if ( v11 )
  {
    v8 = 0LL;
    v12 = 0;
    v13 = 0LL;
    v6 = (**v11)(v11, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>, &v8);
    winrt::check_hresult(v10, v6, &v12);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 7, &v8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
    WindowDragInputProviderTelemetry::OnArrangementReset::ReceivedHitTestResult(
      (WindowDragInputProviderTelemetry::OnArrangementReset *)v14,
      (WindowDragInputProvider *)((char *)this + 56));
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  WindowDragInputProviderTelemetry::OnArrangementReset::Stop(
    (WindowDragInputProviderTelemetry::OnArrangementReset *)v14,
    v7);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
  WindowDragInputProviderTelemetry::OnArrangementReset::~OnArrangementReset((WindowDragInputProviderTelemetry::OnArrangementReset *)v14);
}
