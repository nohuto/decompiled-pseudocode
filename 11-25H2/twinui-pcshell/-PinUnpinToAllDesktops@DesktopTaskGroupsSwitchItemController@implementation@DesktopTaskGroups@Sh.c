/*
 * XREFs of ?PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@@Z @ 0x180566B04
 * Callers:
 *     ?PinUnpinToAllDesktops@?$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@@impl@winrt@@UEAAHPEAX@Z @ 0x180566AD0 (-PinUnpinToAllDesktops@-$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTa.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A8B34 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180218FB4 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QE.c)
 *     ?SnapAssistSnappedWindows@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18026F608 (-SnapAssistSnappedWindows@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompl.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 *     ?IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@@Z @ 0x180566550 (-IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::PinUnpinToAllDesktops(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this,
        __int64 **a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rax
  void *v6; // r15
  char *v7; // r14
  char *v8; // r12
  char v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64 *); // rdi
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  LPVOID pv; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v19; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v20; // [rsp+80h] [rbp+50h] BYREF
  __int64 v21; // [rsp+88h] [rbp+58h] BYREF

  if ( !*((_QWORD *)this + 5) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5D,
      (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
      a4);
  v5 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
         a2,
         &v21);
  winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup>(v5, (__int64)&v20);
  if ( v21 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
  LOBYTE(v19) = winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsTaskGroupPinned(
                  this,
                  &v20);
  winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::SnapAssistSnappedWindows(
    &v20,
    (__int64)&pv);
  v6 = pv;
  v7 = (char *)pv;
  v8 = (char *)pv + 4 * v17;
  if ( pv != v8 )
  {
    v9 = v19;
    do
    {
      v10 = *(_DWORD *)v7;
      v19 = 0LL;
      v11 = *((_QWORD *)this + 3);
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 48LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v19);
      v13 = v12(v11, v10, &v19);
      if ( v13 >= 0 )
      {
        v14 = (__int64 *)*((_QWORD *)this + 5);
        v15 = *v14;
        if ( v9 )
          (*(void (__fastcall **)(__int64 *, __int64))(v15 + 64))(v14, v19);
        else
          (*(void (__fastcall **)(__int64 *, __int64))(v15 + 56))(v14, v19);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x66,
          (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
          (const char *)(unsigned int)v13);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
      v7 += 4;
    }
    while ( v7 != v8 );
    v6 = pv;
  }
  if ( v6 )
    CoTaskMemFree_0(v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
}
