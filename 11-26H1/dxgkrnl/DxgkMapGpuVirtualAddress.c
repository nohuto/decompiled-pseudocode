/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x14037FEC0
 * Callers:
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1404416F0 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1400102C4 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001628C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@@Z @ 0x140058FD8 (-VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FRE.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1402BF7C4 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(struct D3DDDI_MAPGPUVIRTUALADDRESS *Src)
{
  int v2; // r12d
  char CurrentThreadPreviousMode; // si
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v6; // r14
  struct DXGPAGINGQUEUE *v7; // r13
  unsigned __int64 Value; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct _KEVENT *v11; // rbx
  struct _KEVENT *v12; // rcx
  struct _EX_RUNDOWN_REF *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rcx
  ULONG_PTR Count; // r8
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  unsigned int Ptr_high; // r15d
  struct _EX_RUNDOWN_REF *v19; // rcx
  ULONG_PTR v20; // r13
  bool v21; // dl
  int v22; // eax
  unsigned int v23; // ebx
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v24; // r15
  __int64 v25; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  bool v29; // zf
  __int64 v30; // rcx
  int v31; // ebx
  int HostProcess; // eax
  int Timeout; // [rsp+20h] [rbp-1E8h]
  char v34; // [rsp+50h] [rbp-1B8h]
  int v35; // [rsp+58h] [rbp-1B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-1A8h]
  char v37; // [rsp+68h] [rbp-1A0h]
  char v38[8]; // [rsp+70h] [rbp-198h] BYREF
  struct _EX_RUNDOWN_REF *v39; // [rsp+78h] [rbp-190h] BYREF
  struct DXGPAGINGQUEUE *v40; // [rsp+80h] [rbp-188h] BYREF
  struct _EX_RUNDOWN_REF *v41; // [rsp+88h] [rbp-180h] BYREF
  __int64 v42; // [rsp+90h] [rbp-178h] BYREF
  int v43; // [rsp+98h] [rbp-170h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v44; // [rsp+A0h] [rbp-168h]
  struct DXGPROCESS *v45; // [rsp+A8h] [rbp-160h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v46; // [rsp+B0h] [rbp-158h]
  char v47[8]; // [rsp+D0h] [rbp-138h] BYREF
  _BYTE v48[16]; // [rsp+D8h] [rbp-130h] BYREF
  DXGADAPTER *v49; // [rsp+E8h] [rbp-120h]
  char v50; // [rsp+F0h] [rbp-118h]
  __int64 v51; // [rsp+F8h] [rbp-110h]
  _BYTE v52[16]; // [rsp+118h] [rbp-F0h] BYREF
  __int64 v53; // [rsp+128h] [rbp-E0h]
  __int64 v54; // [rsp+158h] [rbp-B0h]
  char v55; // [rsp+160h] [rbp-A8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v56; // [rsp+170h] [rbp-98h] BYREF

  v46 = Src;
  v35 = -1;
  v2 = 0;
  v36 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2100;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2100);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v34 = CurrentThreadPreviousMode;
  Current = DXGPROCESS::GetCurrent(v4);
  v45 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 13160;
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
    goto LABEL_55;
  }
  memset(&v56, 0, sizeof(v56));
  if ( CurrentThreadPreviousMode == 1 )
  {
    v6 = &v56;
    v44 = &v56;
    RtlCopyFromUser(&v56, Src, 0x68uLL);
  }
  else
  {
    v6 = Src;
    v44 = Src;
  }
  v40 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)v38, v6->hPagingQueue, (struct _KTHREAD **)Current, &v40, 1);
  v7 = v40;
  if ( !v40 )
  {
    WdLogSingleEntry2(3LL, v6->hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 13193;
LABEL_54:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v38);
LABEL_55:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    v29 = v37 == 0;
    goto LABEL_56;
  }
  Value = v6->Protection.Value;
  if ( (Value & 0x10) != 0 || Value >= 0x20 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 13200;
    goto LABEL_54;
  }
  v9 = *((_QWORD *)v40 + 2);
  v42 = v9;
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
  if ( *(int *)(v10 + 2776) >= 0x2000 || *(_BYTE *)(v10 + 3076) )
    v2 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 344);
  v43 = v2;
  v11 = *(struct _KEVENT **)(v9 + 16);
  if ( *(_DWORD *)(v9 + 464) != 2 )
  {
    if ( KeReadStateEvent(v11 + 4) )
      goto LABEL_17;
    v12 = v11 + 4;
    goto LABEL_16;
  }
  if ( !KeReadStateEvent(v11 + 5) )
  {
    v12 = v11 + 5;
LABEL_16:
    KeWaitForSingleObject(v12, Executive, 0, 0, 0LL);
  }
