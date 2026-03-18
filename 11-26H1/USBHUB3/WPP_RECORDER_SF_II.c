/*
 * XREFs of WPP_RECORDER_SF_II @ 0x14001D950
 * Callers:
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x140083CF0 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_II(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  _QWORD v8[3]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v8[0] = 300000000LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, _QWORD *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      178LL,
      va,
      8LL,
      v8,
      8LL,
      0LL);
  LOWORD(v7) = 178;
  return WppAutoLogTrace(a1, 3LL, 2LL, &WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids, v7, va, 8LL, v8);
}
