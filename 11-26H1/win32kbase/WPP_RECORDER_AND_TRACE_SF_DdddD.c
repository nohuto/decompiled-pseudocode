/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDDDD @ 0x1401CAFA0
 * Callers:
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_DDDDD(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  __int64 v14; // [rsp+D8h] [rbp+50h] BYREF
  va_list va1; // [rsp+D8h] [rbp+50h]
  __int64 v16; // [rsp+E0h] [rbp+58h] BYREF
  va_list va2; // [rsp+E0h] [rbp+58h]
  __int64 v18; // [rsp+E8h] [rbp+60h] BYREF
  va_list va3; // [rsp+E8h] [rbp+60h]
  va_list va4; // [rsp+F0h] [rbp+68h] BYREF

  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
               26LL,
               (__int64 *)va,
               4LL,
               (__int64 *)va1,
               4LL,
               (__int64 *)va2,
               4LL,
               (__int64 *)va3,
               4LL,
               va4,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 26;
    return WppAutoLogTrace(
             a4,
             4LL,
             8LL,
             &WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
             v11,
             (__int64 *)va,
             4LL,
             (__int64 *)va1,
             4LL,
             (__int64 *)va2);
  }
  return result;
}
