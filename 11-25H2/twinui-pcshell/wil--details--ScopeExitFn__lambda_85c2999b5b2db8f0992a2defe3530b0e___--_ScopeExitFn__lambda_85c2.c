/*
 * XREFs of wil::details::ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___::_ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___ @ 0x1802C7B8C
 * Callers:
 *     ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x18067A8B0 (-DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     _TaskViewFrame::DismissAnimated_::_1_::dtor$7 @ 0x1806B1C03 (_TaskViewFrame--DismissAnimated_--_1_--dtor$7.c)
 *     _XamlGamingTaskViewHost::DismissViewAnimated_::_1_::dtor$7 @ 0x1806DDC4A (_XamlGamingTaskViewHost--DismissViewAnimated_--_1_--dtor$7.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?Invoke@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x180235CE0 (-Invoke@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___::_ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::Invoke(*(_QWORD *)a1);
  }
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(*(_QWORD *)a1);
}
