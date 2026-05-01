/*
 * XREFs of _wil::wrl_factory_for_winrt_com_class_winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager_::CreateInstance_::_1_::catch$6 @ 0x1806D822A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class_winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager_::CreateInstance_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x49,
                           (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
                           a4);
  return 0LL;
}
