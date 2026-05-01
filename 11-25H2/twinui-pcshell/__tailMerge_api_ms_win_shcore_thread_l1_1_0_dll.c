/*
 * XREFs of __tailMerge_api_ms_win_shcore_thread_l1_1_0_dll @ 0x1802D3E48
 * Callers:
 *     __imp_load_SHGetThreadRef @ 0x1802D3EC7 (__imp_load_SHGetThreadRef.c)
 *     __imp_load_SHCreateThreadWithHandle @ 0x1802D3ED9 (__imp_load_SHCreateThreadWithHandle.c)
 *     __imp_load_SHSetThreadRef @ 0x1802D40DF (__imp_load_SHSetThreadRef.c)
 *     __imp_load_GetProcessReference @ 0x1802D40F1 (__imp_load_GetProcessReference.c)
 *     __imp_load_SetProcessReference @ 0x1802D4103 (__imp_load_SetProcessReference.c)
 *     __imp_load_SHCreateThread @ 0x1802D4127 (__imp_load_SHCreateThread.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shcore_thread_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shcore_thread_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
