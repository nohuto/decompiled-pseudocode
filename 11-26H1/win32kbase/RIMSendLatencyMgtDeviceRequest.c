/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1400F2658
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1400F2534 (RIMUpdateDeviceForInputMode.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x1400F2B34 (RIMGetDeviceObjectPointer.c)
 *     ?DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z @ 0x1400F2D10 (-DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDd @ 0x1400F2D7C (WPP_RECORDER_AND_TRACE_SF_qDDd.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(struct RIMDEV *a1, int a2)
{
  __int64 v4; // r13
  int v5; // edx
  int v6; // r8d
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  int v12; // edx
  NTSTATUS Status; // edi
  int v14; // r8d
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  ULONG ReportLength; // ebx
  NTSTATUS SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v18; // r13
  CHAR *v19; // rax
  CHAR *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PIRP v24; // rax
  IRP *v25; // rdi
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v27; // rax
  bool v28; // bl
  bool v29; // si
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  bool v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  USHORT UsageList[4]; // [rsp+68h] [rbp-A0h] BYREF
  ULONG UsageLength[2]; // [rsp+70h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  struct _KEVENT Event; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+B8h] [rbp-50h] BYREF

  *(_QWORD *)UsageLength = 0LL;
  DeviceObject = 0LL;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  memset(&ButtonCaps, 0, sizeof(ButtonCaps));
  v4 = *((_QWORD *)a1 + 55);
  UsageList[0] = 1;
  InputTraceLogging::RIM::DeliverLatencyRequest(a1, a2 != 0);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_qDDd(*((_QWORD *)WPP_GLOBAL_Control + 3), v11, v10, *(_QWORD *)(UserSessionState + 19368));
  }
  Status = RIMGetDeviceObjectPointer(
             (int)a1 + 192,
             v5,
             v6,
             (unsigned int)&Handle,
             (__int64)UsageLength,
             (__int64)&DeviceObject);
  if ( Status >= 0 )
  {
    PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v4 + 16);
    ReportLength = *(unsigned __int16 *)(v4 + 48);
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Feature, 0xDu, 0, 0x60u, &ButtonCaps, UsageList, PreparsedData);
    v18 = *(struct _FILE_OBJECT **)UsageLength;
    Status = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v19 = (CHAR *)Win32AllocPoolZInitImpl(64LL, ReportLength, 0x69667352u);
      v20 = v19;
      if ( v19 )
      {
        *v19 = ButtonCaps.ReportID;
        if ( !a2
          || (UsageList[2] = 96,
              UsageLength[0] = 1,
              Status = HidP_SetUsages(
                         HidP_Feature,
                         0xDu,
                         0,
                         &UsageList[2],
                         UsageLength,
                         PreparsedData,
                         v19,
                         ReportLength),
              Status >= 0) )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v24 = IoBuildDeviceIoControlRequest(
                  0xB0191u,
                  DeviceObject,
                  v20,
                  ReportLength,
                  0LL,
                  0,
                  0,
                  &Event,
                  &IoStatusBlock);
          v25 = v24;
          if ( v24 )
          {
            v24->Tail.Overlay.CurrentStackLocation[-1].FileObject = v18;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            Status = IofCallDriver(DeviceObject, v25);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            v27 = KeQueryPerformanceCounter(0LL);
            RimTelemetry::LogBlockingIoControlRequest(
              "SendLatencyMgtReq",
              a1,
              (unsigned __int64)(1000 * (v27.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
              Status,
              0);
          }
          else
          {
            v34 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
            v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v36 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
              LOBYTE(v37) = v35;
              LOBYTE(v38) = v34;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v38,
                v37,
                *(_QWORD *)(v36 + 19368),
                3,
                1,
                70,
                (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
            }
            Status = -1073741668;
          }
        }
        GreDeleteFastMutex(v20, v21, v22, v23);
      }
      else
      {
        Status = -1073741670;
      }
    }
    ObfDereferenceObject(v18);
    ZwClose(Handle);
  }
  v28 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v14);
    LOBYTE(v31) = v29;
    LOBYTE(v32) = v28;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v32,
      v31,
      *(_QWORD *)(v30 + 19368),
      2,
      1,
      71,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      Status);
  }
  return (unsigned int)Status;
}
