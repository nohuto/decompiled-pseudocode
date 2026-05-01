/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::ApplyInPlaceTaskbarLayout_::_1_::catch$0 @ 0x1806FE248
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyInPlaceTaskbarLayout_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x3BB,
                           (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
                           a4);
  return 0LL;
}
