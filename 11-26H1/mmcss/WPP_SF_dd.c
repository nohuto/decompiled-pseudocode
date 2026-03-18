/*
 * XREFs of WPP_SF_dd @ 0x140004888
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x14000E0B0 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x14000E4A0 (CiDispatchCreateMmThreadClient.c)
 *     CiDispatchFastIoDeviceControl @ 0x14000FA60 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400058C0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_dd(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_443f83a17f5d368b71bc45da64c4a6b1_Traceguids,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
