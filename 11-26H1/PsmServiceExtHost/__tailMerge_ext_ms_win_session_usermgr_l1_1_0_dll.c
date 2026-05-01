/*
 * XREFs of __tailMerge_ext_ms_win_session_usermgr_l1_1_0_dll @ 0x18006FA76
 * Callers:
 *     __imp_load_UMgrQueryUserContextFromSid @ 0x18006FAF5 (__imp_load_UMgrQueryUserContextFromSid.c)
 *     __imp_load_UMgrQueryUserContext @ 0x18006FB07 (__imp_load_UMgrQueryUserContext.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180069230 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_session_usermgr_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_session_usermgr_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
