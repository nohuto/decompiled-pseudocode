/*
 * XREFs of RIMConfigureDeviceFeedback @ 0x1401DEB80
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
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x14015DB74 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMConfigureDeviceFeedback(struct _UNICODE_STRING *a1, __int64 a2)
{
  PWSTR Buffer; // rax
  int v3; // r12d
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  unsigned __int64 ReportLength; // r14
  bool v7; // bl
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  CHAR *Report; // rax
  CHAR *v14; // rsi
  USHORT v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  PIRP v18; // rax
  __int64 v19; // rdx
  struct _FILE_OBJECT *v20; // r14
  IRP *v21; // rbx
  bool v22; // bl
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v28; // di
  bool v29; // si
  char v30; // bl
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v38[16]; // [rsp+80h] [rbp-29h] BYREF
  int Status; // [rsp+110h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+120h] [rbp+77h] BYREF
  struct _FILE_OBJECT *OutputBuffer; // [rsp+128h] [rbp+7Fh] BYREF

  Buffer = a1[27].Buffer;
  v3 = a2;
  Status = 0;
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
      74,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      (char)a1,
      v3);
  }
  memset(v38, 0, 0x48uLL);
  if ( (unsigned int)RIMGetDeviceFeedbackGlobalIntensityCaps(PreparsedData, (__int64)v38) )
  {
    Report = (CHAR *)Win32AllocPoolZInitImpl(256LL, ReportLength, 0x69667352u);
    v14 = Report;
    if ( Report )
    {
      v15 = HIWORD(v38[0]);
      *Report = BYTE2(v38[0]);
      Status = HidP_SetUsageValue(
                 HidP_Feature,
                 0xEu,
                 v15,
                 0x23u,
                 LODWORD(v38[5]) + v3 * (HIDWORD(v38[5]) - LODWORD(v38[5])) / 100,
                 PreparsedData,
                 Report,
                 ReportLength);
      if ( Status >= 0 )
      {
        OutputBuffer = 0LL;
        DeviceObject = 0LL;
        Handle = 0LL;
        Status = RIMGetDeviceObjectPointer(a1 + 12, v16, v17, &Handle, (PVOID *)&OutputBuffer, &DeviceObject);
        if ( Status >= 0 )
        {
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, NotificationEvent, 0);
          IoStatusBlock = 0LL;
          v18 = IoBuildDeviceIoControlRequest(
                  0xB0191u,
                  DeviceObject,
                  v14,
                  ReportLength,
                  0LL,
                  0,
                  0,
                  &Event,
                  &IoStatusBlock);
          v20 = OutputBuffer;
          v21 = v18;
          if ( v18 )
          {
            v18->Tail.Overlay.CurrentStackLocation[-1].FileObject = OutputBuffer;
            RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
              (RimTelemetryScopedIoctlObserver *)v38,
              "ConfigDeviceFeedback",
              (struct RIMDEV *const)a1,
              &Status,
              0);
            Status = IofCallDriver(DeviceObject, v21);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            RimTelemetry::LogBlockingIoControlRequest(
              (const char *)v38[2],
              (struct RIMDEV *const)v38[1],
              (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v38[0])) / gliQpcFreq.QuadPart,
              *(_DWORD *)v38[4],
              v38[3]);
          }
          else
          {
            v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
            v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
              LOBYTE(v25) = v23;
              LOBYTE(v26) = v22;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v26,
                v25,
                *(_QWORD *)(v24 + 19336),
                3,
                1,
                75,
                (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
            }
            Status = -1073741668;
          }
          ObfDereferenceObject(v20);
          ZwClose(Handle);
        }
      }
      GreDeleteFastMutex(v14);
    }
    else
    {
      Status = -1073741670;
    }
  }
  v28 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = Status;
    v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
    LOBYTE(v32) = v29;
    LOBYTE(v33) = v28;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v32,
      *(_QWORD *)(v31 + 19336),
      2,
      1,
      76,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      v30);
  }
  return (unsigned int)Status;
}
