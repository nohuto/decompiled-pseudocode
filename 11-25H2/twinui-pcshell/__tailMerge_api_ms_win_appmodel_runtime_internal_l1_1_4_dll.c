/*
 * XREFs of __tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_4_dll @ 0x1802D67D1
 * Callers:
 *     __imp_load_GetEffectivePackageStatusForUserSid @ 0x1802D6850 (__imp_load_GetEffectivePackageStatusForUserSid.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_4_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_appmodel_runtime_internal_l1_1_4_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
