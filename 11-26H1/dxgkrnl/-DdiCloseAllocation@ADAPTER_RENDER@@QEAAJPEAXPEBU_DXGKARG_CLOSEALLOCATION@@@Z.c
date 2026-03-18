/*
 * XREFs of ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1402A6174
 * Callers:
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
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCloseAllocation(
        ADAPTER_RENDER *this,
        void *a2,
        const struct _DXGKARG_CLOSEALLOCATION *a3)
{
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rsi
  struct DXGPROCESS *v9; // rdi
  int v10; // r13d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  KIRQL CurrentIrql; // al
  __int64 v15; // r12
  struct DXGTHREAD *v16; // rdi
  struct DXGTHREAD *v17; // rax
  int v18; // esi
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  const struct _DXGKARG_CLOSEALLOCATION *v23; // rdx
  __int64 v24; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  KIRQL v29; // al
  int v31; // [rsp+58h] [rbp-41h] BYREF
  __int64 v32; // [rsp+60h] [rbp-39h]
  char v33; // [rsp+68h] [rbp-31h]
  const struct _DXGKARG_CLOSEALLOCATION *v34; // [rsp+70h] [rbp-29h]
  _BYTE v35[8]; // [rsp+78h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF

  v34 = a3;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 5029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 5029);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v9 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v9 )
        goto LABEL_8;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v9 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v9 )
        goto LABEL_8;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v9 = v8;
LABEL_8:
  v10 = 0;
  v11 = ((unsigned __int64)v9 + 152) & -(__int64)(v9 != 0LL);
  if ( v11 && *(struct _KTHREAD **)((((unsigned __int64)v9 + 152) & -(__int64)(v9 != 0LL)) + 8) == KeGetCurrentThread() )
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
  if ( v9 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(((unsigned __int64)v9 + 152) & -(__int64)(v9 != 0LL), 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(((unsigned __int64)v9 + 152) & -(__int64)(v9 != 0LL)), v12, v13);
      ExAcquirePushLockExclusiveEx(((unsigned __int64)v9 + 152) & -(__int64)(v9 != 0LL), 0LL);
    }
    v10 = 2;
    *(_QWORD *)((((unsigned __int64)v9 + 152) & -(__int64)(v9 != 0LL)) + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v15 = CurrentIrql;
  v16 = 0LL;
  if ( CurrentIrql < 2u && (v17 = DXGTHREAD::GetCurrent(), (v16 = v17) != 0LL) )
    v18 = *((_DWORD *)v17 + 12);
  else
    v18 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v35,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(void *, const struct _DXGKARG_CLOSEALLOCATION *))(*((_QWORD *)this + 2) + 728LL))(a2, a3);
  if ( v35[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v15 != KeGetCurrentIrql() )
  {
    v29 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v15, v29);
    WdLogGlobalForLineNumber = 3084;
  }
  if ( v16 )
  {
    v21 = *((int *)v16 + 12);
    if ( (_DWORD)v21 != v18 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v16 + 12), v18, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20);
  v23 = v34;
  v22[3] = v19;
  v22[4] = a2;
  v22[5] = v23->NumAllocations;
  v22[6] = *v23->pOpenHandleList;
  WdLogGlobalForLineNumber = 3090;
  if ( (_DWORD)v19 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3092;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v10 == 2 )
  {
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
  return (unsigned int)v19;
}
