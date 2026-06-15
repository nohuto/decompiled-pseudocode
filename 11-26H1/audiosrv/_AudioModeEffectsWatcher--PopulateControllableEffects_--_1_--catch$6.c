/*
 * XREFs of _AudioModeEffectsWatcher::PopulateControllableEffects_::_1_::catch$6 @ 0x180164BA7
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AudioModeEffectsWatcher::PopulateControllableEffects_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 216),
                           (void *)0x53,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiomodeeffectsdiscovery.cpp",
                           a4);
  return 0LL;
}
