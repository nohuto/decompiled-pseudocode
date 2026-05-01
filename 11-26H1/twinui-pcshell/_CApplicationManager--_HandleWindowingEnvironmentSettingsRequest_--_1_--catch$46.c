/*
 * XREFs of _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::catch$46 @ 0x1806DECB5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::catch_46(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 392) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 376),
                            (void *)0x699,
                            (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            a4);
  return 0LL;
}
