/*
 * XREFs of __tailMerge_api_ms_win_power_base_l1_1_0_dll @ 0x1802D3EE5
 * Callers:
 *     __imp_load_CallNtPowerInformation @ 0x1802D3F64 (__imp_load_CallNtPowerInformation.c)
 *     __imp_load_PowerUnregisterSuspendResumeNotification @ 0x1802D48CF (__imp_load_PowerUnregisterSuspendResumeNotification.c)
 *     __imp_load_PowerRegisterSuspendResumeNotification @ 0x1802D48E1 (__imp_load_PowerRegisterSuspendResumeNotification.c)
 *     __imp_load_GetPwrCapabilities @ 0x1802D493B (__imp_load_GetPwrCapabilities.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_power_base_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_power_base_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
