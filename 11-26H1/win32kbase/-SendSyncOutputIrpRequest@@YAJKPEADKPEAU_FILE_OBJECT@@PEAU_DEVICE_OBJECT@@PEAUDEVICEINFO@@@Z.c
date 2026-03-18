/*
 * XREFs of ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14017A688
 * Callers:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14017A340 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
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
  int v12; // edx
  int v13; // r8d
  IRP *v14; // rbx
  LARGE_INTEGER PerformanceCounter; // r12
  int v16; // edx
  int v17; // r8d
  bool v18; // bp
  bool v19; // r14
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // di
  bool v24; // si
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  LARGE_INTEGER v28; // rax
  bool v29; // di
  bool v30; // si
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
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
  v14 = v11;
  if ( v11 )
  {
    v11->Tail.Overlay.CurrentStackLocation[-1].FileObject = a4;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    Status = IofCallDriver(DeviceObject, v14);
    if ( Status == 259 )
    {
      v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(UserSessionState + 19368),
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
      v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
        LOBYTE(v26) = v24;
        LOBYTE(v27) = v23;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v27,
          v26,
          *(_QWORD *)(v25 + 19368),
          3,
          1,
          11,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
      }
    }
    v28 = KeQueryPerformanceCounter(0LL);
    RimTelemetry::LogBlockingIoControlRequest(
      "SendSyncOutputIrpRequest",
      a6,
      (unsigned __int64)(1000 * (v28.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
      Status,
      0);
  }
  else
  {
    v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 19368),
        3,
        1,
        12,
        (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
    }
  }
  return Status;
}
