/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dii @ 0x1401CD050
 * Callers:
 *     ?UpdateCapabilities@tagPROCESSINFO@@QEAA?AW4Win32ProcessCapabilities@@W42@0@Z @ 0x1401A1A60 (-UpdateCapabilities@tagPROCESSINFO@@QEAA-AW4Win32ProcessCapabilities@@W42@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_Dii(
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
  int v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  __int64 v14; // [rsp+B8h] [rbp+50h] BYREF
  va_list va1; // [rsp+B8h] [rbp+50h]
  va_list va2; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_8510b3707f3a3974fab59b98bd0c8058_Traceguids,
               10LL,
               (__int64 *)va,
               4LL,
               (__int64 *)va1,
               8LL,
               va2,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 10;
    return WppAutoLogTrace(
             a4,
             4LL,
             8LL,
             &WPP_8510b3707f3a3974fab59b98bd0c8058_Traceguids,
             v11,
             (__int64 *)va,
             4LL,
             (__int64 *)va1,
             8LL,
             va2);
  }
  return result;
}
