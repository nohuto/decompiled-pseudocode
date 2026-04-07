/*
 * XREFs of _winrt::Udwm::Transitions::TransitionManager::RegisterTransitionBitmap_::_1_::catch$5 @ 0x1800ED76B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D3EA4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::TransitionManager::RegisterTransitionBitmap_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x9A,
                           (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
                           a4);
  return 0LL;
}
