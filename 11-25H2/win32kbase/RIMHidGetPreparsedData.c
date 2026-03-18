/*
 * XREFs of RIMHidGetPreparsedData @ 0x1401E0E5C
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140129430 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall RIMHidGetPreparsedData(
        struct _UNICODE_STRING *a1,
        void **a2,
        PVOID *a3,
        PDEVICE_OBJECT *a4,
        _DWORD *OutputBuffer)
{
  __int64 v8; // rdx
  char v9; // di
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v15; // rdx
  char v16; // r15
  bool v17; // r12
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  PIRP v21; // rax
  __int64 v22; // rdx
  IRP *v23; // r15
  bool v24; // di
  bool v25; // si
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v30; // rdx
  char v31; // r15
  bool v32; // di
  bool v33; // si
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rdx
  void *v38; // r13
  char v39; // r15
  bool v40; // r12
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  PIRP v44; // rax
  __int64 v45; // rdx
  IRP *v46; // r15
  char v47; // di
  bool v48; // si
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  LARGE_INTEGER v52; // rax
  __int64 v53; // rdx
  char v54; // r15
  char v55; // di
  bool v56; // si
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  __int16 InternalDeviceIoControl; // [rsp+38h] [rbp-61h]
  int Status; // [rsp+58h] [rbp-41h] BYREF
  int v62; // [rsp+5Ch] [rbp-3Dh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-29h] BYREF
  __int64 v65; // [rsp+88h] [rbp-11h] BYREF
  struct RIMDEV *v66; // [rsp+90h] [rbp-9h]
  char *v67; // [rsp+98h] [rbp-1h]
  unsigned int v68; // [rsp+A0h] [rbp+7h]
  int *v69; // [rsp+A8h] [rbp+Fh]

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  Status = RIMGetDeviceObjectPointer(a1 + 12, (__int64)a2, (__int64)a3, a2, a3, a4);
  if ( Status < 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19336),
        3,
        1,
        31,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        Status);
    }
    return 0LL;
  }
  if ( !*a3 )
  {
    v62 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 723);
  }
  if ( !*a4 )
  {
    v62 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 724);
  }
  ObfReferenceObject(*a4);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v16 = 0;
  }
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
    LOBYTE(v19) = v17;
    LOBYTE(v20) = v16;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v19,
      *(_QWORD *)(v18 + 19336),
      4,
      1,
      32,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      (char)a1);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v21 = IoBuildDeviceIoControlRequest(0xB01A8u, *a4, 0LL, 0, OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
  v23 = v21;
  if ( !v21 )
  {
    v24 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_76;
    v28 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v22) + 19336);
    InternalDeviceIoControl = 33;
    goto LABEL_30;
  }
  v21->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
  RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
    (RimTelemetryScopedIoctlObserver *)&v65,
    "GetPreparsedData",
    (struct RIMDEV *const)a1,
    &Status,
    0);
  Status = IofCallDriver(*a4, v23);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  RimTelemetry::LogBlockingIoControlRequest(
    v67,
    v66,
    (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v65)) / gliQpcFreq.QuadPart,
    *v69,
    v68);
  v31 = Status;
  if ( Status )
  {
    v32 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v32;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 19336),
        3,
        1,
        34,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        v31);
    }
    goto LABEL_76;
  }
  v38 = (void *)Win32AllocPoolZInitImpl(64LL, (unsigned int)*OutputBuffer, 0x70707352u);
  if ( !v38 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_76;
    v28 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v37) + 19336);
    InternalDeviceIoControl = 35;
LABEL_30:
    LOBYTE(v27) = v25;
    LOBYTE(v26) = v24;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v27,
      v28,
      3,
      1,
      InternalDeviceIoControl,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
LABEL_76:
    ObfDereferenceObject(*a3);
    *a3 = 0LL;
    ZwClose(*a2);
    *a2 = 0LL;
    if ( !*a4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 825);
    ObfDereferenceObject(*a4);
    *a4 = 0LL;
    return 0LL;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v39 = 0;
  }
  v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v37);
    LOBYTE(v42) = v40;
    LOBYTE(v43) = v39;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v43,
      v42,
      *(_QWORD *)(v41 + 19336),
      4,
      1,
      36,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      (char)a1);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v44 = IoBuildDeviceIoControlRequest(0xB0193u, *a4, 0LL, 0, v38, *OutputBuffer, 0, &Event, &IoStatusBlock);
  v46 = v44;
  if ( !v44 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v47 = 0;
    }
    v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v45);
      LOBYTE(v50) = v48;
      LOBYTE(v51) = v47;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v51,
        v50,
        *(_QWORD *)(v49 + 19336),
        3,
        1,
        37,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
    }
LABEL_75:
    GreDeleteFastMutex((char *)v38);
    goto LABEL_76;
  }
  v44->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
  RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
    (RimTelemetryScopedIoctlObserver *)&v65,
    "GetCollectionDescriptor",
    (struct RIMDEV *const)a1,
    &Status,
    0);
  Status = IofCallDriver(*a4, v46);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  v52 = KeQueryPerformanceCounter(0LL);
  RimTelemetry::LogBlockingIoControlRequest(
    v67,
    v66,
    (unsigned __int64)(1000 * (v52.QuadPart - v65)) / gliQpcFreq.QuadPart,
    *v69,
    v68);
  v54 = Status;
  if ( Status )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v55 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v55 = 0;
    }
    v56 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v55 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v57 = W32GetUserSessionState(WPP_GLOBAL_Control, v53);
      LOBYTE(v58) = v56;
      LOBYTE(v59) = v55;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v59,
        v58,
        *(_QWORD *)(v57 + 19336),
        3,
        1,
        38,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        v54);
    }
    goto LABEL_75;
  }
  return v38;
}
