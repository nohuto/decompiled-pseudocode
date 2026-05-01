/*
 * XREFs of ?GetVirtualDesktopCollectionForSwitchItem@XamlAllUpViewController@@AE$AAAPE$AAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItem@3456@@Z @ 0x1806B5680
 * Callers:
 *     ?CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B3E44 (-CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUIS.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B422C (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B58F4 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x1806B51F0 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewController::GetVirtualDesktopCollectionForSwitchItem(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 192);
  if ( !v1 )
    return 0LL;
  v4 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v1);
  v3 = __abi_winrt_ptr_ctor(v4);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  return v3;
}
