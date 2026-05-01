/*
 * XREFs of ?IsSwitchItemPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180492350
 * Callers:
 *     ?PinUnPinSwitchItemToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180492B50 (-PinUnPinSwitchItemToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Com.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1800282A0 (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18002AD30 (-IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetSwitchItemWinrt@VirtualDesktopController@@AEAA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAU23456@@Z @ 0x1801F0DC4 (-GetSwitchItemWinrt@VirtualDesktopController@@AEAA-AUISwitchItem@Multitasking@ComposableShell@In.c)
 *     ?InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ @ 0x180491D80 (-InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ.c)
 *     ?IsVisibleOnDesktops@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBW4VirtualDesktopsScope@TaskGroups@Shell@783@@Z @ 0x180492614 (-IsVisibleOnDesktops@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::IsSwitchItemPinnedToAllDesktops(
        VirtualDesktopController *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        bool *a3)
{
  __int64 v6; // rcx
  VirtualDesktopController *v7; // rcx
  int ApplicationViewFromSwitchItem; // eax
  unsigned int v9; // ebx
  struct IApplicationView *v10; // rbx
  int (__fastcall *v11)(struct IApplicationView *, __int64 *); // rdi
  int v12; // eax
  struct IApplicationView *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  __int64 v18; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 *v20; // [rsp+88h] [rbp+38h] BYREF

  VirtualDesktopController::GetSwitchItemWinrt((__int64)this, (winrt *)&v15, a2);
  v20 = v15;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v20);
  if ( VirtualDesktopController::IsTaskGroupSwitchItem(v6, &v20) )
  {
    VirtualDesktopController::InitializeTaskGroupController(this);
    LODWORD(v20) = 1;
    *a3 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupSwitchItemController>::IsVisibleOnDesktops(
            (char *)this + 128,
            &v15,
            &v20);
LABEL_10:
    v9 = 0;
    goto LABEL_11;
  }
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  ApplicationViewFromSwitchItem = VirtualDesktopController::GetApplicationViewFromSwitchItem(v7, a2, &v14);
  v9 = ApplicationViewFromSwitchItem;
  if ( ApplicationViewFromSwitchItem >= 0 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    LODWORD(v20) = 0;
    v10 = v14;
    v11 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v14 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
    v17 = -1LL;
    v18 = -1LL;
    if ( v11(v10, &v16) < 0
      || (v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 **))(**((_QWORD **)this + 14) + 24LL))(
                  *((_QWORD *)this + 14),
                  v16,
                  &v20),
          v9 = v12,
          v12 >= 0) )
    {
      *a3 = (_DWORD)v20 != 0;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      goto LABEL_10;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18E,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v12);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x188,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)ApplicationViewFromSwitchItem);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
LABEL_11:
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  return v9;
}
