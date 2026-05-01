/*
 * XREFs of _winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnViewCreated_::_1_::catch$23 @ 0x1806E5AB5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnViewCreated_::_1_::catch_23(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 216),
                            (void *)0x143,
                            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
                            a4);
  return 0LL;
}
