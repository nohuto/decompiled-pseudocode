/*
 * XREFs of ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1402A532C
 * Callers:
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x140193B4C (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     DxgkGetScanLine @ 0x1402A3580 (DxgkGetScanLine.c)
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

__int64 __fastcall ADAPTER_DISPLAY::DdiGetScanLine(ADAPTER_DISPLAY *this, struct _DXGKARG_GETSCANLINE *a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // rsi
  struct DXGPROCESS *v8; // rdi
  int v9; // r13d
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  KIRQL CurrentIrql; // al
  __int64 v14; // r12
  struct DXGTHREAD *v15; // rdi
  struct DXGTHREAD *v16; // rax
  int v17; // esi
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  struct _DXGKARG_GETSCANLINE *v22; // rcx
  __int64 v23; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  KIRQL v28; // al
  int v29; // [rsp+50h] [rbp-39h] BYREF
  __int64 v30; // [rsp+58h] [rbp-31h]
  char v31; // [rsp+60h] [rbp-29h]
  struct _DXGKARG_GETSCANLINE *v32; // [rsp+68h] [rbp-21h]
  _BYTE v33[8]; // [rsp+70h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-11h] BYREF

  v32 = a2;
  v29 = -1;
  v30 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 5036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 5036);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v8 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v8 )
        goto LABEL_8;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v8 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v8 )
        goto LABEL_8;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v8 = v7;
LABEL_8:
  v9 = 0;
  v10 = ((unsigned __int64)v8 + 152) & -(__int64)(v8 != 0LL);
  if ( v10 && *(struct _KTHREAD **)((((unsigned __int64)v8 + 152) & -(__int64)(v8 != 0LL)) + 8) == KeGetCurrentThread() )
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
  if ( v8 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(((unsigned __int64)v8 + 152) & -(__int64)(v8 != 0LL), 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(((unsigned __int64)v8 + 152) & -(__int64)(v8 != 0LL)), v11, v12);
      ExAcquirePushLockExclusiveEx(((unsigned __int64)v8 + 152) & -(__int64)(v8 != 0LL), 0LL);
    }
    v9 = 2;
    *(_QWORD *)((((unsigned __int64)v8 + 152) & -(__int64)(v8 != 0LL)) + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v14 = CurrentIrql;
  v15 = 0LL;
  if ( CurrentIrql < 2u && (v16 = DXGTHREAD::GetCurrent(), (v15 = v16) != 0LL) )
    v17 = *((_DWORD *)v16 + 12);
  else
    v17 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v33,
    *((struct DXGADAPTER **)this + 2));
  v18 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSCANLINE *))(*((_QWORD *)this + 2) + 680LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
          a2);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v14 != KeGetCurrentIrql() )
  {
    v28 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v14, v28);
    WdLogGlobalForLineNumber = 2926;
  }
  if ( v15 )
  {
    v20 = *((int *)v15 + 12);
    if ( (_DWORD)v20 != v17 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v15 + 12), v17, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
  v21[3] = v18;
  v22 = v32;
  v21[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 288LL);
  v21[5] = v22->ScanLine;
  WdLogGlobalForLineNumber = 2931;
  if ( (_DWORD)v18 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2933;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v9 == 2 )
  {
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
  return (unsigned int)v18;
}
