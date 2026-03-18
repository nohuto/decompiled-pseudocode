/*
 * XREFs of ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1402A57A4
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402EAC9C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x140355DA0 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14037B640 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x14038B858 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x14007F5D4 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyAllocation(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_DESTROYALLOCATION *a2,
        char a3)
{
  __int64 v3; // rax
  int v4; // r13d
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v11; // r14
  struct DXGPROCESS *v12; // rdi
  int v13; // r14d
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  KIRQL CurrentIrql; // al
  __int64 v19; // r12
  struct DXGTHREAD *v20; // rdi
  struct DXGTHREAD *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  const struct _DXGKARG_DESTROYALLOCATION *v26; // rdx
  const HANDLE *pAllocationList; // rcx
  HANDLE v28; // rcx
  __int64 v29; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v34; // rcx
  MOCKDRIVERSTATE *v35; // rcx
  KIRQL v36; // al
  PVOID BackTrace; // [rsp+50h] [rbp-59h] BYREF
  int v38; // [rsp+58h] [rbp-51h] BYREF
  __int64 v39; // [rsp+60h] [rbp-49h]
  char v40; // [rsp+68h] [rbp-41h]
  const struct _DXGKARG_DESTROYALLOCATION *v41; // [rsp+70h] [rbp-39h]
  _DWORD v42[2]; // [rsp+80h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-21h] BYREF
  char v44; // [rsp+B8h] [rbp+Fh]
  int v45; // [rsp+B9h] [rbp+10h]
  __int16 v46; // [rsp+BDh] [rbp+14h]
  char v47; // [rsp+BFh] [rbp+16h]

  v3 = *((_QWORD *)this + 2);
  v4 = 0;
  v41 = a2;
  if ( *(_BYTE *)(v3 + 209) )
    return 0LL;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 5005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 5005);
  CurrentProcess = PsGetCurrentProcess(v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_8;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v12 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v12 )
      goto LABEL_8;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v12 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
LABEL_8:
      v12 = v11;
    }
  }
  v13 = 0;
  v14 = ((unsigned __int64)v12 + 152) & -(__int64)(v12 != 0LL);
  if ( v14
    && *(struct _KTHREAD **)((((unsigned __int64)v12 + 152) & -(__int64)(v12 != 0LL)) + 8) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v12 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(((unsigned __int64)v12 + 152) & -(__int64)(v12 != 0LL), 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(((unsigned __int64)v12 + 152) & -(__int64)(v12 != 0LL)), v15, v16);
      ExAcquirePushLockExclusiveEx(((unsigned __int64)v12 + 152) & -(__int64)(v12 != 0LL), 0LL);
    }
    v4 = 2;
    *(_QWORD *)((((unsigned __int64)v12 + 152) & -(__int64)(v12 != 0LL)) + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  if ( !a3 )
  {
    v17 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(v17 + 5024) )
    {
      if ( *(_DWORD *)(v17 + 296) == 1 )
      {
        v42[1] = 0;
        memset((char *)&ApcState.ApcListHead[0].Blink + 1, 0, 31);
        v45 = 0;
        v46 = 0;
        v47 = 0;
        BackTrace = 0LL;
        RtlCaptureStackBackTrace(2u, 1u, &BackTrace, 0LL);
        v34 = *((_QWORD *)this + 2);
        v42[0] = a2->NumAllocations;
        ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)a2->pAllocationList;
        v35 = *(MOCKDRIVERSTATE **)(v34 + 5016);
        *(_QWORD *)&ApcState.InProgressFlags = BackTrace;
        LOBYTE(ApcState.ApcListHead[0].Blink) = 0;
        LODWORD(ApcState.Process) = 1;
        v44 = 1;
        MOCKDRIVERSTATE::ValidateMockDriverState(v35, 0, (const struct _MOCKDRIVERSTATE_VALIDATE_FBR *)v42);
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v19 = CurrentIrql;
  v20 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v21 = DXGTHREAD::GetCurrent();
    v20 = v21;
    if ( v21 )
      v13 = *((_DWORD *)v21 + 12);
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v42,
    *((struct DXGADAPTER **)this + 2));
  v22 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_DESTROYALLOCATION *))(*((_QWORD *)this + 2) + 480LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
          a2);
  if ( LOBYTE(v42[0]) )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v19 != KeGetCurrentIrql() )
  {
    v36 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v19, v36);
    WdLogGlobalForLineNumber = 438;
  }
  if ( v20 )
  {
    v24 = *((int *)v20 + 12);
    if ( (_DWORD)v24 != v13 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v20 + 12), v13, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
  v26 = v41;
  v25[3] = v22;
  v25[4] = v26->Flags.Value;
  v25[5] = v26->hResource;
  v25[6] = v26->NumAllocations;
  pAllocationList = v26->pAllocationList;
  if ( pAllocationList )
    v28 = *pAllocationList;
  else
    v28 = 0LL;
  v25[7] = v28;
  WdLogGlobalForLineNumber = 445;
  if ( (_DWORD)v22 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 447;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v22,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v4 == 2 )
  {
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit);
  }
  return (unsigned int)v22;
}
