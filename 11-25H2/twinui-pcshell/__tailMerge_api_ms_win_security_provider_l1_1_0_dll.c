/*
 * XREFs of __tailMerge_api_ms_win_security_provider_l1_1_0_dll @ 0x1802D3CE4
 * Callers:
 *     __imp_load_SetNamedSecurityInfoW @ 0x1802D3D63 (__imp_load_SetNamedSecurityInfoW.c)
 *     __imp_load_SetEntriesInAclW @ 0x1802D4097 (__imp_load_SetEntriesInAclW.c)
 *     __imp_load_SetSecurityInfo @ 0x1802D40A9 (__imp_load_SetSecurityInfo.c)
 *     __imp_load_GetSecurityInfo @ 0x1802D40BB (__imp_load_GetSecurityInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_security_provider_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_provider_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
