/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x14000A628
 * Callers:
 *     ADAPTER_RENDER_DdiSubmitCommand @ 0x14000AEC0 (ADAPTER_RENDER_DdiSubmitCommand.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        struct DXGADAPTER **this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  struct DXGADAPTER *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  KIRQL CurrentIrql; // al
  __int64 v11; // r14
  struct DXGTHREAD *v12; // rbx
  int v13; // esi
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 DmaBufferPrivateDataSubmissionStartOffset; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGTHREAD *Current; // rax
  KIRQL v28; // al
  unsigned int v29; // [rsp+50h] [rbp-29h] BYREF
  __int64 v30; // [rsp+58h] [rbp-21h]
  char v31; // [rsp+60h] [rbp-19h]
  _BYTE v32[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 5013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5013LL);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry(&v29, 5013LL);
  v5 = this[2];
  v6 = *((_QWORD *)v5 + 396);
  if ( !v6
    || (v7 = *(_QWORD *)(v6 + 744)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 80LL))(v7)
    && *((struct _KTHREAD **)v5 + 397) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v5 + 256)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, "g", v9, 73LL);
      KeWaitForSingleObject((char *)v5 + 256, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)v5 + 35), 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 1213);
  CurrentIrql = KeGetCurrentIrql();
  v11 = CurrentIrql;
  v12 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v12 = Current) != 0LL) )
    v13 = *((_DWORD *)Current + 12);
  else
    v13 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v32, this[2]);
  v14 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))this[2] + 66))(
          *((_QWORD *)this[2] + 36),
          a2);
  if ( v32[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v11 != KeGetCurrentIrql() )
  {
    v28 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v11, v28);
    WdLogGlobalForLineNumber = 1376;
  }
  if ( v12 )
  {
    v16 = *((int *)v12 + 12);
    if ( (_DWORD)v16 != v13 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v12 + 12), v13, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1213);
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
  v17[3] = v14;
  v17[4] = a2->hDevice;
  v17[5] = a2->DmaBufferSegmentId;
  v17[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  DmaBufferSize = a2->DmaBufferSize;
  v17[7] = DmaBufferSize;
  WdLogGlobalForLineNumber = 1383;
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v19);
  v20[3] = a2->DmaBufferSubmissionStartOffset;
  v20[4] = a2->DmaBufferSubmissionEndOffset;
  v20[5] = a2->pDmaBufferPrivateData;
  v20[6] = a2->DmaBufferPrivateDataSize;
  DmaBufferPrivateDataSubmissionStartOffset = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v20[7] = DmaBufferPrivateDataSubmissionStartOffset;
  WdLogGlobalForLineNumber = 1390;
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferPrivateDataSubmissionStartOffset, v22);
  v23[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v23[4] = a2->SubmissionFenceId;
  v23[5] = a2->NodeOrdinal;
  v23[6] = a2->Flags.Value;
  WdLogGlobalForLineNumber = 1396;
  if ( (_DWORD)v14 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1398;
    DxgkLogInternalTriageEvent(
      0,
      0x40000,
      -1,
      (unsigned int)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v29);
  return (unsigned int)v14;
}
