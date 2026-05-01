/*
 * XREFs of __tailMerge_api_ms_win_shell_namespace_l1_1_0_dll @ 0x1802D64DF
 * Callers:
 *     __imp_load_ILFindLastID @ 0x1802D655E (__imp_load_ILFindLastID.c)
 *     __imp_load_SHCreateItemFromParsingName @ 0x1802D6716 (__imp_load_SHCreateItemFromParsingName.c)
 *     __imp_load_SHGetIDListFromObject @ 0x1802D72EF (__imp_load_SHGetIDListFromObject.c)
 *     __imp_load_ILClone @ 0x1802D7313 (__imp_load_ILClone.c)
 *     __imp_load_SHParseDisplayName @ 0x1802D7325 (__imp_load_SHParseDisplayName.c)
 *     __imp_load_SHCreateItemFromIDList @ 0x1802D73C2 (__imp_load_SHCreateItemFromIDList.c)
 *     __imp_load_SHGetNameFromIDList @ 0x1802D73D4 (__imp_load_SHGetNameFromIDList.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shell_namespace_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shell_namespace_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
