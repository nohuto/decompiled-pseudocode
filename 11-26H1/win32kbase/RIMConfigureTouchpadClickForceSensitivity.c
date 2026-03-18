/*
 * XREFs of RIMConfigureTouchpadClickForceSensitivity @ 0x1402043F0
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1400F2534 (RIMUpdateDeviceForInputMode.c)
 *     CBaseInput::ForEachDevice__lambda_5adfe49bbdf306a9ff7721a0af415f46___ @ 0x1401D76E0 (CBaseInput--ForEachDevice__lambda_5adfe49bbdf306a9ff7721a0af415f46___.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x1400F2B34 (RIMGetDeviceObjectPointer.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140162F3C (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14016CD20 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     RIMGetTouhpadClickForceSensitivityCaps @ 0x1401B8AE4 (RIMGetTouhpadClickForceSensitivityCaps.c)
 *     ?SetFeatureClickForce@RIM@InputTraceLogging@@SAXPEBURIMDEV@@AEBU_HIDP_VALUE_CAPS@@HKJ@Z @ 0x140203EA4 (-SetFeatureClickForce@RIM@InputTraceLogging@@SAXPEBURIMDEV@@AEBU_HIDP_VALUE_CAPS@@HKJ@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMConfigureTouchpadClickForceSensitivity(struct _UNICODE_STRING *a1, unsigned int a2)
{
  PWSTR Buffer; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  unsigned __int64 ReportLength; // r14
  char v7; // bl
  char v8; // si
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // r8d
  CHAR *Report; // rax
  CHAR *v13; // rsi
  USHORT LinkCollection; // r8
  int v15; // edx
  ULONG UsageValue; // r13d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  PIRP v20; // rax
  int v21; // edx
  int v22; // r8d
  PVOID v23; // r14
  IRP *v24; // rbx
  char v25; // bl
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  NTSTATUS Status; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  char v32; // di
  bool v33; // si
  char v34; // bl
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  HANDLE Handle; // [rsp+50h] [rbp-89h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-81h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  _QWORD v42[3]; // [rsp+80h] [rbp-59h] BYREF
  unsigned int v43; // [rsp+98h] [rbp-41h]
  int *v44; // [rsp+A0h] [rbp-39h]
  struct _HIDP_VALUE_CAPS v45; // [rsp+B0h] [rbp-29h] BYREF
  int v46; // [rsp+140h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+150h] [rbp+77h] BYREF
  PVOID Object; // [rsp+158h] [rbp+7Fh] BYREF

  Buffer = a1[27].Buffer;
  v46 = 0;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)Buffer + 2);
  ReportLength = Buffer[24];
  v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v8,
      *(_QWORD *)(UserSessionState + 19368),
      4u,
      1u,
      0x4Du,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      a1,
      a2);
  }
  memset(&v45, 0, sizeof(v45));
  if ( RIMGetTouhpadClickForceSensitivityCaps(PreparsedData, (__int64)&v45) )
  {
    Report = (CHAR *)Win32AllocPoolZInitImpl(256LL, ReportLength, 0x69667352u);
    v13 = Report;
    if ( Report )
    {
      LinkCollection = v45.LinkCollection;
      v15 = (unsigned __int64)(1374389535LL * (int)(a2 * (v45.LogicalMax - v45.LogicalMin))) >> 32;
      *Report = v45.ReportID;
      UsageValue = v45.LogicalMin + (v15 >> 5) + ((unsigned int)v15 >> 31);
      v46 = HidP_SetUsageValue(
              HidP_Feature,
              0xDu,
              LinkCollection,
              0xB0u,
              UsageValue,
              PreparsedData,
              Report,
              ReportLength);
      if ( v46 >= 0 )
      {
        Object = 0LL;
        DeviceObject = 0LL;
        Handle = 0LL;
        v46 = RIMGetDeviceObjectPointer(a1 + 12, v17, v18, &Handle, &Object, &DeviceObject);
        if ( v46 >= 0 )
        {
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, NotificationEvent, 0);
          IoStatusBlock = 0LL;
          v20 = IoBuildDeviceIoControlRequest(
                  0xB0191u,
                  DeviceObject,
                  v13,
                  ReportLength,
                  0LL,
                  0,
                  0,
                  &Event,
                  &IoStatusBlock);
          v23 = Object;
          v24 = v20;
          if ( v20 )
          {
            v20->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Object;
            RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
              (RimTelemetryScopedIoctlObserver *)v42,
              "ConfigClickForceSens",
              (struct RIMDEV *const)a1,
              &v46,
              0);
            Status = IofCallDriver(DeviceObject, v24);
            v46 = Status;
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
              v46 = IoStatusBlock.Status;
            }
            InputTraceLogging::RIM::SetFeatureClickForce((const struct RIMDEV *)a1, &v45, a2, UsageValue, Status);
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            RimTelemetry::LogBlockingIoControlRequest(
              (const char *)v42[2],
              (struct RIMDEV *const)v42[1],
              (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v42[0])) / gliQpcFreq.QuadPart,
              *v44,
              v43);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v25 = 0;
            }
            v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
              LOBYTE(v28) = v26;
              LOBYTE(v29) = v25;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v29,
                v28,
                *(_QWORD *)(v27 + 19368),
                3,
                1,
                78,
                (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
            }
            v46 = -1073741668;
          }
          ObfDereferenceObject(v23);
          ZwClose(Handle);
        }
      }
      GreDeleteFastMutex(v13, v17, v18, v19);
    }
    else
    {
      v46 = -1073741670;
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v32 = 0;
  }
  v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v34 = v46;
    v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
    LOBYTE(v36) = v33;
    LOBYTE(v37) = v32;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v36,
      *(_QWORD *)(v35 + 19368),
      2,
      1,
      79,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      v34);
  }
  return (unsigned int)v46;
}
