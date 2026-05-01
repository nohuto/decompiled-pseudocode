/*
 * XREFs of __tailMerge_ext_ms_win_com_ole32_l1_1_1_dll @ 0x1802D7793
 * Callers:
 *     __imp_load_CoAllowSetForegroundWindow @ 0x1802D7812 (__imp_load_CoAllowSetForegroundWindow.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_com_ole32_l1_1_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_com_ole32_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
