/*
 * XREFs of WPP_RECORDER_SF_cd @ 0x140006EFC
 * Callers:
 *     HUBHTX_GetDescriptor @ 0x1400046E4 (HUBHTX_GetDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_cd(__int64 a1, _DWORD a2, _DWORD a3, _BYTE a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
      14LL,
      (__int64 *)va,
      1LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 14;
  return WppAutoLogTrace(a1, 4LL, 3LL, &WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v7, (__int64 *)va, 1LL, va1);
}
