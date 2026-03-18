/*
 * XREFs of RIMLoadDeviceLegacyInfo @ 0x1401D54D4
 * Callers:
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     RIMIsHIDMouse @ 0x1400B2330 (RIMIsHIDMouse.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140129430 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     rimBlockingDeviceIoControlFile @ 0x14014979C (rimBlockingDeviceIoControlFile.c)
 *     RIMApiSetCheckForLegacyTouchPad @ 0x140180798 (RIMApiSetCheckForLegacyTouchPad.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

LONG_PTR __fastcall RIMLoadDeviceLegacyInfo(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  char v6; // r14
  bool v7; // r15
  LONG_PTR result; // rax
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v16; // rdx
  char v17; // di
  bool v18; // r15
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // [rsp+44h] [rbp-15h] BYREF
  PVOID Object; // [rsp+48h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-9h] BYREF
  PVOID v25; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v26[3]; // [rsp+60h] [rbp+7h] BYREF
  unsigned int v27; // [rsp+78h] [rbp+1Fh]
  int *v28; // [rsp+80h] [rbp+27h]
  __int64 v29; // [rsp+88h] [rbp+2Fh] BYREF
  int v30; // [rsp+90h] [rbp+37h]

  Handle = 0LL;
  v25 = 0LL;
  Object = 0LL;
  v4 = 0;
  v22 = RIMGetDeviceObjectPointer(a1 + 12, a2, a3, &Handle, &v25, (PDEVICE_OBJECT *)&Object);
  if ( v22 >= 0 )
  {
    if ( !v25 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1586);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1587);
    ObfReferenceObject(Object);
    if ( (unsigned int)RIMIsHIDMouse((struct _DEVICE_OBJECT *)Object) )
    {
      v29 = 0LL;
      v30 = 0;
      v4 = 1;
      RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
        (RimTelemetryScopedIoctlObserver *)v26,
        "LoadDeviceLegacyInfo",
        (struct RIMDEV *const)a1,
        &v22,
        0);
      v22 = rimBlockingDeviceIoControlFile(Handle, v12, v13, v14, &v29);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        (const char *)v26[2],
        (struct RIMDEV *const)v26[1],
        (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v26[0])) / gliQpcFreq.QuadPart,
        *v28,
        v27);
      if ( v22 >= 0 )
      {
        a1[54].MaximumLength = HIWORD(v29);
        *(&a1[54].MaximumLength + 1) = v30;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v17 = 0;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(UserSessionState + 19336),
            3,
            1,
            28,
            (__int64)&WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids);
        }
      }
    }
    RIMApiSetCheckForLegacyTouchPad(
      (struct DEVICEINFO *)a1,
      (struct _FILE_OBJECT *)v25,
      (struct _DEVICE_OBJECT *)Object,
      v4);
    goto LABEL_24;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  result = 0LL;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
    LOBYTE(v10) = v7;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(v9 + 19336),
      2,
      1,
      27,
      (__int64)&WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids);
LABEL_24:
    result = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    ObfDereferenceObject(v25);
    return ObfDereferenceObject(Object);
  }
  return result;
}
