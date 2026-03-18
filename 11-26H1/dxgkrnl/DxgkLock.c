/*
 * XREFs of DxgkLock @ 0x1402B9040
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402B8960 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1402B9970 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402BBB04 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkLock(void **Src)
{
  char CurrentThreadPreviousMode; // si
  struct _KTHREAD **Current; // rbx
  struct DXGDEVICE *v4; // rsi
  __int64 v5; // rcx
  int v6; // r12d
  struct _KEVENT *v7; // rbx
  struct _KEVENT *v8; // rcx
  __int64 v9; // r13
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // ebx
  void **v13; // rcx
  ADAPTER_RENDER **v14; // rcx
  __int64 v15; // rcx
  DXGADAPTER *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  char v21; // [rsp+50h] [rbp-168h]
  int v22; // [rsp+58h] [rbp-160h] BYREF
  __int64 v23; // [rsp+60h] [rbp-158h]
  char v24; // [rsp+68h] [rbp-150h]
  struct _D3DKMT_UNLOCK v25; // [rsp+70h] [rbp-148h] BYREF
  struct DXGDEVICE *v26; // [rsp+80h] [rbp-138h] BYREF
  struct DXGDEVICE *v27[2]; // [rsp+88h] [rbp-130h] BYREF
  struct _D3DKMT_LOCK Srca; // [rsp+98h] [rbp-120h] BYREF
  _QWORD v29[2]; // [rsp+C8h] [rbp-F0h] BYREF
  char v30; // [rsp+D8h] [rbp-E0h]
  char v31[8]; // [rsp+E0h] [rbp-D8h] BYREF
  _BYTE v32[16]; // [rsp+E8h] [rbp-D0h] BYREF
  DXGADAPTER *v33; // [rsp+F8h] [rbp-C0h]
  char v34; // [rsp+100h] [rbp-B8h]
  __int64 v35; // [rsp+108h] [rbp-B0h]
  _BYTE v36[16]; // [rsp+128h] [rbp-90h] BYREF
  DXGADAPTER *v37; // [rsp+138h] [rbp-80h]
  char v38; // [rsp+140h] [rbp-78h]
  __int64 v39; // [rsp+148h] [rbp-70h]
  __int64 v40; // [rsp+168h] [rbp-50h]
  char v41; // [rsp+170h] [rbp-48h]

  v27[1] = (struct DXGDEVICE *)Src;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2011);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v21 = CurrentThreadPreviousMode;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v12 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 610;
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
LABEL_36:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v12;
  }
  memset(&Srca, 0, sizeof(Srca));
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(&Srca, Src, 0x30uLL);
  else
    Srca = *(struct _D3DKMT_LOCK *)Src;
  v26 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v27, Srca.hDevice, Current, &v26);
  v4 = v26;
  if ( !v26 )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, Srca.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 642;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      Srca.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_33:
    v14 = (ADAPTER_RENDER **)v27[0];
    if ( v27[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v27[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v14[2], (struct DXGDEVICE *)v14);
    goto LABEL_36;
  }
  *(_QWORD *)&v25.hDevice = v26;
  v5 = *(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL);
  if ( *(int *)(v5 + 2776) >= 0x2000 || *(_BYTE *)(v5 + 3076) )
  {
    v6 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 344);
    LODWORD(v25.phAllocations) = v6;
  }
  else
  {
    v6 = 0;
    LODWORD(v25.phAllocations) = 0;
  }
  v7 = (struct _KEVENT *)*((_QWORD *)v4 + 2);
  if ( *((_DWORD *)v4 + 116) != 2 )
  {
    if ( KeReadStateEvent(v7 + 4) )
      goto LABEL_16;
    v8 = v7 + 4;
    goto LABEL_15;
  }
  if ( !KeReadStateEvent(v7 + 5) )
  {
    v8 = v7 + 5;
LABEL_15:
    KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
  }
LABEL_16:
  if ( v6 )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v4 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v4 + 40);
    }
    else
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v4 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v4 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v4 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v4 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v4 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)"g");
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v4 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v4 + 2) + 16LL));
    }
  }
  v9 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL);
  v29[1] = v9;
  _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24));
  v29[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v9 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 152));
  v30 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v4, 0, v10, 0);
  if ( v41 )
  {
    if ( v38 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v36, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v17 = v37;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v37 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v37 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)"g");
        KeWaitForSingleObject((char *)v37 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v37, 0LL);
      v17 = v37;
    }
    v39 = 0LL;
    v38 = 1;
    if ( *((_DWORD *)v17 + 50) != 1 )
      goto LABEL_47;
  }
  if ( v34 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v32, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v33 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v33 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)"g");
      KeWaitForSingleObject((char *)v33 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v33, 0LL);
  }
  v35 = 0LL;
  v34 = 1;
  if ( *(_DWORD *)(v40 + 608) == 1 )
  {
    Srca.hDevice = 0;
    v12 = DXGDEVICE::Lock(v4, &Srca, (struct COREDEVICEACCESS *)v31, 0);
    if ( v12 >= 0 )
    {
      v13 = Src + 3;
      if ( v21 == 1 )
      {
        RtlWriteULong64ToUser(v13, (__int64)Srca.pData);
        RtlCopyToUser((char *)Src + 4, &Srca.hAllocation, 4uLL);
      }
      else
      {
        *v13 = Srca.pData;
        *((_DWORD *)Src + 1) = Srca.hAllocation;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
    _InterlockedAdd((volatile signed __int32 *)(v9 + 152), 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v9 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v9);
    if ( v6 )
    {
      _InterlockedAdd((volatile signed __int32 *)v4 + 40, 0xFFFFFFFF);
      ExReleasePushLockSharedEx((char *)v4 + 144, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*((PERESOURCE *)v4 + 17));
    }
    KeLeaveCriticalRegion();
    goto LABEL_33;
  }
  COREACCESS::Release((COREACCESS *)v32);
  if ( v41 )
LABEL_47:
    COREACCESS::Release((COREACCESS *)v36);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v25);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
  return 3221226166LL;
}
