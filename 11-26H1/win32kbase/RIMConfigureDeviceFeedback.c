/*
 * XREFs of RIMConfigureDeviceFeedback @ 0x140203F80
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
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1401A0814 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMConfigureDeviceFeedback(struct _UNICODE_STRING *a1, int a2)
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
  USHORT v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  PIRP v18; // rax
  int v19; // edx
  int v20; // r8d
  PVOID v21; // r14
  IRP *v22; // rbx
  bool v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v29; // di
  bool v30; // si
  char v31; // bl
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v39[16]; // [rsp+80h] [rbp-29h] BYREF
  int Status; // [rsp+110h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+120h] [rbp+77h] BYREF
  PVOID Object; // [rsp+128h] [rbp+7Fh] BYREF

  Buffer = a1[27].Buffer;
  Status = 0;
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
      0x4Au,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      a1,
      a2);
  }
  memset(v39, 0, 0x48uLL);
  if ( (unsigned int)RIMGetDeviceFeedbackGlobalIntensityCaps(PreparsedData, (__int64)v39) )
  {
    Report = (CHAR *)Win32AllocPoolZInitImpl(256LL, ReportLength, 0x69667352u);
    v13 = Report;
    if ( Report )
    {
      v14 = HIWORD(v39[0]);
      *Report = BYTE2(v39[0]);
      Status = HidP_SetUsageValue(
                 HidP_Feature,
                 0xEu,
                 v14,
                 0x23u,
                 LODWORD(v39[5]) + a2 * (HIDWORD(v39[5]) - LODWORD(v39[5])) / 100,
                 PreparsedData,
                 Report,
                 ReportLength);
      if ( Status >= 0 )
      {
        Object = 0LL;
        DeviceObject = 0LL;
        Handle = 0LL;
        Status = RIMGetDeviceObjectPointer(a1 + 12, v15, v16, &Handle, &Object, &DeviceObject);
        if ( Status >= 0 )
        {
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, NotificationEvent, 0);
          IoStatusBlock = 0LL;
          v18 = IoBuildDeviceIoControlRequest(
                  0xB0191u,
                  DeviceObject,
                  v13,
                  ReportLength,
                  0LL,
                  0,
                  0,
                  &Event,
                  &IoStatusBlock);
          v21 = Object;
          v22 = v18;
          if ( v18 )
          {
            v18->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Object;
            RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
              (RimTelemetryScopedIoctlObserver *)v39,
              "ConfigDeviceFeedback",
              (struct RIMDEV *const)a1,
              &Status,
              0);
            Status = IofCallDriver(DeviceObject, v22);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            RimTelemetry::LogBlockingIoControlRequest(
              (const char *)v39[2],
              (struct RIMDEV *const)v39[1],
              (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v39[0])) / gliQpcFreq.QuadPart,
              *(_DWORD *)v39[4],
              v39[3]);
          }
          else
          {
            v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
            v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20);
              LOBYTE(v26) = v24;
              LOBYTE(v27) = v23;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v27,
                v26,
                *(_QWORD *)(v25 + 19368),
                3,
                1,
                75,
                (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
            }
            Status = -1073741668;
          }
          ObfDereferenceObject(v21);
          ZwClose(Handle);
        }
      }
      GreDeleteFastMutex(v13, v15, v16, v17);
    }
    else
    {
      Status = -1073741670;
    }
  }
  v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = Status;
    v32 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
    LOBYTE(v33) = v30;
    LOBYTE(v34) = v29;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v34,
      v33,
      *(_QWORD *)(v32 + 19368),
      2,
      1,
      76,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      v31);
  }
  return (unsigned int)Status;
}
