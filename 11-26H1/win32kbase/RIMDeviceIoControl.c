/*
 * XREFs of RIMDeviceIoControl @ 0x14005E7A0
 * Callers:
 *     NtRIMDeviceIoControl @ 0x1401AE6F0 (NtRIMDeviceIoControl.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140219D44 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x140184324 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        char *a1,
        __int64 a2,
        ULONG a3,
        volatile void *a4,
        ULONG InputBufferLength,
        PVOID a6,
        ULONG a7,
        _DWORD *a8,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        int a10,
        int a11,
        int a12)
{
  char *v12; // r15
  bool v13; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // edx
  int v19; // r8d
  int Status; // r15d
  _BYTE *v21; // r13
  struct _KTHREAD *v22; // rcx
  BOOL v23; // edx
  char *v24; // rbx
  char *v25; // rdi
  int v26; // edx
  int v27; // r8d
  char *v28; // r13
  struct _FILE_OBJECT *v29; // r12
  void *v30; // rcx
  char v31; // bl
  bool v32; // di
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r15
  PIRP v38; // rbx
  PVOID v39; // rbx
  LARGE_INTEGER v40; // rax
  char v41; // bl
  bool v42; // r12
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  char v46; // bl
  bool v47; // r12
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  PVOID v51; // [rsp+50h] [rbp-88h] BYREF
  PVOID v52; // [rsp+58h] [rbp-80h] BYREF
  PVOID Object; // [rsp+60h] [rbp-78h] BYREF
  char *v54; // [rsp+68h] [rbp-70h]
  struct _IO_STATUS_BLOCK Src; // [rsp+70h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp-58h]
  struct _KEVENT Event; // [rsp+88h] [rbp-50h] BYREF
  PVOID InputBuffer; // [rsp+F8h] [rbp+20h]

  InputBuffer = (PVOID)a4;
  v12 = a1;
  v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      133,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
    a4 = InputBuffer;
    v12 = a1;
  }
  v52 = 0LL;
  Object = 0LL;
  if ( a12 == 1 )
  {
    ProbeForRead(a4, InputBufferLength, 1u);
    ProbeForWrite(a6, a7, 1u);
  }
  Status = RawInputManagerObjectResolveHandle(v12, 3u, 1, &v52);
  if ( Status >= 0 )
  {
    v21 = v52;
    v22 = (struct _KTHREAD *)*((_QWORD *)v52 + 14);
    v23 = v22 == KeGetCurrentThread();
    LODWORD(v51) = v23;
    v24 = (char *)v52 + 104;
    v25 = 0LL;
    v54 = 0LL;
    if ( v22 != KeGetCurrentThread() )
    {
      v25 = (char *)v52 + 104;
      v54 = (char *)v52 + 104;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v24, 0LL);
      *((_QWORD *)v24 + 1) = KeGetCurrentThread();
    }
    if ( v21[81] )
    {
      Status = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v46 = 0;
      }
      v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v48 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v23, v19);
        LOBYTE(v49) = v47;
        LOBYTE(v50) = v46;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v50,
          v49,
          *(_QWORD *)(v48 + 19368),
          3,
          1,
          135,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, 1LL, &Object);
      if ( Status >= 0 )
      {
        v28 = (char *)Object;
        if ( *((_QWORD *)Object + 35) && (v29 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 36)) != 0LL )
        {
          if ( (*((_DWORD *)Object + 60) & 0x2000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( !IoStatusBlock )
            {
              LODWORD(v51) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4246LL);
            }
            v30 = (void *)*((_QWORD *)v28 + 35);
            if ( a12 == 1 )
              NtDeviceIoControlFile(v30, 0LL, 0LL, 0LL, IoStatusBlock, a3, InputBuffer, InputBufferLength, 0LL, 0);
            else
              ZwDeviceIoControlFile(v30, 0LL, 0LL, 0LL, IoStatusBlock, a3, InputBuffer, InputBufferLength, 0LL, 0);
          }
          else
          {
            Src = 0LL;
            memset(&Event, 0, sizeof(Event));
            RelatedDeviceObject = IoGetRelatedDeviceObject(v29);
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v38 = IoBuildDeviceIoControlRequest(
                    a3,
                    RelatedDeviceObject,
                    InputBuffer,
                    InputBufferLength,
                    a6,
                    a7,
                    a11 != 0,
                    &Event,
                    &Src);
            if ( v38 )
            {
              v38->RequestorMode = a12;
              ObfReferenceObject(v29);
              v38->Tail.Overlay.CurrentStackLocation[-1].FileObject = v29;
              if ( (_DWORD)v51 )
                KeBugCheckEx(0x164u, 0x24uLL, (ULONG_PTR)(v28 + 264), 0LL, 0LL);
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock(
                (RIMDropAndReAcquireSyncLock *)&v51,
                (struct RawInputManagerObject *)v52);
              if ( IofCallDriver(RelatedDeviceObject, v38) == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
              }
              Status = Src.Status;
              v39 = v51;
              if ( v51 )
              {
                RIMLockExclusive((__int64)v51 + 104);
                ObfDereferenceObject(v39);
              }
              v40 = KeQueryPerformanceCounter(0LL);
              RimTelemetry::LogBlockingIoControlRequest(
                "RimDeviceIoControl",
                (struct RIMDEV *const)(v28 + 72),
                (unsigned __int64)(1000 * (v40.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart,
                Status,
                a3);
              ObfDereferenceObject(v29);
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
              RtlCopyToUser(a8, &Src.Information, 4uLL);
            else
              *a8 = Src.Information;
          }
        }
        else
        {
          Status = -1073741436;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v41 = 0;
          }
          v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v43 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v26, v27);
            LOBYTE(v44) = v42;
            LOBYTE(v45) = v41;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v45,
              v44,
              *(_QWORD *)(v43 + 19368),
              3,
              1,
              134,
              (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
          }
        }
        ObfDereferenceObject(v28);
        v21 = v52;
      }
    }
    if ( v25 )
      RIMUnlockExclusive((__int64)v25);
    ObfDereferenceObject(v21);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v31 = 0;
  }
  v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v19);
    LOBYTE(v34) = v32;
    LOBYTE(v35) = v31;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v35,
      v34,
      *(_QWORD *)(v33 + 19368),
      4,
      1,
      136,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      Status);
  }
  return (unsigned int)Status;
}
