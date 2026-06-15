/*
 * XREFs of __tailMerge_api_ms_win_devices_query_l1_1_0_dll @ 0x1800B4078
 * Callers:
 *     __imp_load_DevGetObjectProperties @ 0x1800B40F7 (__imp_load_DevGetObjectProperties.c)
 *     __imp_load_DevFreeObjectProperties @ 0x1800B4109 (__imp_load_DevFreeObjectProperties.c)
 *     __imp_load_DevCreateObjectQuery @ 0x1800B41A6 (__imp_load_DevCreateObjectQuery.c)
 *     __imp_load_DevCloseObjectQuery @ 0x1800B41B8 (__imp_load_DevCloseObjectQuery.c)
 *     __imp_load_DevFindProperty @ 0x1800B427E (__imp_load_DevFindProperty.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088030 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_devices_query_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_devices_query_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
