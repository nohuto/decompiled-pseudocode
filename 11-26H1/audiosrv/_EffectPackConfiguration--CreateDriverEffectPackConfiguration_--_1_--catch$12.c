/*
 * XREFs of _EffectPackConfiguration::CreateDriverEffectPackConfiguration_::_1_::catch$12 @ 0x180165738
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall EffectPackConfiguration::CreateDriverEffectPackConfiguration_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 120) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 248),
                            (void *)0x31F,
                            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                            a4);
  return 0LL;
}
