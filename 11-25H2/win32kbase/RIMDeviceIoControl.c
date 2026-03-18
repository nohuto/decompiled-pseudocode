/*
 * XREFs of RIMDeviceIoControl @ 0x14017EA70
 * Callers:
 *     NtRIMDeviceIoControl @ 0x14017E770 (NtRIMDeviceIoControl.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x140213D10 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140214114 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x14002A8F4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140129430 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401305CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x140149E18 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x14014A2FC (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        char *a1,
        char *a2,
        ULONG a3,
        void *a4,
        ULONG InputBufferLength,
        volatile void *Address,
        ULONG Length,
        _DWORD *a8,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        int a10,
        int a11,
        int a12)
{
  bool v13; // si
  bool v14; // r14
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v19; // rdx
  int v20; // esi
  struct RawInputManagerObject *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rdx
  char *v24; // rsi
  struct _FILE_OBJECT *v25; // r14
  void *v26; // rcx
  PIRP v27; // rax
  IRP *v28; // r13
  NTSTATUS v29; // eax
  bool i; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  void *v32; // rcx
  char v33; // r14
  bool v34; // r12
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char v38; // si
  bool v39; // r14
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  char v43; // r14
  bool v44; // r15
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  int Status; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v50; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-A0h]
  struct _IO_STATUS_BLOCK Src; // [rsp+70h] [rbp-98h] BYREF
  PVOID v54; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v55[8]; // [rsp+88h] [rbp-80h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v57[3]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v58; // [rsp+C0h] [rbp-48h]
  int *v59; // [rsp+C8h] [rbp-40h]
  BOOL v63; // [rsp+168h] [rbp+60h]

  v13 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      134,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v50 = 0LL;
  Object = 0LL;
  if ( a12 == 1 )
    ProbeForWrite(Address, Length, 1u);
  v20 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v50);
  Status = v20;
  if ( v20 >= 0 )
  {
    v21 = (struct RawInputManagerObject *)v50;
    v63 = *((_QWORD *)v50 + 14) == (_QWORD)KeGetCurrentThread();
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v55,
      (struct RIMLOCK *)((char *)v50 + 104));
    if ( *((_BYTE *)v21 + 81) )
    {
      Status = -1073741637;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v38 = 0;
      }
      v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v40 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v22);
        LOBYTE(v41) = v39;
        LOBYTE(v42) = v38;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v42,
          v41,
          *(_QWORD *)(v40 + 19336),
          3,
          1,
          136,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( Status >= 0 )
      {
        v24 = (char *)Object;
        if ( *((_QWORD *)Object + 35) && (v25 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 36)) != 0LL )
        {
          if ( (*((_DWORD *)Object + 60) & 0x2000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( !IoStatusBlock )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4301LL);
            v26 = (void *)*((_QWORD *)v24 + 35);
            if ( a12 == 1 )
              NtDeviceIoControlFile(v26, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
            else
              ZwDeviceIoControlFile(v26, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
          }
          else
          {
            Src = 0LL;
            memset(&Event, 0, sizeof(Event));
            DeviceObject = IoGetRelatedDeviceObject(v25);
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v27 = IoBuildDeviceIoControlRequest(
                    a3,
                    DeviceObject,
                    a4,
                    InputBufferLength,
                    (PVOID)Address,
                    Length,
                    a11 != 0,
                    &Event,
                    &Src);
            v28 = v27;
            if ( v27 )
            {
              v27->RequestorMode = a12;
              ObfReferenceObject(v25);
              v28->Tail.Overlay.CurrentStackLocation[-1].FileObject = v25;
              if ( v63 )
                KeBugCheckEx(0x164u, 0x24uLL, (ULONG_PTR)(v24 + 264), 0LL, 0LL);
              RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
                (RimTelemetryScopedIoctlObserver *)v57,
                "RimDeviceIoControl",
                (struct RIMDEV *const)(v24 + 72),
                &Status,
                a3);
              RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v54, v21);
              v29 = IofCallDriver(DeviceObject, v28);
              for ( i = v29 == 259; ; i = v29 == 257 )
              {
                Status = v29;
                if ( !i )
                  break;
                v29 = KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL);
              }
              Status = Src.Status;
              RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v54);
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              RimTelemetry::LogBlockingIoControlRequest(
                (const char *)v57[2],
                (struct RIMDEV *const)v57[1],
                (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v57[0])) / gliQpcFreq.QuadPart,
                *v59,
                v58);
              ObfDereferenceObject(v25);
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v32 = a8;
              if ( (unsigned __int64)a8 >= MmUserProbeAddress )
                v32 = (void *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v32, &Src.Information, 4uLL);
            }
            else
            {
              *a8 = Src.Information;
            }
          }
        }
        else
        {
          Status = -1073741436;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v33 = 0;
          }
          v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v35 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v23);
            LOBYTE(v36) = v34;
            LOBYTE(v37) = v33;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v37,
              v36,
              *(_QWORD *)(v35 + 19336),
              3,
              1,
              135,
              (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
          }
        }
        ObfDereferenceObject(v24);
      }
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v55);
    ObfDereferenceObject(v21);
    v20 = Status;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v43 = 0;
  }
  v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v45 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    LOBYTE(v46) = v44;
    LOBYTE(v47) = v43;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v47,
      v46,
      *(_QWORD *)(v45 + 19336),
      4,
      1,
      137,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v20);
    return (unsigned int)Status;
  }
  return (unsigned int)v20;
}
