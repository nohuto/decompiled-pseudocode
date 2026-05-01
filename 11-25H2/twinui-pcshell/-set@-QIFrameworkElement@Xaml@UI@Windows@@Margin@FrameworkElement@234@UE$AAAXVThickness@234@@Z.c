/*
 * XREFs of ?set@?QIFrameworkElement@Xaml@UI@Windows@@Margin@FrameworkElement@234@UE$AAAXVThickness@234@@Z @ 0x180688EAC
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180685C54 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801AAFC0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _set__QIFrameworkElement_Xaml_UI_Windows__Margin_FrameworkElement_234_UE_AAAXVThickness_234__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        _OWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _OWORD *); // rax
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
  v4 = *(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v3 + 256LL);
  v5[0] = *a2;
  v5[1] = a2[1];
  LODWORD(a2) = v4(v3, v5);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  __abi_ThrowIfFailed((int)a2);
}
