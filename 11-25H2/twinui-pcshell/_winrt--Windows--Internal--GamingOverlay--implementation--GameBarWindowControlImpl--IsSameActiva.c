/*
 * XREFs of _winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameActivationId_::_1_::catch$9 @ 0x1806B7DC2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameActivationId_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_BYTE *)(a2 + 32) = (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                        *(wil::details::in1diag3 **)(a2 + 72),
                                        (void *)0xDD,
                                        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
                                        a4) != 0;
  return 0LL;
}
