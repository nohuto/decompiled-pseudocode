/*
 * XREFs of DxgkSubmitCommandToHwQueueInternal @ 0x1402F8648
 * Callers:
 *     ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402F7E90 (-VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommandToHwQueue @ 0x1402F8630 (DxgkSubmitCommandToHwQueue.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14000FD00 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x140017698 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1402F814C (-VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SU.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1402F9E60 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueueInternal(struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1, bool a2)
{
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v3; // r14
  int v4; // r12d
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rdi
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rsi
  struct DXGHWQUEUE *v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rcx
  struct _KEVENT *v14; // rbx
  struct _KEVENT *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  bool v21; // zf
  DXGADAPTER *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  const wchar_t *v33; // r9
  __int64 v34; // rcx
  __int64 NumPrimaries; // [rsp+28h] [rbp-190h]
  __int64 v36; // [rsp+30h] [rbp-188h]
  __int64 v37; // [rsp+38h] [rbp-180h]
  int v38; // [rsp+50h] [rbp-168h] BYREF
  __int64 v39; // [rsp+58h] [rbp-160h]
  char v40; // [rsp+60h] [rbp-158h]
  struct DXGHWQUEUE *v41; // [rsp+68h] [rbp-150h] BYREF
  _BYTE v42[16]; // [rsp+70h] [rbp-148h] BYREF
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v43; // [rsp+80h] [rbp-138h]
  _BYTE v44[24]; // [rsp+88h] [rbp-130h] BYREF
  _OWORD v45[3]; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-E8h]
  _BYTE v47[8]; // [rsp+E0h] [rbp-D8h] BYREF
  _BYTE v48[16]; // [rsp+E8h] [rbp-D0h] BYREF
  DXGADAPTER *v49; // [rsp+F8h] [rbp-C0h]
  char v50; // [rsp+100h] [rbp-B8h]
  __int64 v51; // [rsp+108h] [rbp-B0h]
  _BYTE v52[16]; // [rsp+128h] [rbp-90h] BYREF
  DXGADAPTER *v53; // [rsp+138h] [rbp-80h]
  char v54; // [rsp+140h] [rbp-78h]
  __int64 v55; // [rsp+148h] [rbp-70h]
  __int64 v56; // [rsp+168h] [rbp-50h]
  char v57; // [rsp+170h] [rbp-48h]

  v3 = a1;
  v38 = -1;
  v4 = 0;
  v39 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2160;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2160);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v9 = *(_DWORD *)(ProcessDxgProcess + 408) >> 7;
    if ( (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
      goto LABEL_7;
  }
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v10 )
      goto LABEL_7;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v10 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
      v10 = v8;
    }
  }
  v41 = v10;
  if ( !v10 )
  {
    v30 = PsGetCurrentProcess(v9);
    v19 = -1073741811;
    WdLogSingleEntry2(2LL, v30, -1073741811LL);
    WdLogGlobalForLineNumber = 1835;
    v32 = PsGetCurrentProcess(v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v32,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_43;
  }
  memset(v45, 0, sizeof(v45));
  v46 = 0LL;
  if ( a2 )
  {
    RtlCopyFromUser(v45, v3, 0x38uLL);
    v3 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)v45;
  }
  v43 = v3;
  v41 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42, v3->hHwQueue, (struct _KTHREAD **)v10, &v41, 0, 1);
  v11 = v41;
  if ( !v41 )
  {
    v19 = -1073741811;
    WdLogSingleEntry3(2LL, v10, v3->hHwQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 1871;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)v10,
      v3->hHwQueue,
      -1073741811LL,
      0LL,
      0LL);
LABEL_42:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42);
LABEL_43:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    v21 = v40 == 0;
LABEL_36:
    if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
    return v19;
  }
  if ( *((_BYTE *)v41 + 148) )
  {
    v19 = -1073741811;
    WdLogSingleEntry2(2LL, v41, -1073741811LL);
    WdLogGlobalForLineNumber = 1880;
    v37 = 0LL;
    v36 = 0LL;
    NumPrimaries = -1073741811LL;
    v33 = L"Kernel mode submission not supported on UserModeSubmission DXGHWQUEUE 0x%I64x, returning 0x%I64x";
LABEL_87:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v33, (__int64)v11, NumPrimaries, v36, v37, 0LL);
    goto LABEL_42;
  }
  if ( v3->NumPrimaries > 0x10 )
  {
    v19 = -1073741811;
    WdLogSingleEntry4(2LL, v41, v3->NumPrimaries, 16LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1888;
    v37 = -1073741811LL;
    v36 = 16LL;
    NumPrimaries = v3->NumPrimaries;
    v33 = L"0x%I64x fails as specified NumWrittenPrimaries 0x%I64x exceeds limit 0x%I64x returning 0x%I64x";
    goto LABEL_87;
  }
  if ( v3->pPrivateDriverData )
  {
    if ( v3->PrivateDriverDataSize )
      goto LABEL_16;
LABEL_89:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1896;
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit);
    return (unsigned int)-1073741811;
  }
  if ( v3->PrivateDriverDataSize )
    goto LABEL_89;
LABEL_16:
  v12 = *(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  if ( *(_BYTE *)(v13 + 209) )
  {
    v19 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v13 + 4712),
            (struct _EX_RUNDOWN_REF *)v10,
            v3);
    goto LABEL_42;
  }
  if ( *(int *)(v13 + 2776) >= 0x2000 || *(_BYTE *)(v13 + 3076) )
    v4 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 344);
  v14 = *(struct _KEVENT **)(v12 + 16);
  if ( *(_DWORD *)(v12 + 464) != 2 )
  {
    if ( KeReadStateEvent(v14 + 4) )
      goto LABEL_23;
    v15 = v14 + 4;
    goto LABEL_22;
  }
  if ( !KeReadStateEvent(v14 + 5) )
  {
    v15 = v14 + 5;
LABEL_22:
    KeWaitForSingleObject(v15, Executive, 0, 0, 0LL);
  }
LABEL_23:
  if ( v4 )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 160));
    }
    else
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)"g");
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
    }
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v44,
    (struct _KTHREAD **)(*((_QWORD *)v11 + 2) + 440LL));
  v16 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v16 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v16 + 152));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, v12, 0, v17, 0);
  if ( !v57 )
    goto LABEL_27;
  if ( v54 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v52, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  v23 = v53;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v53 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v53 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)"g");
      KeWaitForSingleObject((char *)v53 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v53, 0LL);
    v23 = v53;
  }
  v55 = 0LL;
  v54 = 1;
  if ( *((_DWORD *)v23 + 50) == 1 )
  {
LABEL_27:
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
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)"g");
        KeWaitForSingleObject((char *)v49 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v49, 0LL);
    }
    v51 = 0LL;
    v50 = 1;
    if ( *(_DWORD *)(v56 + 608) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v48);
      if ( !v57 )
        goto LABEL_52;
      goto LABEL_51;
    }
    v19 = DXGHWQUEUE::SubmitCommand(v11, v3, a2);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
    _InterlockedDecrement((volatile signed __int32 *)(v16 + 152));
    ExReleasePushLockSharedEx(v16 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v44);
    if ( v4 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v12 + 160));
      ExReleasePushLockSharedEx(v12 + 144, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v12 + 136));
    }
    KeLeaveCriticalRegion();
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    v21 = v40 == 0;
    goto LABEL_36;
  }
LABEL_51:
  COREACCESS::Release((COREACCESS *)v52);
LABEL_52:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
  _InterlockedDecrement((volatile signed __int32 *)(v16 + 152));
  ExReleasePushLockSharedEx(v16 + 136, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v44);
  if ( v4 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 160));
    ExReleasePushLockSharedEx(v12 + 144, 0LL);
  }
  else
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v12 + 136));
  }
  KeLeaveCriticalRegion();
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
  return 3221226166LL;
}
