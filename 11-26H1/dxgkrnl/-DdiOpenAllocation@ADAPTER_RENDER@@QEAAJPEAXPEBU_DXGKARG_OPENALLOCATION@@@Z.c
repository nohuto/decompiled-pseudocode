/*
 * XREFs of ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x140361170
 * Callers:
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x140360B80 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
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
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiOpenAllocation(
        ADAPTER_RENDER *this,
        void *a2,
        const struct _DXGKARG_OPENALLOCATION *a3)
{
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rdi
  struct DXGPROCESS *v10; // rsi
  struct _KTHREAD **v11; // rbx
  int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // r8
  KIRQL CurrentIrql; // al
  __int64 v16; // r15
  struct DXGTHREAD *v17; // rdi
  int v18; // esi
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  void *v23; // rcx
  __int64 v24; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  KIRQL v29; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-A8h] BYREF
  int v31; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-98h]
  char v33; // [rsp+68h] [rbp-90h]
  void *v34; // [rsp+70h] [rbp-88h]
  _BYTE v35[8]; // [rsp+78h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-78h] BYREF

  v34 = a2;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 5028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 5028);
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_7;
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
      v10 = v9;
    }
  }
  v11 = (struct _KTHREAD **)((char *)v10 + 152);
  v12 = 0;
  if ( !v10 )
    v11 = 0LL;
  if ( v11 && v11[1] == KeGetCurrentThread() )
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
  if ( v10 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v11, v13, v14);
      ExAcquirePushLockExclusiveEx(v11, 0LL);
    }
    v12 = 2;
    v11[1] = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v16 = CurrentIrql;
  v17 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v17 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v17 = DxgThread) != 0LL)) )
  {
    v18 = *((_DWORD *)v17 + 12);
  }
  else
  {
    v18 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v35,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(void *, const struct _DXGKARG_OPENALLOCATION *))(*((_QWORD *)this + 2) + 720LL))(a2, a3);
  if ( v35[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v16 != KeGetCurrentIrql() )
  {
    v29 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v16, v29);
    WdLogGlobalForLineNumber = 3049;
  }
  if ( v17 )
  {
    v21 = *((int *)v17 + 12);
    if ( (_DWORD)v21 != v18 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v17 + 12), v18, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20);
  v23 = v34;
  v22[3] = v19;
  v22[4] = v23;
  v22[5] = a3->pOpenAllocation->hAllocation;
  v22[6] = a3->pOpenAllocation->pPrivateDriverData;
  v22[7] = a3->pOpenAllocation->hDeviceSpecificAllocation;
  WdLogGlobalForLineNumber = 3056;
  if ( (_DWORD)v19 && (_DWORD)v19 != -1073741811 && (_DWORD)v19 != -1073741801 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3058;
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
  if ( !a3->pOpenAllocation->hDeviceSpecificAllocation && (int)v19 >= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3066;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pArgKmOpenAllocation->pOpenAllocation->hDeviceSpecificAllocation != NULL) || !NT_SUCCESS(Status)",
      3066LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v12 == 2 )
  {
    v11[1] = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
  return (unsigned int)v19;
}
