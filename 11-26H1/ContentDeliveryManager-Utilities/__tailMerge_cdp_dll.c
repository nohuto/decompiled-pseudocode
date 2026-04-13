/*
 * XREFs of __tailMerge_cdp_dll @ 0x1800223B0
 * Callers:
 *     __imp_load_CDPInitialize @ 0x18002242F (__imp_load_CDPInitialize.c)
 *     __imp_load_CDPGetActivityStoreForAccount @ 0x180022441 (__imp_load_CDPGetActivityStoreForAccount.c)
 *     __imp_load_CDPCreateMicrosoftAccount @ 0x180022453 (__imp_load_CDPCreateMicrosoftAccount.c)
 *     __imp_load_CDPCreateAzureActiveDirectoryAccount @ 0x180022465 (__imp_load_CDPCreateAzureActiveDirectoryAccount.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800B4EA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_cdp_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_cdp_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
