/*
 * XREFs of DxgkUnlock2 @ 0x14028E410
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140428540 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkUnlock2Internal @ 0x14028DB00 (DxgkUnlock2Internal.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkUnlock2(void *Src)
{
  __int64 v2; // rcx
  char CurrentThreadPreviousMode; // r14
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v7; // rbx
  struct _KTHREAD **v8; // rdi
  unsigned int *v9; // r12
  struct DXGDEVICE *v10; // rbx
  ADAPTER_RENDER **v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rcx
  int v15; // r15d
  struct _KEVENT *v16; // r14
  struct _KEVENT *v17; // rcx
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edi
  ADAPTER_RENDER **v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  DXGADAPTER *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v32; // rcx
  int v33; // [rsp+50h] [rbp-118h] BYREF
  __int64 v34; // [rsp+58h] [rbp-110h]
  char v35; // [rsp+60h] [rbp-108h]
  struct DXGDEVICE *v36; // [rsp+68h] [rbp-100h] BYREF
  int v37; // [rsp+70h] [rbp-F8h]
  struct DXGDEVICE *v38; // [rsp+78h] [rbp-F0h] BYREF
  _QWORD v39[2]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v40[8]; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v41[16]; // [rsp+98h] [rbp-D0h] BYREF
  DXGADAPTER *v42; // [rsp+A8h] [rbp-C0h]
  char v43; // [rsp+B0h] [rbp-B8h]
  __int64 v44; // [rsp+B8h] [rbp-B0h]
  _BYTE v45[16]; // [rsp+D8h] [rbp-90h] BYREF
  DXGADAPTER *v46; // [rsp+E8h] [rbp-80h]
  char v47; // [rsp+F0h] [rbp-78h]
  __int64 v48; // [rsp+F8h] [rbp-70h]
  __int64 v49; // [rsp+118h] [rbp-50h]
  char v50; // [rsp+120h] [rbp-48h]

  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2104;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2104);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_7;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v8 = (struct _KTHREAD **)*((_QWORD *)Current + 3);
    if ( v8 )
      goto LABEL_9;
    goto LABEL_7;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v8 = (struct _KTHREAD **)DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v8 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3080;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v8 = v7;
  }
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1014;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( !v35 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_59;
  }
LABEL_9:
  v39[0] = 0LL;
  v9 = (unsigned int *)v39;
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(v39, Src, 8uLL);
  else
    v9 = (unsigned int *)Src;
  v36 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, *v9, v8, &v36);
  v10 = v36;
  if ( !v36 )
  {
    WdLogSingleEntry2(2LL, *v9, -1073741811LL);
    WdLogGlobalForLineNumber = 1047;
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
    v11 = (ADAPTER_RENDER **)v38;
    if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v11[2], (struct DXGDEVICE *)v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( !v35 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_59:
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  v14 = *(_QWORD *)(*((_QWORD *)v36 + 2) + 16LL);
  if ( *(int *)(v14 + 2776) >= 0x2000 || *(_BYTE *)(v14 + 3076) )
  {
    v15 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 344);
    v37 = v15;
  }
  else
  {
    v15 = 0;
    v37 = 0;
  }
  v16 = (struct _KEVENT *)*((_QWORD *)v10 + 2);
  if ( *((_DWORD *)v10 + 116) != 2 )
  {
    if ( KeReadStateEvent(v16 + 4) )
      goto LABEL_24;
    v17 = v16 + 4;
    goto LABEL_23;
  }
  if ( !KeReadStateEvent(v16 + 5) )
  {
    v17 = v16 + 5;
LABEL_23:
    KeWaitForSingleObject(v17, Executive, 0, 0, 0LL);
  }
LABEL_24:
  if ( v15 )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v10 + 40);
      v19 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v19 = 0;
    }
    if ( !v19 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 144, 0LL) )
      {
        DXGPUSHLOCK::LogEvent((struct DXGDEVICE *)((char *)v10 + 144), v24, v25);
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
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)"g");
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v10, 2, v18, 0);
  if ( !v50 )
    goto LABEL_29;
  if ( v47 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v45, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  v26 = v46;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v46 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v46 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, (__int64)"g");
      KeWaitForSingleObject((char *)v46 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v46, 0LL);
    v26 = v46;
  }
  v48 = 0LL;
  v47 = 1;
  if ( *((_DWORD *)v26 + 50) == 1 )
  {
LABEL_29:
    if ( v43 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v41, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v42 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v42 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, (__int64)"g");
        KeWaitForSingleObject((char *)v42 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v42, 0LL);
    }
    v44 = 0LL;
    v43 = 1;
    if ( *(_DWORD *)(v49 + 608) == 1 )
    {
      v21 = DxgkUnlock2Internal((DXGADAPTER **)v10, *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL), (__int64)v8, (__int64)v9);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
      if ( v15 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v10 + 40);
        ExReleasePushLockSharedEx((char *)v10 + 144, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*((PERESOURCE *)v10 + 17));
      }
      KeLeaveCriticalRegion();
      v22 = (ADAPTER_RENDER **)v38;
      if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v22[2], (struct DXGDEVICE *)v22);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
      return v21;
    }
    COREACCESS::Release((COREACCESS *)v41);
    if ( v50 )
      COREACCESS::Release((COREACCESS *)v45);
  }
  else
  {
    v47 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v46 + 23) )
      DXGADAPTER::ReleaseCoreResource(v46, 0LL);
    v48 = 0LL;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v36);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit);
  return 3221226166LL;
}
