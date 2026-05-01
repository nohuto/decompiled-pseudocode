/*
 * XREFs of ??0VirtualDesktopSwitcherController@@AE$AAA@PEAUIVirtualDesktopSwitcherHost@@PE$AAVVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180698FB8
 * Callers:
 *     ?Make@VirtualDesktopSwitcherController@@SAPE$AAV1@PEAUIVirtualDesktopSwitcherHost@@PE$AAVVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806993D0 (-Make@VirtualDesktopSwitcherController@@SAPE$AAV1@PEAUIVirtualDesktopSwitcherHost@@PE$AAVVirtual.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x1800F94E4 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopSwitcherController::VirtualDesktopSwitcherController(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v7; // [rsp+20h] [rbp-18h]

  XamlBaseViewController::XamlBaseViewController((_QWORD *)(a1 + 8));
  *(_QWORD *)a1 = &VirtualDesktopSwitcherController::`vftable';
  *(_QWORD *)(a1 + 8) = &VirtualDesktopSwitcherController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &VirtualDesktopSwitcherController::`vftable'{for `IXamlMultitaskingViewController'};
  *(_QWORD *)(a1 + 24) = &VirtualDesktopSwitcherController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  *(_QWORD *)(a1 + 32) = &VirtualDesktopSwitcherController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 40) = &VirtualDesktopSwitcherController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 48) = &VirtualDesktopSwitcherController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 152) = &VirtualDesktopSwitcherController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 160) = &VirtualDesktopSwitcherController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 168) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 176) = __abi_winrt_ptr_ctor(a3);
  *(_OWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)&v7 = 0LL;
  DWORD2(v7) = 0;
  *(_OWORD *)(a1 + 200) = v7;
  *(_QWORD *)(a1 + 216) = 0LL;
  return a1;
}
