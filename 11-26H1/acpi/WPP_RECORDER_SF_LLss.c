/*
 * XREFs of WPP_RECORDER_SF_LLss @ 0x140057264
 * Callers:
 *     ACPIAssert @ 0x140055C48 (ACPIAssert.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_LLss(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-58h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  va_list va1; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4c655a2938a836836194307c42e4bf2d_Traceguids,
      12LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      "NULL",
      5LL,
      "NULL",
      5LL,
      0LL);
  LOWORD(v7) = 12;
  return WppAutoLogTrace(
           a1,
           2LL,
           22LL,
           &WPP_4c655a2938a836836194307c42e4bf2d_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           "NULL",
           5LL,
           "NULL",
           5LL,
           0LL);
}
