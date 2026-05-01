/*
 * XREFs of __tailMerge_pdh_dll @ 0x1802DA6CD
 * Callers:
 *     __imp_load_PdhOpenQueryW @ 0x1802DA74C (__imp_load_PdhOpenQueryW.c)
 *     __imp_load_PdhAddCounterW @ 0x1802DA75E (__imp_load_PdhAddCounterW.c)
 *     __imp_load_PdhCollectQueryData @ 0x1802DA770 (__imp_load_PdhCollectQueryData.c)
 *     __imp_load_PdhGetRawCounterArrayW @ 0x1802DA782 (__imp_load_PdhGetRawCounterArrayW.c)
 *     __imp_load_PdhCloseQuery @ 0x1802DA794 (__imp_load_PdhCloseQuery.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_pdh_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_pdh_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
