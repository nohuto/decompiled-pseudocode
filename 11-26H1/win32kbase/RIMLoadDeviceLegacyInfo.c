/*
 * XREFs of RIMLoadDeviceLegacyInfo @ 0x1400EDEFC
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1400EE6CC (RIMApiSetCheckForLegacyTouchPad.c)
 *     RIMIsHIDMouse @ 0x1400EF970 (RIMIsHIDMouse.c)
 *     RIMGetDeviceObjectPointer @ 0x1400F2B34 (RIMGetDeviceObjectPointer.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140162F3C (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     rimBlockingDeviceIoControlFile @ 0x140186910 (rimBlockingDeviceIoControlFile.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

LONG_PTR __fastcall RIMLoadDeviceLegacyInfo(struct DEVICEINFO *a1, int a2, int a3)
{
  int v4; // edx
  int v5; // r8d
  LONG_PTR result; // rax
  char v7; // r14
  bool v8; // r15
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  int v13; // edx
  int v14; // r8d
  char v15; // di
  bool v16; // r15
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // [rsp+44h] [rbp-15h] BYREF
  PVOID Object; // [rsp+48h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-9h] BYREF
  PVOID v23; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v24[3]; // [rsp+60h] [rbp+7h] BYREF
  unsigned int v25; // [rsp+78h] [rbp+1Fh]
  int *v26; // [rsp+80h] [rbp+27h]
  __int64 v27; // [rsp+88h] [rbp+2Fh] BYREF
  int v28; // [rsp+90h] [rbp+37h]

  Handle = 0LL;
  v23 = 0LL;
  Object = 0LL;
  v20 = RIMGetDeviceObjectPointer((int)a1 + 192, a2, a3, (unsigned int)&Handle, (__int64)&v23, (__int64)&Object);
  if ( v20 >= 0 )
  {
    if ( !v23 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1583LL);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1584LL);
    ObfReferenceObject(Object);
    if ( (unsigned int)RIMIsHIDMouse(Object) )
    {
      v27 = 0LL;
      v28 = 0;
      RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
        (RimTelemetryScopedIoctlObserver *)v24,
        "LoadDeviceLegacyInfo",
        a1,
        &v20,
        0);
      v20 = rimBlockingDeviceIoControlFile(Handle, &v27);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        (const char *)v24[2],
        (struct RIMDEV *const)v24[1],
        (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v24[0])) / gliQpcFreq.QuadPart,
        *v26,
        v25);
      if ( v20 >= 0 )
      {
        *((_WORD *)a1 + 433) = HIWORD(v27);
        *((_WORD *)a1 + 434) = v28;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v15 = 0;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v14);
          LOBYTE(v18) = v16;
          LOBYTE(v19) = v15;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v19,
            v18,
            *(_QWORD *)(UserSessionState + 19368),
            3,
            1,
            28,
            (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids);
        }
      }
    }
    RIMApiSetCheckForLegacyTouchPad(a1);
    goto LABEL_8;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  result = 0LL;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, v5);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(v9 + 19368),
      2,
      1,
      27,
      (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids);
LABEL_8:
    result = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    ObfDereferenceObject(v23);
    return ObfDereferenceObject(Object);
  }
  return result;
}
