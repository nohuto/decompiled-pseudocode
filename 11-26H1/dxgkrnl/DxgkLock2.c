/*
 * XREFs of DxgkLock2 @ 0x14028F1F0
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402B8960 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
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
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     DxgkLock2Internal @ 0x14028ED50 (DxgkLock2Internal.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x14037C5A4 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x140424B34 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DxgkLock2(unsigned int *Src)
{
  __int64 v2; // rcx
  char CurrentThreadPreviousMode; // r13
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGDEVICE *v7; // rbx
  struct DXGDEVICE *v8; // rdi
  unsigned int *v9; // r14
  struct DXGDEVICE *v10; // rbx
  __int64 v11; // rax
  struct _KEVENT *v12; // r12
  struct _KEVENT *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // r12d
  ADAPTER_RENDER **v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rcx
  ADAPTER_RENDER **v21; // rcx
  __int64 v22; // rcx
  DXGADAPTER *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v29; // rcx
  _D3DKMT_UNLOCK2 v30; // [rsp+58h] [rbp-150h]
  int v31; // [rsp+60h] [rbp-148h] BYREF
  __int64 v32; // [rsp+68h] [rbp-140h]
  char v33; // [rsp+70h] [rbp-138h]
  struct DXGDEVICE *v34[2]; // [rsp+78h] [rbp-130h] BYREF
  struct DXGDEVICE *v35[2]; // [rsp+88h] [rbp-120h] BYREF
  __int64 v36; // [rsp+98h] [rbp-110h]
  struct DXGDEVICE *v37; // [rsp+A0h] [rbp-108h] BYREF
  int v38; // [rsp+A8h] [rbp-100h]
  void *v39; // [rsp+B0h] [rbp-F8h]
  __int128 v40; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-E0h]
  _BYTE v42[8]; // [rsp+D0h] [rbp-D8h] BYREF
  _BYTE v43[16]; // [rsp+D8h] [rbp-D0h] BYREF
  DXGADAPTER *v44; // [rsp+E8h] [rbp-C0h]
  char v45; // [rsp+F0h] [rbp-B8h]
  __int64 v46; // [rsp+F8h] [rbp-B0h]
  _BYTE v47[16]; // [rsp+118h] [rbp-90h] BYREF
  DXGADAPTER *v48; // [rsp+128h] [rbp-80h]
  char v49; // [rsp+130h] [rbp-78h]
  __int64 v50; // [rsp+138h] [rbp-70h]
  __int64 v51; // [rsp+158h] [rbp-50h]
  char v52; // [rsp+160h] [rbp-48h]

  v39 = Src;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2103;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2103);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGDEVICE *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_7;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v8 = (struct DXGDEVICE *)*((_QWORD *)Current + 3);
    if ( !v8 )
      goto LABEL_7;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v8 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v8 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
      v8 = v7;
    }
  }
  v34[1] = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 815;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( !v33 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_67;
  }
  v40 = 0LL;
  v41 = 0LL;
  v9 = (unsigned int *)&v40;
  v30 = (_D3DKMT_UNLOCK2)&v40;
  if ( CurrentThreadPreviousMode == 1 )
  {
    RtlCopyFromUser(&v40, Src, 0x18uLL);
  }
  else
  {
    v9 = Src;
    v30 = (_D3DKMT_UNLOCK2)Src;
  }
  v34[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v35, *v9, (struct _KTHREAD **)v8, v34);
  v10 = v34[0];
  if ( !v34[0] )
  {
    WdLogSingleEntry2(2LL, *v9, -1073741811LL);
    WdLogGlobalForLineNumber = 848;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      *v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v21 = (ADAPTER_RENDER **)v35[0];
    if ( v35[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v35[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v21[2], (struct DXGDEVICE *)v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( !v33 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_67:
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  v11 = *(_QWORD *)(*((_QWORD *)v34[0] + 2) + 16LL);
  v36 = v11;
  v35[1] = (struct DXGDEVICE *)v11;
  v37 = v34[0];
  if ( *(int *)(v11 + 2776) >= 0x2000 || *(_BYTE *)(v11 + 3076) )
    v38 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 344);
  else
    v38 = 0;
  v12 = (struct _KEVENT *)*((_QWORD *)v10 + 2);
  if ( *((_DWORD *)v10 + 116) != 2 )
  {
    if ( KeReadStateEvent(v12 + 4) )
      goto LABEL_18;
    v13 = v12 + 4;
    goto LABEL_17;
  }
  if ( !KeReadStateEvent(v12 + 5) )
  {
    v13 = v12 + 5;
LABEL_17:
    KeWaitForSingleObject(v13, Executive, 0, 0, 0LL);
  }
LABEL_18:
  if ( v38 )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v10 + 40);
    }
    else
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 144, 0LL) )
      {
        if ( bTracingEnabled && *((_DWORD *)v10 + 42) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, (__int64)"g");
        ExAcquirePushLockSharedEx((char *)v10 + 144, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)v10 + 40);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)"g");
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v10, 0, v14, 0);
  if ( !v52 )
    goto LABEL_22;
  if ( v49 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v47, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  v23 = v48;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v48 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v48 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)"g");
      KeWaitForSingleObject((char *)v48 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v48, 0LL);
    v23 = v48;
  }
  v50 = 0LL;
  v49 = 1;
  if ( *((_DWORD *)v23 + 50) == 1 )
  {
LABEL_22:
    if ( v45 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v43, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v44 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v44 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, (__int64)"g");
        KeWaitForSingleObject((char *)v44 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v44, 0LL);
    }
    v46 = 0LL;
    v45 = 1;
    if ( *(_DWORD *)(v51 + 608) == 1 )
    {
      v16 = DxgkLock2Internal(v10, v36, (__int64)v8, (struct _D3DKMT_LOCK2 *)v9);
      if ( v16 >= 0 && CurrentThreadPreviousMode == 1 )
        RtlWriteULong64ToUser((_QWORD *)Src + 2, *((_QWORD *)v9 + 2));
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
      if ( v38 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v10 + 40);
        ExReleasePushLockSharedEx((char *)v10 + 144, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*((PERESOURCE *)v10 + 17));
      }
      KeLeaveCriticalRegion();
      v17 = (ADAPTER_RENDER **)v35[0];
      if ( v35[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v35[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v17[2], (struct DXGDEVICE *)v17);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
      }
      return (unsigned int)v16;
    }
    COREACCESS::Release((COREACCESS *)v43);
    if ( v52 )
      COREACCESS::Release((COREACCESS *)v47);
  }
  else
  {
    v49 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v48 + 23) )
      DXGADAPTER::ReleaseCoreResource(v48, 0LL);
    v50 = 0LL;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v37);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v35);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit);
  return 3221226166LL;
}
