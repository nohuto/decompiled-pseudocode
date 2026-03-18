/*
 * XREFs of RIMHidGetPreparsedData @ 0x140079FB0
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x1400F2B34 (RIMGetDeviceObjectPointer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 */

void *__fastcall RIMHidGetPreparsedData(struct RIMDEV *a1, HANDLE *a2, PVOID *a3, PVOID *a4, _DWORD *OutputBuffer)
{
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  char v10; // r12
  int v11; // edx
  int v12; // r8d
  char v13; // bl
  bool v14; // r12
  PIRP v15; // rax
  int v16; // edx
  int v17; // r8d
  IRP *v18; // r13
  LARGE_INTEGER PerformanceCounter; // rbx
  NTSTATUS Status; // r12d
  LARGE_INTEGER v21; // rax
  int v22; // edx
  int v23; // r8d
  int v24; // edx
  int v25; // r8d
  void *v26; // r13
  char v27; // bl
  bool v28; // r12
  PIRP v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  IRP *v33; // r12
  LARGE_INTEGER v34; // rbx
  NTSTATUS v35; // r12d
  LARGE_INTEGER v36; // rax
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  char v44; // bl
  bool v45; // si
  __int64 UserSessionState; // rax
  int v47; // r8d
  int v48; // edx
  char v49; // bl
  bool v50; // si
  int v51; // edx
  int v52; // r8d
  __int64 v53; // r9
  bool v54; // bl
  bool v55; // si
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  bool v59; // bl
  bool v60; // si
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  bool v64; // bl
  bool v65; // si
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int16 InternalDeviceIoControl; // [rsp+30h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  v7 = RIMGetDeviceObjectPointer((int)a1 + 192, (_DWORD)a2, (_DWORD)a3, (_DWORD)a2, (__int64)a3, (__int64)a4);
  v10 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v44 = 0;
    }
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v9);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        31,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v10);
    }
    return 0LL;
  }
  if ( !*a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 723LL);
  if ( !*a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 724LL);
  ObfReferenceObject(*a4);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v13 = 0;
  }
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v41 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
    LOBYTE(v42) = v14;
    LOBYTE(v43) = v13;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v43,
      v42,
      *(_QWORD *)(v41 + 19368),
      4,
      1,
      32,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      (char)a1);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v15 = IoBuildDeviceIoControlRequest(
          0xB01A8u,
          (PDEVICE_OBJECT)*a4,
          0LL,
          0,
          OutputBuffer,
          0xCu,
          0,
          &Event,
          &IoStatusBlock);
  v18 = v15;
  if ( !v15 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v49 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v49 = 0;
    }
    v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v49 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_58;
    v53 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17) + 19368);
    InternalDeviceIoControl = 33;
    goto LABEL_49;
  }
  v15->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  Status = IofCallDriver((PDEVICE_OBJECT)*a4, v18);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  v21 = KeQueryPerformanceCounter(0LL);
  RimTelemetry::LogBlockingIoControlRequest(
    "GetPreparsedData",
    a1,
    (unsigned __int64)(1000 * (v21.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
    Status,
    0);
  if ( Status )
  {
    v54 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v55 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v56 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23);
      LOBYTE(v57) = v55;
      LOBYTE(v58) = v54;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v58,
        v57,
        *(_QWORD *)(v56 + 19368),
        3,
        1,
        34,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        Status);
    }
    goto LABEL_58;
  }
  v26 = (void *)Win32AllocPoolZInitImpl(64LL, (unsigned int)*OutputBuffer, 0x70707352u);
  if ( v26 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v27 = 0;
    }
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, v25);
      LOBYTE(v39) = v28;
      LOBYTE(v40) = v27;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v40,
        v39,
        *(_QWORD *)(v38 + 19368),
        4,
        1,
        36,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        (char)a1);
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v29 = IoBuildDeviceIoControlRequest(
            0xB0193u,
            (PDEVICE_OBJECT)*a4,
            0LL,
            0,
            v26,
            *OutputBuffer,
            0,
            &Event,
            &IoStatusBlock);
    v33 = v29;
    if ( v29 )
    {
      v29->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
      v34 = KeQueryPerformanceCounter(0LL);
      v35 = IofCallDriver((PDEVICE_OBJECT)*a4, v33);
      if ( v35 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v35 = IoStatusBlock.Status;
      }
      v36 = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        "GetCollectionDescriptor",
        a1,
        (unsigned __int64)(1000 * (v36.QuadPart - v34.QuadPart)) / gliQpcFreq.QuadPart,
        v35,
        0);
      if ( !v35 )
        return v26;
      v64 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v64 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v66 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v30, v31);
        LOBYTE(v67) = v65;
        LOBYTE(v68) = v64;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v68,
          v67,
          *(_QWORD *)(v66 + 19368),
          3,
          1,
          38,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          v35);
      }
    }
    else
    {
      v59 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v59 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v61 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v30, v31);
        LOBYTE(v62) = v60;
        LOBYTE(v63) = v59;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v63,
          v62,
          *(_QWORD *)(v61 + 19368),
          3,
          1,
          37,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
      }
    }
    GreDeleteFastMutex((char *)v26, v30, v31, v32);
    goto LABEL_58;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v49 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v49 = 0;
  }
  v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v53 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, v25) + 19368);
    InternalDeviceIoControl = 35;
LABEL_49:
    LOBYTE(v52) = v50;
    LOBYTE(v51) = v49;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v51,
      v52,
      v53,
      3,
      1,
      InternalDeviceIoControl,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
  }
LABEL_58:
  ObfDereferenceObject(*a3);
  *a3 = 0LL;
  ZwClose(*a2);
  *a2 = 0LL;
  if ( !*a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 825LL);
  ObfDereferenceObject(*a4);
  *a4 = 0LL;
  return 0LL;
}
