/*
 * XREFs of RIMConfigureTouchpadClickForceSensitivity @ 0x1401DEFE0
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x14007A364 (RIMUpdateDeviceForInputMode.c)
 *     CBaseInput::ForEachDevice__lambda_6d565e9c04b8a87d3a6068a881f4d702___ @ 0x1401B4A98 (CBaseInput--ForEachDevice__lambda_6d565e9c04b8a87d3a6068a881f4d702___.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140129430 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14013B930 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMGetTouhpadClickForceSensitivityCaps @ 0x14019CD14 (RIMGetTouhpadClickForceSensitivityCaps.c)
 *     ?SetFeatureClickForce@RIM@InputTraceLogging@@SAXPEBURIMDEV@@AEBU_HIDP_VALUE_CAPS@@HKJ@Z @ 0x1401DE1C4 (-SetFeatureClickForce@RIM@InputTraceLogging@@SAXPEBURIMDEV@@AEBU_HIDP_VALUE_CAPS@@HKJ@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMConfigureTouchpadClickForceSensitivity(struct _UNICODE_STRING *a1, __int64 a2)
{
  PWSTR Buffer; // rax
  unsigned int v3; // r13d
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  unsigned __int64 ReportLength; // r14
  bool v7; // bl
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  CHAR *Report; // rax
  CHAR *v14; // rsi
  USHORT LinkCollection; // r8
  int v16; // r15d
  ULONG UsageValue; // r15d
  __int64 v18; // rdx
  __int64 v19; // r8
  PIRP v20; // rax
  __int64 v21; // rdx
  PVOID v22; // r14
  IRP *v23; // rbx
  char v24; // bl
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  NTSTATUS Status; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  char v31; // di
  bool v32; // si
  char v33; // bl
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  HANDLE Handle; // [rsp+50h] [rbp-89h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-81h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  _QWORD v41[3]; // [rsp+80h] [rbp-59h] BYREF
  unsigned int v42; // [rsp+98h] [rbp-41h]
  int *v43; // [rsp+A0h] [rbp-39h]
  struct _HIDP_VALUE_CAPS v44; // [rsp+B0h] [rbp-29h] BYREF
  int v45; // [rsp+140h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+150h] [rbp+77h] BYREF
  PVOID Object; // [rsp+158h] [rbp+7Fh] BYREF

  Buffer = a1[27].Buffer;
  v3 = a2;
  v45 = 0;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)Buffer + 2);
  ReportLength = Buffer[24];
  v7 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      77,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      (char)a1,
      v3);
  }
  memset(&v44, 0, sizeof(v44));
  if ( RIMGetTouhpadClickForceSensitivityCaps(PreparsedData, (__int64)&v44) )
  {
    Report = (CHAR *)Win32AllocPoolZInitImpl(256LL, ReportLength, 0x69667352u);
    v14 = Report;
    if ( Report )
    {
      LinkCollection = v44.LinkCollection;
      v16 = (unsigned __int64)(1374389535LL * (int)(v3 * (v44.LogicalMax - v44.LogicalMin))) >> 32;
      *Report = v44.ReportID;
      UsageValue = v44.LogicalMin + ((unsigned int)v16 >> 31) + (v16 >> 5);
      v45 = HidP_SetUsageValue(
              HidP_Feature,
              0xDu,
              LinkCollection,
              0xB0u,
              UsageValue,
              PreparsedData,
              Report,
              ReportLength);
      if ( v45 >= 0 )
      {
        Object = 0LL;
        DeviceObject = 0LL;
        Handle = 0LL;
        v45 = RIMGetDeviceObjectPointer(a1 + 12, v18, v19, &Handle, &Object, &DeviceObject);
        if ( v45 >= 0 )
        {
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, NotificationEvent, 0);
          IoStatusBlock = 0LL;
          v20 = IoBuildDeviceIoControlRequest(
                  0xB0191u,
                  DeviceObject,
                  v14,
                  ReportLength,
                  0LL,
                  0,
                  0,
                  &Event,
                  &IoStatusBlock);
          v22 = Object;
          v23 = v20;
          if ( v20 )
          {
            v20->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Object;
            RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
              (RimTelemetryScopedIoctlObserver *)v41,
              "ConfigClickForceSens",
              (struct RIMDEV *const)a1,
              &v45,
              0);
            Status = IofCallDriver(DeviceObject, v23);
            v45 = Status;
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
              v45 = IoStatusBlock.Status;
            }
            InputTraceLogging::RIM::SetFeatureClickForce((const struct RIMDEV *)a1, &v44, v3, UsageValue, Status);
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            RimTelemetry::LogBlockingIoControlRequest(
              (const char *)v41[2],
              (struct RIMDEV *const)v41[1],
              (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v41[0])) / gliQpcFreq.QuadPart,
              *v43,
              v42);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v24 = 0;
            }
            v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
              LOBYTE(v27) = v25;
              LOBYTE(v28) = v24;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v28,
                v27,
                *(_QWORD *)(v26 + 19336),
                3,
                1,
                78,
                (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
            }
            v45 = -1073741668;
          }
          ObfDereferenceObject(v22);
          ZwClose(Handle);
        }
      }
      GreDeleteFastMutex(v14);
    }
    else
    {
      v45 = -1073741670;
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v31 = 0;
  }
  v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = v45;
    v34 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
    LOBYTE(v35) = v32;
    LOBYTE(v36) = v31;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v36,
      v35,
      *(_QWORD *)(v34 + 19336),
      2,
      1,
      79,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      v33);
  }
  return (unsigned int)v45;
}
