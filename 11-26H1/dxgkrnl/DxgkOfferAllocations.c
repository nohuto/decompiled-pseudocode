/*
 * XREFs of DxgkOfferAllocations @ 0x140374E90
 * Callers:
 *     ?VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140228730 (-VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1403758D8 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z.c)
 */

__int64 __fastcall DxgkOfferAllocations(_D3DKMT_OFFERALLOCATIONS *Src)
{
  int v2; // r14d
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v6; // rsi
  struct _KTHREAD **v7; // rbx
  char CurrentThreadPreviousMode; // r12
  struct DXGDEVICE *v9; // rbx
  __int64 v10; // rcx
  struct _KEVENT *v11; // rsi
  struct _KEVENT *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned int v15; // esi
  ADAPTER_RENDER **v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // rcx
  DXGADAPTER *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  UINT Value; // eax
  ADAPTER_RENDER **v24; // rcx
  ADAPTER_RENDER **v25; // rcx
  __int64 v26; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v30; // [rsp+50h] [rbp-128h] BYREF
  __int64 v31; // [rsp+58h] [rbp-120h]
  char v32; // [rsp+60h] [rbp-118h]
  struct DXGDEVICE *v33; // [rsp+68h] [rbp-110h] BYREF
  struct DXGDEVICE *v34; // [rsp+70h] [rbp-108h] BYREF
  int v35; // [rsp+78h] [rbp-100h]
  _D3DKMT_OFFERALLOCATIONS v36; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v37[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v38[16]; // [rsp+B8h] [rbp-C0h] BYREF
  DXGADAPTER *v39; // [rsp+C8h] [rbp-B0h]
  char v40; // [rsp+D0h] [rbp-A8h]
  __int64 v41; // [rsp+D8h] [rbp-A0h]
  _BYTE v42[16]; // [rsp+F8h] [rbp-80h] BYREF
  DXGADAPTER *v43; // [rsp+108h] [rbp-70h]
  char v44; // [rsp+110h] [rbp-68h]
  __int64 v45; // [rsp+118h] [rbp-60h]
  __int64 v46; // [rsp+138h] [rbp-40h]
  char v47; // [rsp+140h] [rbp-38h]

  v30 = -1;
  v2 = 0;
  v31 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2070;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2070);
  CurrentProcess = PsGetCurrentProcess(v3);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v6 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_7;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v7 = (struct _KTHREAD **)*((_QWORD *)Current + 3);
    if ( v7 )
      goto LABEL_9;
    goto LABEL_7;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v7 = (struct _KTHREAD **)DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3080;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v7 = v6;
  }
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12236;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_39;
  }
LABEL_9:
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  memset(&v36, 0, sizeof(v36));
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(&v36, Src, 0x20uLL);
  else
    v36 = *Src;
  v34 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, v36.hDevice, v7, &v34);
  v9 = v34;
  if ( !v34 )
  {
    WdLogSingleEntry2(2LL, v36.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 12269;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v36.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v25 = (ADAPTER_RENDER **)v33;
    if ( v33 && _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v25[2], (struct DXGDEVICE *)v25);
    goto LABEL_39;
  }
  v10 = *(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL);
  if ( *(int *)(v10 + 2776) >= 0x2000 || *(_BYTE *)(v10 + 3076) )
    v2 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 344);
  v35 = v2;
  v11 = (struct _KEVENT *)*((_QWORD *)v9 + 2);
  if ( *((_DWORD *)v9 + 116) != 2 )
  {
    if ( KeReadStateEvent(v11 + 4) )
      goto LABEL_18;
    v12 = v11 + 4;
    goto LABEL_17;
  }
  if ( !KeReadStateEvent(v11 + 5) )
  {
    v12 = v11 + 5;
LABEL_17:
    KeWaitForSingleObject(v12, Executive, 0, 0, 0LL);
  }
LABEL_18:
  if ( v2 )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v9 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v9 + 40);
    }
    else
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v9 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v9 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)"g");
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v9 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v9, 0, v13, 0);
  if ( v47 )
  {
    if ( v44 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v42, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v20 = v43;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v43 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v43 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)"g");
        KeWaitForSingleObject((char *)v43 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v43, 0LL);
      v20 = v43;
    }
    v45 = 0LL;
    v44 = 1;
    if ( *((_DWORD *)v20 + 50) != 1 )
      goto LABEL_50;
  }
  if ( v40 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v38, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v39 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v39 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)"g");
      KeWaitForSingleObject((char *)v39 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v39, 0LL);
  }
  v41 = 0LL;
  v40 = 1;
  if ( *(_DWORD *)(v46 + 608) == 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 2320LL) < 0x5010u
      || (CurrentThreadPreviousMode != 1
        ? (Value = Src->Flags.Value)
        : (Value = RtlReadULongFromUser((unsigned int *)&Src->Flags)),
          v36.Flags.Value = Value,
          (Value & 0xFFFFFFFC) == 0) )
    {
      v15 = DXGDEVICE::OfferAllocations(v9, &v36, CurrentThreadPreviousMode == 1);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
      if ( v2 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v9 + 40);
        ExReleasePushLockSharedEx((char *)v9 + 144, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*((PERESOURCE *)v9 + 17));
      }
      KeLeaveCriticalRegion();
      v16 = (ADAPTER_RENDER **)v33;
      if ( v33 && _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v16[2], (struct DXGDEVICE *)v16);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
      if ( v32 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
      }
      return v15;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 12314;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v34);
    v24 = (ADAPTER_RENDER **)v33;
    if ( v33 && _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v24[2], (struct DXGDEVICE *)v24);
LABEL_39:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  COREACCESS::Release((COREACCESS *)v38);
  if ( v47 )
LABEL_50:
    COREACCESS::Release((COREACCESS *)v42);
  WdLogSingleEntry2(3LL, v9, -1073741130LL);
  WdLogGlobalForLineNumber = 12283;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v34);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
  return 3221226166LL;
}
