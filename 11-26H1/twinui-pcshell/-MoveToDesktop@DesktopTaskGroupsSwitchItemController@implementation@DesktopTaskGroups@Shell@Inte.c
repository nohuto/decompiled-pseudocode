/*
 * XREFs of ?MoveToDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@AEBUIVirtualDesktop@9ComposableShell@567@@Z @ 0x18058ABD0
 * Callers:
 *     ?MoveToDesktop@?$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@@impl@winrt@@UEAAHPEAX0@Z @ 0x18058AB90 (-MoveToDesktop@-$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800283DC (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x18020AAC8 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QE.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x180233DD0 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     ?SnapAssistSnappedWindows@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180267668 (-SnapAssistSnappedWindows@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompl.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     CoTaskMemFree_0 @ 0x1802CA554 (CoTaskMemFree_0.c)
 *     ??$as@UIVirtualDesktopInternal@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIVirtualDesktopInternal@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18058A5A0 (--$as@UIVirtualDesktopInternal@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::MoveToDesktop(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this,
        __int64 **a2,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *a3,
        const char *a4)
{
  _QWORD *v6; // rax
  void *v7; // r12
  char *v8; // r15
  __int64 v9; // rbx
  char *v10; // r12
  unsigned int v11; // esi
  __int64 v12; // r14
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rsi
  void (__fastcall *v16)(__int64, __int64, _QWORD); // rdi
  _QWORD *v17; // rax
  __int64 *v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+58h] BYREF

  if ( !*((_QWORD *)this + 4) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x95,
      (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
      a4);
  winrt::impl::as<IVirtualDesktopInternal,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v19,
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a3);
  v6 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
         a2,
         &v24);
  winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup>(v6, (__int64)&v18);
  if ( v24 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
    (__int64 *)this + 6,
    (__int64 *)&v18);
  winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::SnapAssistSnappedWindows(
    &v18,
    (__int64)&pv);
  v7 = pv;
  v8 = (char *)pv;
  v9 = v19;
  if ( pv != (char *)pv + 4 * v22 )
  {
    v10 = (char *)pv + 4 * v22;
    do
    {
      v11 = *(_DWORD *)v8;
      v25 = 0LL;
      v12 = *((_QWORD *)this + 3);
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 48LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v25);
      v14 = v13(v12, v11, &v25);
      if ( v14 >= 0 )
      {
        LODWORD(v24) = 0;
        (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 5) + 48LL))(
          *((_QWORD *)this + 5),
          v25,
          &v24);
        if ( !(_DWORD)v24 )
        {
          v15 = *((_QWORD *)this + 4);
          v16 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v15 + 32LL);
          v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v20);
          v16(v15, v25, *v17);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9E,
          (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
          (const char *)(unsigned int)v14);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
      v8 += 4;
    }
    while ( v8 != v10 );
    v7 = pv;
  }
  if ( v7 )
    CoTaskMemFree_0(v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
  if ( v9 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v19);
}
