/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemFromTrustedCaller_::_1_::catch$28 @ 0x1806D62D3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinItemFromTrustedCaller_::_1_::catch_28(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 448) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 920),
                            (void *)0x3AB,
                            (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
                            a4);
  return 0LL;
}
