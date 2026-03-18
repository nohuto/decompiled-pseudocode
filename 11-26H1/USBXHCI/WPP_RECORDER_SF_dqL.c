/*
 * XREFs of WPP_RECORDER_SF_dqL @ 0x1400247EC
 * Callers:
 *     UsbDevice_DisableCompletion @ 0x14001CA4C (UsbDevice_DisableCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1400244A0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dqL(__int64 a1, unsigned __int8 a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v12; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v7 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(
           a1,
           v7,
           12LL,
           &WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
           v9,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           va2);
}
