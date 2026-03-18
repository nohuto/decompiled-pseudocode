/*
 * XREFs of ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1403BDED4
 * Callers:
 *     ADAPTER_RENDER_DdiPatch @ 0x14005BDF0 (ADAPTER_RENDER_DdiPatch.c)
 * Callees:
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
 */

__int64 __fastcall ADAPTER_RENDER::DdiPatch(ADAPTER_RENDER *this, const struct _DXGKARG_PATCH *a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r15
  struct DXGTHREAD *v6; // rbx
  struct DXGTHREAD *Current; // rax
  int v8; // esi
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 DmaBufferPrivateDataSubmissionStartOffset; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 PatchLocationListSize; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  KIRQL v24; // al
  int v25; // [rsp+50h] [rbp-29h] BYREF
  __int64 v26; // [rsp+58h] [rbp-21h]
  char v27; // [rsp+60h] [rbp-19h]
  _BYTE v28[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 5008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 5008);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  v6 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v6 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 12);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v28,
    *((struct DXGADAPTER **)this + 2));
  v9 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PATCH *))(*((_QWORD *)this + 2) + 520LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
         a2);
  if ( v28[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v5 != KeGetCurrentIrql() )
  {
    v24 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v5, v24);
    WdLogGlobalForLineNumber = 529;
  }
  if ( v6 )
  {
    v11 = *((int *)v6 + 12);
    if ( (_DWORD)v11 != v8 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v6 + 12), v8, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
  v12[3] = v9;
  v12[4] = a2->hDevice;
  v12[5] = a2->DmaBufferSegmentId;
  v12[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  DmaBufferSize = a2->DmaBufferSize;
  v12[7] = DmaBufferSize;
  WdLogGlobalForLineNumber = 536;
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v14);
  v15[3] = a2->DmaBufferSubmissionStartOffset;
  v15[4] = a2->DmaBufferSubmissionEndOffset;
  v15[5] = a2->pDmaBufferPrivateData;
  v15[6] = a2->DmaBufferPrivateDataSize;
  DmaBufferPrivateDataSubmissionStartOffset = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v15[7] = DmaBufferPrivateDataSubmissionStartOffset;
  WdLogGlobalForLineNumber = 543;
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferPrivateDataSubmissionStartOffset, v17);
  v18[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v18[4] = a2->pAllocationList;
  v18[5] = a2->AllocationListSize;
  v18[6] = a2->pPatchLocationList;
  PatchLocationListSize = a2->PatchLocationListSize;
  v18[7] = PatchLocationListSize;
  WdLogGlobalForLineNumber = 550;
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(PatchLocationListSize, v20);
  v21[3] = a2->PatchLocationListSubmissionStart;
  v21[4] = a2->PatchLocationListSubmissionLength;
  v21[5] = a2->SubmissionFenceId;
  v21[6] = a2->Flags.Value;
  WdLogGlobalForLineNumber = 556;
  if ( (_DWORD)v9 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 558;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
  return (unsigned int)v9;
}
