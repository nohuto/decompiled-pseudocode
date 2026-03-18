/*
 * XREFs of ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1402A4BA4
 * Callers:
 *     ADAPTER_RENDER_DdiSignalMonitoredFence @ 0x140074E10 (ADAPTER_RENDER_DdiSignalMonitoredFence.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F6600 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1403B38B0 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSignalMonitoredFence(
        ADAPTER_RENDER *this,
        void *a2,
        struct _DXGKARG_SIGNALMONITOREDFENCE *a3)
{
  int v3; // r14d
  struct DXGPROCESS *Current; // rdi
  int v7; // r13d
  DXGPUSHLOCK *v8; // rbx
  KIRQL CurrentIrql; // al
  __int64 v10; // r12
  struct DXGTHREAD *v11; // rsi
  struct DXGTHREAD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  KIRQL v19; // al
  int v22; // [rsp+60h] [rbp-39h] BYREF
  __int64 v23; // [rsp+68h] [rbp-31h]
  char v24; // [rsp+70h] [rbp-29h]
  _BYTE v25[8]; // [rsp+78h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF

  v3 = 0;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5134;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 5134);
  if ( a3->KernelSubmissionType )
    Current = DXGPROCESS::GetCurrent();
  else
    Current = 0LL;
  v7 = 0;
  v8 = (DXGPUSHLOCK *)(((unsigned __int64)Current + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)Current >> 64));
  if ( v8
    && *(struct _KTHREAD **)((((unsigned __int64)Current + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)Current >> 64))
                           + 8) == KeGetCurrentThread() )
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
  if ( Current )
  {
    DXGPUSHLOCK::AcquireExclusive(v8);
    v7 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v10 = CurrentIrql;
  v11 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v12 = DXGTHREAD::GetCurrent();
    v11 = v12;
    if ( v12 )
      v3 = *((_DWORD *)v12 + 12);
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v25,
    *((struct DXGADAPTER **)this + 2));
  v13 = (*(int (__fastcall **)(void *, struct _DXGKARG_SIGNALMONITOREDFENCE *))(*((_QWORD *)this + 2) + 1344LL))(a2, a3);
  if ( v25[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v10 != KeGetCurrentIrql() )
  {
    v19 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v10, v19);
    WdLogGlobalForLineNumber = 3383;
  }
  if ( v11 )
  {
    v15 = *((int *)v11 + 12);
    if ( (_DWORD)v15 != v3 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v11 + 12), v3, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
  v16[3] = v13;
  v16[4] = a2;
  v16[5] = a3->pDmaBuffer;
  v16[6] = a3->DmaSize;
  WdLogGlobalForLineNumber = 3389;
  if ( (_DWORD)v13 != -1071775743 && (_DWORD)v13 != -1071775232 && (_DWORD)v13 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3391;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v7 == 2 )
  {
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
  return (unsigned int)v13;
}
