/*
 * XREFs of ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x180273A28
 * Callers:
 *     ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x180273D70 (-OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z.c)
 * Callees:
 *     ??1OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x18004828C (--1OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004A0B8 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18004A33C (-Stop@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180061EB0 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$?R$$TUPoint@Foundation@Windows@winrt@@@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$TAEBUPoint@Foundation@Windows@1@@Z @ 0x1800E0E10 (--$-R$$TUPoint@Foundation@Windows@winrt@@@-$event@U-$TypedEventHandler@UIInspectable@Foundation@.c)
 *     ?AppWindow@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CDA74 (-AppWindow@-$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapCom.c)
 *     ?GetHitTestResultForPoint@WindowDragInputProvider@@AEAA?AUIInspectable@Foundation@Windows@winrt@@AEBUPoint@345@@Z @ 0x180207CA0 (-GetHitTestResultForPoint@WindowDragInputProvider@@AEAA-AUIInspectable@Foundation@Windows@winrt@.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180223CCC (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?StartActivity@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18023FEC0 (-StartActivity@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802470A0 (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180247AFC (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 *     ?IsActive@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180273F68 (-IsActive@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplor.c)
 *     ?TryInsertAfterWindow@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x180273FB4 (-TryInsertAfterWindow@-$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWin.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetSafetyRectFromMonitor@WindowDragInputProvider@@AEBA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1802B4C28 (-GetSafetyRectFromMonitor@WindowDragInputProvider@@AEBA-AUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?SuggestedWindowPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180591238 (-SuggestedWindowPositions@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowDragInputProvider::OnGetArrangementRects(
        WindowDragInputProvider *this,
        struct _WINDOW_ARRANGEMENT_INFO *a2)
{
  float v4; // xmm1_4
  __int64 v5; // rdx
  WindowDragInputProvider *v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rbx
  unsigned int v8; // eax
  char *v9; // r14
  float *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  unsigned int v15; // eax
  const char *v16; // r9
  float *v17; // rax
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r15d
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v26; // rdi
  __int64 v27; // r14
  int v28; // eax
  WindowDragInputProvider *v29; // rcx
  int pvParam; // [rsp+20h] [rbp-E0h] BYREF
  struct tagRECT pv; // [rsp+28h] [rbp-D8h] BYREF
  float v32[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, void *, struct tagRECT *); // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B0h]
  _QWORD v36[42]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v4 = (float)*((int *)a2 + 1);
  v32[0] = (float)*(int *)a2;
  v32[1] = v4;
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v36,
    (__int64)"OnGetArrangementRects");
  v36[0] = &WindowDragInputProviderTelemetry::OnGetArrangementRects::`vftable';
  WindowDragInputProviderTelemetry::OnGetArrangementRects::StartActivity(
    (WindowDragInputProviderTelemetry::OnGetArrangementRects *)v36,
    (const struct winrt::Windows::Foundation::Point *)v32);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>::operator()<std::nullptr_t,winrt::Windows::Foundation::Point>(
    (__int64)this + 64,
    v5,
    (__int64)v32);
  WindowDragInputProvider::GetHitTestResultForPoint(v6, (const struct winrt::Windows::Foundation::Point *)&v33);
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
  if ( !v33 )
  {
    *((_DWORD *)a2 + 9) = 1;
    *((_DWORD *)a2 + 4) = 0;
    *((_DWORD *)a2 + 14) = 0;
    *((_QWORD *)a2 + 8) = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)this + 5);
    *(struct tagRECT *)((char *)a2 + 40) = *WindowDragInputProvider::GetSafetyRectFromMonitor(
                                              v29,
                                              &pv,
                                              (const struct tagPOINT *)a2);
    *(_QWORD *)&pv.left = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 7, (__int64 *)&pv.left);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&pv);
    goto LABEL_20;
  }
  *(_QWORD *)&pv.left = 0LL;
  v34 = 0;
  v35 = 0LL;
  v8 = (**v33)(v33, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>, &pv);
  winrt::check_hresult(&pvParam, v8, &v34);
  v9 = (char *)this + 56;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 7, (__int64 *)&pv.left);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&pv);
  *((_DWORD *)a2 + 9) = 1;
  v10 = (float *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                   (__int64 *)this + 7,
                   &pv);
  v11 = v10[3];
  v12 = v10[1];
  v13 = v10[2];
  v14 = *v10;
  *((_DWORD *)a2 + 10) = (int)*v10;
  *((_DWORD *)a2 + 11) = (int)v12;
  *((_DWORD *)a2 + 12) = (int)(float)(v14 + v13);
  *((_DWORD *)a2 + 13) = (int)(float)(v12 + v11);
  v15 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction((__int64 *)this + 7);
  if ( v15 > 2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x10D,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
      v16);
  *((_DWORD *)a2 + 4) = v15;
  if ( v15 == 1 )
  {
    v17 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                     (__int64 *)this + 7,
                     &pv);
    v18 = v17[3];
    v19 = v17[1];
    v20 = v17[2];
    v21 = *v17;
    *((_DWORD *)a2 + 5) = (int)*v17;
    *((_DWORD *)a2 + 6) = (int)v19;
    *((_DWORD *)a2 + 7) = (int)(float)(v21 + v20);
    *((_DWORD *)a2 + 8) = (int)(float)(v19 + v18);
  }
  if ( (unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsActive((char *)this + 56) )
  {
    pvParam = 0;
    if ( !SystemParametersInfoW(0x26u, 0, &pvParam, 0) || !pvParam )
      goto LABEL_11;
    v22 = (__int64 *)((char *)this + 40);
    v23 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow(v22);
    winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::TryInsertAfterWindow(
      v22,
      v23);
    v24 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(v22);
    *((_DWORD *)a2 + 14) = 250;
  }
  else
  {
    winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::TryInsertAfterWindow(
      (char *)this + 40,
      -1LL);
    v24 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)this + 5);
    *((_DWORD *)a2 + 14) = 0;
  }
  *((_QWORD *)a2 + 8) = v24;
LABEL_11:
  v25 = *(_DWORD *)(winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2<winrt::WindowsUdk::UI::Shell::WindowDragHitTestResult>::SuggestedWindowPositions(
                      v9,
                      &pv)
                  + 8);
  v26 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)&pv.left;
  if ( *(_QWORD *)&pv.left )
  {
    v27 = *(_QWORD *)&pv.left + 8LL * (unsigned int)pv.right;
    if ( *(_QWORD *)&pv.left != v27 )
    {
      do
      {
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v26);
        v26 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)v26 + 8);
      }
      while ( v26 != (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v27 );
      v26 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)&pv.left;
    }
    CoTaskMemFree_0(v26);
  }
  v28 = 10;
  if ( !v25 )
    v28 = 5;
  *((_DWORD *)a2 + 18) = v28;
LABEL_20:
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v33);
  WindowDragInputProviderTelemetry::OnGetArrangementRects::Stop(
    (WindowDragInputProviderTelemetry::OnGetArrangementRects *)v36,
    a2);
  WindowDragInputProviderTelemetry::OnGetArrangementRects::~OnGetArrangementRects((WindowDragInputProviderTelemetry::OnGetArrangementRects *)v36);
}
