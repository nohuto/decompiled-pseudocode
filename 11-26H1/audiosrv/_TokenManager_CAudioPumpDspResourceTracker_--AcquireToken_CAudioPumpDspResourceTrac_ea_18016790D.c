/*
 * XREFs of _TokenManager_CAudioPumpDspResourceTracker_::AcquireToken_CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext__::_1_::catch$27 @ 0x18016790D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TokenManager_CAudioPumpDspResourceTracker_::AcquireToken_CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext__::_1_::catch_27(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x13A,
                            (int)"avcore\\audiocore\\server\\inc\\ResourceTokenManager.h",
                            a4);
  return 0LL;
}
