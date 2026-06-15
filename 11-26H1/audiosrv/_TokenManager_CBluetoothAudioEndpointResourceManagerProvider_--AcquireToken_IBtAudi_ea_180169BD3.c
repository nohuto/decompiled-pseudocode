/*
 * XREFs of _TokenManager_CBluetoothAudioEndpointResourceManagerProvider_::AcquireToken_IBtAudioResourceManager____::_1_::catch$27 @ 0x180169BD3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TokenManager_CBluetoothAudioEndpointResourceManagerProvider_::AcquireToken_IBtAudioResourceManager____::_1_::catch_27(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 152) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0x13A,
                            (int)"avcore\\audiocore\\server\\inc\\ResourceTokenManager.h",
                            a4);
  return 0LL;
}
