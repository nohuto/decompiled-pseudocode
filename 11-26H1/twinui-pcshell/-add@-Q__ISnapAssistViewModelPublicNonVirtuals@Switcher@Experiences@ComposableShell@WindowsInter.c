/*
 * XREFs of ?add@?Q__ISnapAssistViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@RegionInvoked@SnapAssistViewModel@2345@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAV?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@9Windows@@@Z @ 0x1806BFB54
 * Callers:
 *     ?RegisterForEvents@?QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1801AD464 (-RegisterForEvents@-QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExpl.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _add__Q__ISnapAssistViewModelPublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__RegionInvoked_SnapAssistViewModel_2345_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAV__TypedEventHandler_PE_AAVObject_Platform__PE_AAVSnapAssistRegionViewModel_Switcher_Experiences_ComposableShell_WindowsInternal___9Windows___Z(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 88LL))(a1, a3, a2);
  __abi_ThrowIfFailed(v4);
  return a2;
}
