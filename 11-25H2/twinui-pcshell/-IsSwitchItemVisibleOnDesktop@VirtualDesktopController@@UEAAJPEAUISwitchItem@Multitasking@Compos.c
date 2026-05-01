/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@PEAE@Z @ 0x1800A8880
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1800A86AC (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A8B34 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ @ 0x180481390 (-InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ.c)
 *     ?IsVisibleOnDesktops@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBW4VirtualDesktopsScope@TaskGroups@Shell@783@@Z @ 0x180481C0C (-IsVisibleOnDesktops@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall VirtualDesktopController::IsSwitchItemVisibleOnDesktop(
        VirtualDesktopController *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        __int64 (__fastcall ***a3)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, struct IApplicationView **),
        bool *a4)
{
  struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *v8; // rbx
  void (__fastcall ***v9)(_QWORD, void *, struct IApplicationView **); // rcx
  char v10; // di
  __int64 (__fastcall *v11)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, struct IApplicationView **); // rdi
  int v12; // eax
  int v13; // edi
  VirtualDesktopController *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  struct IApplicationView *v17; // rcx
  __int64 v18; // rcx
  struct IApplicationView *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct IApplicationView *v23; // [rsp+20h] [rbp-20h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *v24; // [rsp+28h] [rbp-18h] BYREF
  __int64 v25[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *v27; // [rsp+88h] [rbp+48h] BYREF
  struct IApplicationView *v28; // [rsp+98h] [rbp+58h] BYREF

  *a4 = 0;
  v8 = 0LL;
  v24 = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = a2;
    v24 = a2;
  }
  v27 = v8;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v27);
  v28 = (struct IApplicationView *)&v27;
  v23 = 0LL;
  v9 = *(void (__fastcall ****)(_QWORD, void *, struct IApplicationView **))winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
                                                                              &v27,
                                                                              v25);
  if ( v9 )
  {
    v28 = 0LL;
    (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>, &v28);
    v23 = v28;
    if ( v28 )
    {
      v10 = 0;
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v23);
      goto LABEL_6;
    }
  }
  else
  {
    v23 = 0LL;
  }
  v10 = 1;
LABEL_6:
  if ( v25[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v25);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v27);
  if ( !v10 )
  {
    VirtualDesktopController::InitializeTaskGroupController(this);
    LODWORD(v27) = 1;
    *a4 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupSwitchItemController>::IsVisibleOnDesktops(
            (char *)this + 128,
            &v24,
            &v27);
LABEL_17:
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v24);
    return 0LL;
  }
  v28 = 0LL;
  v11 = **a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
  v12 = v11(
          (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a3,
          &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
          &v28);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x100,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v12);
    v22 = (__int64)v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  else
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
    VirtualDesktopController::GetApplicationViewFromSwitchItem(v14, a2, &v23);
    LODWORD(v27) = 0;
    v15 = (_QWORD *)(*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v28 + 24LL))(v28, v25);
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem **))(*(_QWORD *)*v15 + 24LL))(
            *v15,
            v23,
            &v27);
    v16 = v25[0];
    if ( v25[0] )
    {
      v25[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v13 >= 0 )
    {
      *a4 = (_DWORD)v27 != 0;
      v17 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = (__int64)v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v13);
    v20 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = (__int64)v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v24);
  return (unsigned int)v13;
}
