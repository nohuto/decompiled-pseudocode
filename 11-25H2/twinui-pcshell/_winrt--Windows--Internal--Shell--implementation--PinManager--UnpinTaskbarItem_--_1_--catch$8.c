/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::UnpinTaskbarItem_::_1_::catch$8 @ 0x1806D69E2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::UnpinTaskbarItem_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 488),
                            (void *)0x3FA,
                            (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
                            a4);
  return 0LL;
}
