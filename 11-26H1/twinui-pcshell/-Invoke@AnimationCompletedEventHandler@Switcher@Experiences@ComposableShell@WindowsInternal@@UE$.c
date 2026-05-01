/*
 * XREFs of ?Invoke@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x180227A60
 * Callers:
 *     wil::details::ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___::_ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___ @ 0x1802BEB84 (wil--details--ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___--_ScopeExitFn__lambda_85c2.c)
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_AnimationCompletedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJXZ @ 0x1806A4540 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_AnimationCompletedEventHandler___abi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::Invoke(
        __int64 a1)
{
  if ( *(void ***)a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::__abi_IDelegate::Invoke();
}
