/*
 * XREFs of _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::catch$19 @ 0x18004C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180039D38 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 176) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 152),
                            (void *)0xAE,
                            (int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
                            a4);
  return 0LL;
}
