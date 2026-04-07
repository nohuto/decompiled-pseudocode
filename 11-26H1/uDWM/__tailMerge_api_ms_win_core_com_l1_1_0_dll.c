/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18008F079
 * Callers:
 *     __imp_load_CoCreateInstance @ 0x18008F0F8 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoCreateGuid @ 0x18008F10A (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoInitializeEx @ 0x18008F11C (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x18008F268 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoTaskMemAlloc @ 0x18008F286 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoTaskMemFree @ 0x18008F298 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_PropVariantClear @ 0x18008F2AA (__imp_load_PropVariantClear.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x180090045 (__imp_load_CoCreateFreeThreadedMarshaler.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180072AA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
