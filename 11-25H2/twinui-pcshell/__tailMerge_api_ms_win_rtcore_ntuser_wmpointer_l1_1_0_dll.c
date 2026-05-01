/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x1802D6BFD
 * Callers:
 *     __imp_load_GetPointerDevices @ 0x1802D6C7C (__imp_load_GetPointerDevices.c)
 *     __imp_load_GetPointerType @ 0x1802D7041 (__imp_load_GetPointerType.c)
 *     __imp_load_GetPointerInfo @ 0x1802D7053 (__imp_load_GetPointerInfo.c)
 *     __imp_load_GetPointerDeviceRects @ 0x1802D7065 (__imp_load_GetPointerDeviceRects.c)
 *     __imp_load_GetCurrentInputMessageSource @ 0x1802DB1D8 (__imp_load_GetCurrentInputMessageSource.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
