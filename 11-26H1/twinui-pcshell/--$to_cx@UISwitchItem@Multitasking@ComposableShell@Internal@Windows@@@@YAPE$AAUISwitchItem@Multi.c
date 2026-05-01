/*
 * XREFs of ??$to_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBUIUnknown@Foundation@4winrt@@@Z @ 0x1806A88CC
 * Callers:
 *     ?GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@UEAA?AURect@Foundation@Windows@winrt@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@45@@Z @ 0x1806A9530 (-GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@UEAA-AURect@Foundation@Windows@winrt@@AEBUI.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A2AD0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall to_cx<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
        __int64 (__fastcall ****a1)(_QWORD, __int64, __int64 *))
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h]

  v3 = __abi_winrt_cast_to(0, *a1, (__int64)&_uuidof__AUISwitchItem_Multitasking_ComposableShell_Internal_Windows__);
  v1 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  return v1;
}
