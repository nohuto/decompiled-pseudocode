/*
 * XREFs of __tailMerge_api_ms_win_gaming_experience_l1_1_0_dll @ 0x1802CE422
 * Callers:
 *     __imp_load_IsGamingFullScreenExperienceActive @ 0x1802CE4A1 (__imp_load_IsGamingFullScreenExperienceActive.c)
 *     __imp_load_IsGamingFullScreenExperienceSupported @ 0x1802CEEB5 (__imp_load_IsGamingFullScreenExperienceSupported.c)
 *     __imp_load_RegisterGamingFullScreenExperienceChangeNotification @ 0x1802CF1EA (__imp_load_RegisterGamingFullScreenExperienceChangeNotification.c)
 *     __imp_load_UnregisterGamingFullScreenExperienceChangeNotification @ 0x1802CF1FC (__imp_load_UnregisterGamingFullScreenExperienceChangeNotification.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801B9A40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_gaming_experience_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_gaming_experience_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
