/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x140049E48
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x14002FE60 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
      14LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 14;
  return WppAutoLogTrace(
           a1,
           3LL,
           5LL,
           &WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
