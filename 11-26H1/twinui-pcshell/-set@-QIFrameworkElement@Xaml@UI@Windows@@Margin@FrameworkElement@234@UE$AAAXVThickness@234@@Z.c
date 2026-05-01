/*
 * XREFs of ?set@?QIFrameworkElement@Xaml@UI@Windows@@Margin@FrameworkElement@234@UE$AAAXVThickness@234@@Z @ 0x1806B027C
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806ACFE4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A2AD0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _set__QIFrameworkElement_Xaml_UI_Windows__Margin_FrameworkElement_234_UE_AAAXVThickness_234__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        _OWORD *a2)
{
  __int64 v3; // rdi
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
  v4[0] = *a2;
  v4[1] = a2[1];
  LODWORD(a2) = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v3 + 256LL))(v3, v4);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  __abi_ThrowIfFailed((int)a2);
}
