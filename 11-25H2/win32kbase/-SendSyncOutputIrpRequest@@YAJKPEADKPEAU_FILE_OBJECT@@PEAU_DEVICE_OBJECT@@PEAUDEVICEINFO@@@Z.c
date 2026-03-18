/*
 * XREFs of ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x1401443AC
 * Callers:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x140144064 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 */

__int64 __fastcall SendSyncOutputIrpRequest(
        ULONG IoControlCode,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        struct _FILE_OBJECT *a4,
        PDEVICE_OBJECT DeviceObject,
        struct DEVICEINFO *a6)
{
  unsigned int Status; // ebp
  PIRP v11; // rax
  __int64 v12; // rdx
  IRP *v13; // rbx
  LARGE_INTEGER PerformanceCounter; // r12
  __int64 v15; // rdx
  bool v16; // bp
  bool v17; // r14
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  bool v21; // di
  bool v22; // si
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  LARGE_INTEGER v26; // rax
  bool v27; // di
  bool v28; // si
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-38h] BYREF

  memset(&Object, 0, sizeof(Object));
  Status = -1073741668;
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v11 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          0LL,
          0,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Object,
          &IoStatusBlock);
  v13 = v11;
  if ( v11 )
  {
    v11->Tail.Overlay.CurrentStackLocation[-1].FileObject = a4;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    Status = IofCallDriver(DeviceObject, v13);
    if ( Status == 259 )
    {
      v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(UserSessionState + 19336),
          4,
          1,
          10,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
      }
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status )
    {
      v21 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 19336),
          3,
          1,
          11,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
      }
    }
    v26 = KeQueryPerformanceCounter(0LL);
    RimTelemetry::LogBlockingIoControlRequest(
      "SendSyncOutputIrpRequest",
      a6,
      (unsigned __int64)(1000 * (v26.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
      Status,
      0);
  }
  else
  {
    v27 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 19336),
        3,
        1,
        12,
        (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
    }
  }
  return Status;
}
