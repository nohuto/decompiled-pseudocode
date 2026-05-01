/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_0_dll @ 0x1802D5DCF
 * Callers:
 *     __imp_load_GetWindowBand @ 0x1802D5E4E (__imp_load_GetWindowBand.c)
 *     __imp_load_IsWindowInDestroy @ 0x1802D5F45 (__imp_load_IsWindowInDestroy.c)
 *     __imp_load_CreateWindowInBand @ 0x1802D6106 (__imp_load_CreateWindowInBand.c)
 *     __imp_load_CreateWindowInBandEx @ 0x1802D72AD (__imp_load_CreateWindowInBandEx.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_private_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
