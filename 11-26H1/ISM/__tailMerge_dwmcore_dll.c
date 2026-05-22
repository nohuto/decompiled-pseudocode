/*
 * XREFs of __tailMerge_dwmcore_dll @ 0x18009BC9C
 * Callers:
 *     __imp_load_?MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z @ 0x18009BD1B (__imp_load_-MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18007AF00 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_dwmcore_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_dwmcore_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
