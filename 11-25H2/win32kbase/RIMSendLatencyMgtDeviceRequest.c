/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x14007A488
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x14007A364 (RIMUpdateDeviceForInputMode.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     ?DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z @ 0x14007AB40 (-DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDd @ 0x14007ACB8 (WPP_RECORDER_AND_TRACE_SF_qDDd.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(struct RIMDEV *a1, int a2)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  int v6; // r8d
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  NTSTATUS Status; // edi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  ULONG ReportLength; // ebx
  NTSTATUS SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v17; // r15
  CHAR *v18; // rax
  CHAR *v19; // rsi
  PIRP v20; // rax
  __int64 v21; // rdx
  IRP *v22; // rdi
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v24; // rax
  bool v25; // bl
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  bool v31; // bl
  bool v32; // di
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
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
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_qDDd(*((_QWORD *)WPP_GLOBAL_Control + 3), v11, v10, *(_QWORD *)(UserSessionState + 19336));
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
    v17 = *(struct _FILE_OBJECT **)UsageLength;
    Status = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v18 = (CHAR *)Win32AllocPoolZInitImpl(64LL, ReportLength, 0x69667352u);
      v19 = v18;
      if ( v18 )
      {
        *v18 = ButtonCaps.ReportID;
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
                         v18,
                         ReportLength),
              Status >= 0) )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v20 = IoBuildDeviceIoControlRequest(
                  0xB0191u,
                  DeviceObject,
                  v19,
                  ReportLength,
                  0LL,
                  0,
                  0,
                  &Event,
                  &IoStatusBlock);
          v22 = v20;
          if ( v20 )
          {
            v20->Tail.Overlay.CurrentStackLocation[-1].FileObject = v17;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            Status = IofCallDriver(DeviceObject, v22);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            v24 = KeQueryPerformanceCounter(0LL);
            RimTelemetry::LogBlockingIoControlRequest(
              "SendLatencyMgtReq",
              a1,
              (unsigned __int64)(1000 * (v24.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
              Status,
              0);
          }
          else
          {
            v31 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
            v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
              LOBYTE(v34) = v32;
              LOBYTE(v35) = v31;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v35,
                v34,
                *(_QWORD *)(v33 + 19336),
                3,
                1,
                70,
                (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
            }
            Status = -1073741668;
          }
        }
        GreDeleteFastMutex(v19);
      }
      else
      {
        Status = -1073741670;
      }
    }
    ObfDereferenceObject(v17);
    ZwClose(Handle);
  }
  v25 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
    LOBYTE(v28) = v26;
    LOBYTE(v29) = v25;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v28,
      *(_QWORD *)(v27 + 19336),
      2,
      1,
      71,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      Status);
  }
  return (unsigned int)Status;
}
