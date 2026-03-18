/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x14012E2EC
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x14012E098 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140129430 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14013B930 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x140158920 (-DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(struct RIMDEV *a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 result; // rax
  struct _FILE_OBJECT *v11; // r15
  struct _DEVICE_OBJECT *v12; // rsi
  _DWORD *v13; // rax
  __int64 v14; // rdx
  void *v15; // r14
  PIRP v16; // rax
  __int64 v17; // rdx
  IRP *v18; // rdi
  char v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  char v25; // bl
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v32[3]; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v33; // [rsp+90h] [rbp+7h]
  int *v34; // [rsp+98h] [rbp+Fh]
  PVOID v35; // [rsp+F0h] [rbp+67h] BYREF
  int Status; // [rsp+F8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+100h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  Status = a2;
  v35 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  if ( !a1 )
  {
    Status = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2631LL);
  }
  InputTraceLogging::RIM::DeliverIdleTimeoutRequest(a1, a2);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      83,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      (char)a1,
      48);
  }
  result = RIMGetDeviceObjectPointer(
             (struct _UNICODE_STRING *)a1 + 12,
             v3,
             v4,
             &Handle,
             &v35,
             (PDEVICE_OBJECT *)&Object);
  Status = result;
  if ( (int)result >= 0 )
  {
    v11 = (struct _FILE_OBJECT *)v35;
    IoStatusBlock = 0LL;
    memset(&Event, 0, sizeof(Event));
    if ( !v35 )
    {
      LODWORD(v35) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2648LL);
    }
    v12 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
    {
      LODWORD(v35) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2649LL);
    }
    ObfReferenceObject(v12);
    v13 = (_DWORD *)Win32AllocPoolZInitImpl(64LL, 4uLL, 0x70707352u);
    v15 = v13;
    if ( v13 )
    {
      *v13 = 30000;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v16 = IoBuildDeviceIoControlRequest(0xB01B0u, v12, v15, 4u, 0LL, 0, 0, &Event, &IoStatusBlock);
      v18 = v16;
      if ( v16 )
      {
        v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = v11;
        RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
          (RimTelemetryScopedIoctlObserver *)v32,
          "SetIdleTimeout",
          a1,
          &Status,
          0);
        Status = IofCallDriver(v12, v18);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        RimTelemetry::LogBlockingIoControlRequest(
          (const char *)v32[2],
          (struct RIMDEV *const)v32[1],
          (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v32[0])) / gliQpcFreq.QuadPart,
          *v34,
          v33);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v19 = 0;
        }
        v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
          LOBYTE(v22) = v20;
          LOBYTE(v23) = v19;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v23,
            v22,
            *(_QWORD *)(v21 + 19336),
            3,
            1,
            84,
            (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
        }
        Status = -1073741668;
      }
      GreDeleteFastMutex((char *)v15);
    }
    if ( Status < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v25 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v25;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(v27 + 19336),
          3,
          1,
          85,
          (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
      }
    }
    ObfDereferenceObject(v11);
    ObfDereferenceObject(v12);
    ZwClose(Handle);
    return (unsigned int)Status;
  }
  return result;
}