LABEL_17:
  v13 = 0LL;
  if ( v2 )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 160));
    }
    else
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v9 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v9 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
    v13 = 0LL;
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v9 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v9 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)"g");
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v9 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v9 + 16) + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, v9, 0, v14, 0);
  if ( v55 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v52, 0LL);
    if ( *(_DWORD *)(v53 + 200) != 1 )
      goto LABEL_48;
  }
  if ( v50 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v48, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v49 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v49 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)"g");
      KeWaitForSingleObject((char *)v49 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v49, 0LL);
  }
  v51 = 0LL;
  v50 = 1;
  if ( *(_DWORD *)(v54 + 608) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v48);
    if ( !v55 )
    {
LABEL_49:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v38);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit);
      return 3221226166LL;
    }
LABEL_48:
    COREACCESS::Release((COREACCESS *)v52);
    goto LABEL_49;
  }
  v39 = 0LL;
  Count = 0LL;
  if ( (*(_BYTE *)&v6->Protection.0 & 0xC) != 0 )
  {
    Ptr_high = 0;
  }
  else
  {
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v41, v6->hAllocation);
    v39 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v13 = v39;
    *(_QWORD *)AllocationSafe = 0LL;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
    if ( !v13 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, v6->hAllocation, Current);
      WdLogGlobalForLineNumber = 13226;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Invalid hAllocation=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v6->hAllocation,
        (__int64)Current,
        0LL,
        0LL);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v38);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      v29 = v37 == 0;
LABEL_56:
      if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
      return 3221225485LL;
    }
    Count = v13[3].Count;
    Ptr_high = 0;
    if ( !Count && (*(_BYTE *)(v9 + 1917) & 1) == 0 )
    {
      WdLogSingleEntry2(2LL, -1073741811LL, v13);
      WdLogGlobalForLineNumber = 13232;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x DXGALLOCATION 0x%p does not have a VidMm handle",
        -1073741811LL,
        (__int64)v13,
        0LL,
        0LL,
        0LL);
      goto LABEL_72;
    }
    if ( v13[1].Count != v9 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, v13, v7);
      WdLogGlobalForLineNumber = 13238;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x DXGALLOCATION 0x%p device does not match DXGPAGINGQUEUE 0x%p device",
        -1073741811LL,
        (__int64)v13,
        (__int64)v7,
        0LL,
        0LL);
LABEL_72:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v38);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      v29 = v37 == 0;
      goto LABEL_56;
    }
  }
  v19 = *(struct _EX_RUNDOWN_REF **)(v9 + 16);
  v20 = v19[2].Count;
  v41 = v19;
  if ( *(_BYTE *)(v20 + 209) )
  {
    if ( v13 )
      Ptr_high = HIDWORD(v13[2].Ptr);
    v31 = *((_DWORD *)v40 + 7);
    HostProcess = DXGPROCESS::GetHostProcess(v45);
    v22 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v20 + 4712),
            HostProcess,
            0LL,
            v31,
            Ptr_high,
            v6);
  }
  else
  {
    v21 = *(_BYTE *)(v9 + 1919) || *(_DWORD *)(v9 + 464) == 2 && *(int *)(v20 + 3044) >= 2000;
    LOBYTE(Timeout) = v21;
    v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v19[95].Count + 8) + 752LL))(
            v19[96].Count,
            *((_QWORD *)v40 + 4),
            Count,
            v6,
            Timeout,
            -2);
  }
  v23 = v22;
  if ( v22 >= 0 && v34 == 1 )
  {
    v24 = v46;
    RtlWriteULong64ToUser(&v46->VirtualAddress, v6->VirtualAddress);
    RtlWriteULong64ToUser(&v24->PagingFenceValue, v6->PagingFenceValue);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
  if ( v2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 160));
    ExReleasePushLockSharedEx(v9 + 144, 0LL);
  }
  else
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 136));
  }
  KeLeaveCriticalRegion();
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
  }
  return v23;
}
