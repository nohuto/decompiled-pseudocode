/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_di @ 0x14000E178
 * Callers:
 *     USBType1RenderBytePosition @ 0x140001010 (USBType1RenderBytePosition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_di(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-8h]
  __int64 v13; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v13 = va_arg(va1, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids,
               11LL,
               (__int64 *)va,
               4LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 11;
    return WppAutoLogTrace(
             a4,
             0LL,
             3LL,
             &WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids,
             v11,
             (__int64 *)va,
             4LL,
             va1,
             8LL,
             0LL,
             v12);
  }
  return result;
}
