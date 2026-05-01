/*
 * XREFs of ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x18068C928
 * Callers:
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x18068C8D4 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU-$IVector@PE$AAUI.c)
 *     ?CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x18068CA34 (-CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUIS.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x18068CE08 (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x18068D988 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180102A0C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801AAFC0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     WindowsDeleteString_0 @ 0x1802D37A2 (WindowsDeleteString_0.c)
 *     ??0SwitcherContextMenuItem@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVString@Platform@@IPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@0@Z @ 0x18068B7C8 (--0SwitcherContextMenuItem@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSt.c)
 *     ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x18068DEF0 (-GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  int v10; // eax
  HSTRING ResourceString; // [rsp+30h] [rbp-18h]
  __int64 (__fastcall ***v13)(_QWORD, __int64, __int64 *); // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h]

  v13 = 0LL;
  v14 = 0LL;
  if ( a2 == 1508 )
  {
    ResourceString = (HSTRING)XamlAllUpViewController::GetResourceString(a1, 1516LL);
    v7 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitcherContextMenuItem::SwitcherContextMenuItem(
           v6,
           a3,
           1508,
           0LL,
           (__int64)ResourceString);
    v14 = v7;
    __abi_winrt_ptr_assign(&v13, v7);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v7);
    WindowsDeleteString_0(ResourceString);
  }
  else
  {
    v8 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitcherContextMenuItem::SwitcherContextMenuItem(
           a1,
           a3,
           a2,
           0LL,
           0LL);
    v14 = v8;
    __abi_winrt_ptr_assign(&v13, v8);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v8);
  }
  v9 = __abi_winrt_cast_to(
         0,
         v13,
         (__int64)&_uuidof__AUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v14 = v9;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 104LL))(a4, v9);
  __abi_ThrowIfFailed(v10);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v13);
}
