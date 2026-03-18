/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1400EB4DC
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1400EB09C (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1400EB8E8 (-DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMGetDeviceObjectPointer @ 0x1400F2B34 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14016CD20 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(struct RIMDEV *a1, unsigned int a2)
{
  int v3; // edx
  int v4; // r8d
  char v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  NTSTATUS Status; // edi
  struct _FILE_OBJECT *v11; // r12
  struct _DEVICE_OBJECT *v12; // r14
  _DWORD *v13; // rax
  void *v14; // r15
  PIRP v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  IRP *v19; // rdi
  char v20; // bl
  bool v21; // di
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v26; // rax
  int v27; // edx
  int v28; // r8d
  char v29; // bl
  bool v30; // si
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-9h] BYREF
  PVOID v37; // [rsp+D0h] [rbp+67h] BYREF
  int v38; // [rsp+D8h] [rbp+6Fh]
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  v38 = a2;
  v37 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  if ( !a1 )
  {
    v38 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2626LL);
  }
  InputTraceLogging::RIM::DeliverIdleTimeoutRequest(a1, a2);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v3, v4);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      83,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      (char)a1,
      48);
  }
  Status = RIMGetDeviceObjectPointer((int)a1 + 192, v3, v4, (unsigned int)&Handle, (__int64)&v37, (__int64)&Object);
  if ( Status >= 0 )
  {
    v11 = (struct _FILE_OBJECT *)v37;
    IoStatusBlock = 0LL;
    memset(&Event, 0, sizeof(Event));
    if ( !v37 )
    {
      v38 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2643LL);
    }
    v12 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
    {
      v38 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2644LL);
    }
    ObfReferenceObject(v12);
    v13 = (_DWORD *)Win32AllocPoolZInitImpl(64LL, 4uLL, 0x70707352u);
    v14 = v13;
    if ( v13 )
    {
      *v13 = 30000;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v15 = IoBuildDeviceIoControlRequest(0xB01B0u, v12, v14, 4u, 0LL, 0, 0, &Event, &IoStatusBlock);
      v19 = v15;
      if ( v15 )
      {
        v15->Tail.Overlay.CurrentStackLocation[-1].FileObject = v11;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        Status = IofCallDriver(v12, v19);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        v26 = KeQueryPerformanceCounter(0LL);
        RimTelemetry::LogBlockingIoControlRequest(
          "SetIdleTimeout",
          a1,
          (unsigned __int64)(1000 * (v26.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
          Status,
          0);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v20 = 0;
        }
        v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
          LOBYTE(v23) = v21;
          LOBYTE(v24) = v20;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v24,
            v23,
            *(_QWORD *)(v22 + 19368),
            3,
            1,
            84,
            (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
        }
        Status = -1073741668;
      }
      GreDeleteFastMutex((char *)v14, v16, v17, v18);
      if ( Status < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v29 = 0;
        }
        v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v27, v28);
          LOBYTE(v32) = v30;
          LOBYTE(v33) = v29;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v33,
            v32,
            *(_QWORD *)(v31 + 19368),
            3,
            1,
            85,
            (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
        }
      }
    }
    ObfDereferenceObject(v11);
    ObfDereferenceObject(v12);
    ZwClose(Handle);
  }
  return (unsigned int)Status;
}
