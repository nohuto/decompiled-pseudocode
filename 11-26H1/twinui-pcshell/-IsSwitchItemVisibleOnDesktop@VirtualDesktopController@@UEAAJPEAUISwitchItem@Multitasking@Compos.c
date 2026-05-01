/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@PEAE@Z @ 0x180028D60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1800282A0 (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800283DC (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ @ 0x180491D80 (-InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ.c)
 *     ?IsVisibleOnDesktops@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBW4VirtualDesktopsScope@TaskGroups@Shell@783@@Z @ 0x180492614 (-IsVisibleOnDesktops@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall VirtualDesktopController::IsSwitchItemVisibleOnDesktop(
        VirtualDesktopController *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        __int64 (__fastcall ***a3)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 ***),
        bool *a4)
{
  __int64 *v8; // rbx
  void (__fastcall ***v9)(_QWORD, void *, __int64 ***); // rcx
  __int64 v10; // rax
  char v11; // di
  __int64 (__fastcall *v12)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 ***); // rdi
  int v13; // eax
  int v14; // edi
  VirtualDesktopController *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  struct IApplicationView *v18; // rcx
  __int64 v19; // rcx
  struct IApplicationView *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct IApplicationView *v24; // [rsp+20h] [rbp-20h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *v25; // [rsp+28h] [rbp-18h] BYREF
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 *v28; // [rsp+88h] [rbp+48h] BYREF
  __int64 **v29; // [rsp+98h] [rbp+58h] BYREF

  *a4 = 0;
  v8 = 0LL;
  v25 = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = (__int64 *)a2;
    v25 = a2;
  }
  v28 = v8;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v28);
  v29 = &v28;
  v26 = 0LL;
  v9 = (void (__fastcall ***)(_QWORD, void *, __int64 ***))*winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
                                                              &v28,
                                                              &v24);
  v29 = 0LL;
  if ( v9 )
  {
    (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>, &v29);
    v10 = (__int64)v29;
    if ( v29 )
    {
      v11 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 1;
LABEL_6:
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v29);
  if ( v24 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v24);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v28);
  if ( !v11 )
  {
    VirtualDesktopController::InitializeTaskGroupController(this);
    LODWORD(v28) = 1;
    *a4 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupSwitchItemController>::IsVisibleOnDesktops(
            (char *)this + 128,
            &v25,
            &v28);
LABEL_19:
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v25);
    return 0LL;
  }
  v29 = 0LL;
  v12 = **a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
  v13 = v12(
          (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a3,
          &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
          &v29);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x100,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v13,
      (int)v24);
    v23 = (__int64)v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  else
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    VirtualDesktopController::GetApplicationViewFromSwitchItem(v15, a2, &v24);
    LODWORD(v28) = 0;
    v16 = (_QWORD *)((__int64 (__fastcall *)(__int64 **, __int64 *))(*v29)[3])(v29, &v26);
    v14 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64 **))(*(_QWORD *)*v16 + 24LL))(
            *v16,
            v24,
            &v28);
    v17 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( v14 >= 0 )
    {
      *a4 = (_DWORD)v28 != 0;
      v18 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = (__int64)v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      goto LABEL_19;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v14,
      (int)v24);
    v21 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = (__int64)v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v25);
  return (unsigned int)v14;
}
