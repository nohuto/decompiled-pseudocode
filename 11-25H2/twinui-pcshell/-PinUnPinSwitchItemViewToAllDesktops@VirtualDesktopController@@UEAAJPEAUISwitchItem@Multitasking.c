/*
 * XREFs of ?PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180482280
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1800A8610 (-IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1800A86AC (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?GetSwitchItemWinrt@VirtualDesktopController@@AEAA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAU23456@@Z @ 0x1800AAEF4 (-GetSwitchItemWinrt@VirtualDesktopController@@AEAA-AUISwitchItem@Multitasking@ComposableShell@In.c)
 *     ?IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180481AF0 (-IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopController::PinUnPinSwitchItemViewToAllDesktops(
        __int64 **this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  VirtualDesktopController *v6; // rcx
  int ApplicationViewFromSwitchItem; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationView *v14; // [rsp+68h] [rbp+38h] BYREF

  VirtualDesktopController::GetSwitchItemWinrt((__int64)this, (winrt *)v11, a2);
  v13 = v11[0];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v13);
  if ( VirtualDesktopController::IsTaskGroupSwitchItem(
         v4,
         (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13) )
  {
    v5 = -2147467259;
  }
  else
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    ApplicationViewFromSwitchItem = VirtualDesktopController::GetApplicationViewFromSwitchItem(v6, a2, &v14);
    v5 = ApplicationViewFromSwitchItem;
    if ( ApplicationViewFromSwitchItem >= 0 )
    {
      LOBYTE(v13) = 0;
      VirtualDesktopController::IsSwitchItemViewPinnedToAllDesktops((VirtualDesktopController *)this, a2, (bool *)&v13);
      v8 = this[14];
      v9 = *v8;
      if ( (_BYTE)v13 )
        (*(void (__fastcall **)(__int64 *, struct IApplicationView *))(v9 + 64))(v8, v14);
      else
        (*(void (__fastcall **)(__int64 *, struct IApplicationView *))(v9 + 56))(v8, v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BE,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)ApplicationViewFromSwitchItem);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    }
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11);
  return v5;
}
