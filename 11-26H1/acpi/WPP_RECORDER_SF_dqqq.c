/*
 * XREFs of WPP_RECORDER_SF_dqqq @ 0x14006C17C
 * Callers:
 *     ACPIWorkerThread @ 0x14006BE20 (ACPIWorkerThread.c)
 *     ACPIWorkerThreadWorker @ 0x14006BFE0 (ACPIWorkerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dqqq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v11; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  __int64 v13; // [rsp+B8h] [rbp+40h] BYREF
  va_list va2; // [rsp+B8h] [rbp+40h]
  va_list va3; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_63b22a2933743dc84f6dd704a6fc5699_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      va3,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           1LL,
           &WPP_63b22a2933743dc84f6dd704a6fc5699_Traceguids,
           v8,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           8LL,
           va3,
           8LL,
           0LL);
}
