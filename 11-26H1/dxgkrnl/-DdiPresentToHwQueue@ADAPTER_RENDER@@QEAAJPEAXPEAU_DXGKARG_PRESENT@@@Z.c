/*
 * XREFs of ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1402A6AE8
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F6600 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiPresentToHwQueue(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_PRESENT *a3)
{
  int v3; // esi
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v8; // rbx
  KIRQL CurrentIrql; // al
  __int64 v10; // r15
  struct DXGTHREAD *v11; // rdi
  struct DXGTHREAD *v12; // rax
  __int64 (__fastcall *v13)(void *, struct _DXGKARG_PRESENT *); // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // rcx
  KIRQL v22; // al
  _BYTE v23[8]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v24; // [rsp+58h] [rbp-41h]
  int v25; // [rsp+60h] [rbp-39h]
  int v26; // [rsp+68h] [rbp-31h] BYREF
  __int64 v27; // [rsp+70h] [rbp-29h]
  char v28; // [rsp+78h] [rbp-21h]
  _BYTE v29[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  v3 = 0;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 5135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 5135);
  Current = DXGPROCESS::GetCurrent();
  v25 = 0;
  v8 = Current;
  v24 = ((unsigned __int64)Current + 152) & -(__int64)(Current != 0LL);
  if ( v24
    && *(struct _KTHREAD **)((((unsigned __int64)Current + 152) & -(__int64)(Current != 0LL)) + 8) == KeGetCurrentThread() )
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
    DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v23);
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
    (DXGVALIDATIONPROCESSATTACH *)v29,
    *((struct DXGADAPTER **)this + 2));
  v13 = *(__int64 (__fastcall **)(void *, struct _DXGKARG_PRESENT *))(*((_QWORD *)this + 2) + 1352LL);
  if ( v13 )
    v14 = v13(a2, a3);
  else
    v14 = -1073741822;
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v10 != KeGetCurrentIrql() )
  {
    v22 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v10, v22);
    WdLogGlobalForLineNumber = 3208;
  }
  if ( v11 )
  {
    v16 = *((int *)v11 + 12);
    if ( (_DWORD)v16 != v3 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v11 + 12), v3, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
  v17[3] = v14;
  v17[4] = a2;
  v17[5] = a3->SubRectCnt;
  v17[6] = a3->pDmaBuffer;
  v17[7] = a3->DmaSize;
  WdLogGlobalForLineNumber = 3215;
  if ( v14 > -1073741670 )
  {
    if ( v14 == -1071775743 || v14 == -1071775736 || v14 == -1071775232 || !v14 )
      goto LABEL_27;
LABEL_43:
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3217;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  if ( v14 != -1073741670
    && v14 != -1073741822
    && v14 != -1073741816
    && v14 != -1073741801
    && v14 != -1073741795
    && v14 != -1073741674 )
  {
    goto LABEL_43;
  }
LABEL_27:
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v25 == 1 )
  {
    v18 = v24;
    v25 = 0;
    _InterlockedDecrement((volatile signed __int32 *)(v24 + 16));
    ExReleasePushLockSharedEx(v18, 0LL);
  }
  else
  {
    if ( v25 != 2 )
      goto LABEL_30;
    v21 = v24;
    v25 = 0;
    *(_QWORD *)(v24 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v21, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
  return (unsigned int)v14;
}
