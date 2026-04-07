/*
 * XREFs of __tailMerge_comctl32_dll @ 0x18008F75C
 * Callers:
 *     __imp_load_InitCommonControlsEx @ 0x18008F7DB (__imp_load_InitCommonControlsEx.c)
 *     __imp_load_LoadIconWithScaleDown @ 0x18008F7ED (__imp_load_LoadIconWithScaleDown.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180072AA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_comctl32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_comctl32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
