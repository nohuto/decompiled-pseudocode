/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x140038B04
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1400165A0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_StopTimeTrackingForHandle @ 0x140042DD4 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x140044080 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Interrupter_WdfEvtCleanupCallback @ 0x1400499C0 (Interrupter_WdfEvtCleanupCallback.c)
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x140078EF0 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 *     RootHub_Create @ 0x14007D704 (RootHub_Create.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qq(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, (__int64 *)va, 8LL, va1, 8LL, 0LL);
}
