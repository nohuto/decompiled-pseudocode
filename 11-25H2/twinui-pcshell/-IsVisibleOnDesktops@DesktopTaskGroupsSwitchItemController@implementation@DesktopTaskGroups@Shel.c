/*
 * XREFs of ?IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA_NAEBUISwitchItem@Multitasking@ComposableShell@567@AEBW4VirtualDesktopsScope@TaskGroups@4567@@Z @ 0x180566794
 * Callers:
 *     ?IsVisibleOnDesktops@?$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@@impl@winrt@@UEAAHPEAXHPEA_N@Z @ 0x180566750 (-IsVisibleOnDesktops@-$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTask.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A8B34 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180218FB4 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QE.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@PEAUIVirtualDesktop@@@Z @ 0x180566418 (-IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@.c)
 *     ?IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@@Z @ 0x180566550 (-IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsVisibleOnDesktops(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this,
        __int64 **a2,
        const enum winrt::Windows::Internal::Shell::TaskGroups::VirtualDesktopsScope *a3)
{
  const char *v5; // r9
  _QWORD *v7; // rax
  __int64 **v8; // rax
  char IsTaskGroupPinned; // bl
  __int64 v10; // rax
  int v11; // eax
  struct IVirtualDesktop *v12; // rbx
  _QWORD *v13; // rax
  __int64 **v14; // rax
  _BYTE v15[8]; // [rsp+20h] [rbp-20h] BYREF
  int v16; // [rsp+28h] [rbp-18h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v19; // [rsp+60h] [rbp+20h] BYREF
  struct IVirtualDesktop *v20; // [rsp+78h] [rbp+38h] BYREF

  v5 = (const char *)*((_QWORD *)this + 4);
  if ( !v5 )
    return 1;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x41,
        (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
        v5);
    v7 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
           a2,
           &v19);
    v8 = (__int64 **)winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup>(
                       v7,
                       (__int64)&v20);
    IsTaskGroupPinned = winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsTaskGroupPinned(
                          this,
                          v8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
    if ( v19 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v19);
  }
  else
  {
    v20 = 0LL;
    v16 = 0;
    v17 = 0LL;
    v10 = *(_QWORD *)v5;
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(const char *, struct IVirtualDesktop **))(v10 + 48))(v5, &v20);
    winrt::check_hresult((int *)&v19, v11, (__int64)&v16);
    v12 = v20;
    v13 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
            a2,
            &v19);
    v14 = (__int64 **)winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup>(
                        v13,
                        (__int64)v15);
    IsTaskGroupPinned = winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsGroupVisibleOnDesktop(
                          this,
                          v14,
                          v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v15);
    if ( v19 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v19);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
  }
  return IsTaskGroupPinned;
}
