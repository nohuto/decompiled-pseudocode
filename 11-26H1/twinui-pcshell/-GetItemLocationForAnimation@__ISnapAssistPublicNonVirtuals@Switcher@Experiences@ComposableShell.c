/*
 * XREFs of ?GetItemLocationForAnimation@__ISnapAssistPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVRect@Foundation@Windows@@PE$AAUISwitchItem@Multitasking@4Internal@8@@Z @ 0x1806A94F4
 * Callers:
 *     ?GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@UEAA?AURect@Foundation@Windows@winrt@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@45@@Z @ 0x1806A9530 (-GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@UEAA-AURect@Foundation@Windows@winrt@@AEBUI.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistPublicNonVirtuals::GetItemLocationForAnimation(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax

  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, a3, a2);
  __abi_ThrowIfFailed(v4);
  return a2;
}
