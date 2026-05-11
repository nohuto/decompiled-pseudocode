/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDDddd @ 0x14000E02C
 * Callers:
 *     USBType1AsyncEndpointPollCallback @ 0x140003BF0 (USBType1AsyncEndpointPollCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_DDDddd(
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
  int v11; // [rsp+28h] [rbp-69h]
  __int64 v12; // [rsp+E8h] [rbp+57h] BYREF
  va_list va; // [rsp+E8h] [rbp+57h]
  __int64 v14; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+F0h] [rbp+5Fh]
  __int64 v16; // [rsp+F8h] [rbp+67h] BYREF
  va_list va2; // [rsp+F8h] [rbp+67h]
  __int64 v18; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+100h] [rbp+6Fh]
  __int64 v20; // [rsp+108h] [rbp+77h] BYREF
  va_list va4; // [rsp+108h] [rbp+77h]
  va_list va5; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va5, a8);
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
  va_copy(va5, va4);
  v20 = va_arg(va5, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids,
               13LL,
               (__int64 *)va,
               4LL,
               (__int64 *)va1,
               4LL,
               (__int64 *)va2,
               4LL,
               (__int64 *)va3,
               4LL,
               (__int64 *)va4,
               4LL,
               va5,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 13;
    return WppAutoLogTrace(
             a4,
             0LL,
             3LL,
             &WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids,
             v11,
             (__int64 *)va,
             4LL,
             (__int64 *)va1,
             4LL,
             (__int64 *)va2,
             4LL);
  }
  return result;
}
