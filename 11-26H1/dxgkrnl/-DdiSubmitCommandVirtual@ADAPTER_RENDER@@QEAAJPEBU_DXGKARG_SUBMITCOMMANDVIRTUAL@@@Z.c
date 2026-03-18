/*
 * XREFs of ?DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x140330B10
 * Callers:
 *     ADAPTER_RENDER_DdiSubmitCommandVirtual @ 0x140041CF0 (ADAPTER_RENDER_DdiSubmitCommandVirtual.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandVirtual(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r15
  ReferenceCounted *v6; // rbx
  int v7; // edi
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  char *v17; // rax
  int v18; // eax
  __int64 v19; // rdi
  KIRQL v20; // al
  ReferenceCounted *v21; // [rsp+50h] [rbp-88h] BYREF
  int v22; // [rsp+58h] [rbp-80h] BYREF
  __int64 v23; // [rsp+60h] [rbp-78h]
  char v24; // [rsp+68h] [rbp-70h]
  char v25[8]; // [rsp+70h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 5063);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  v6 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_27;
  v21 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v21) < 0 )
    goto LABEL_27;
  v6 = v21;
  if ( v21 )
  {
LABEL_8:
    v7 = *((_DWORD *)v6 + 12);
    goto LABEL_9;
  }
  v17 = (char *)ExAllocateFromLookasideListEx(&g_DxgkThreadLookasideList);
  v6 = (ReferenceCounted *)v17;
  if ( v17 )
  {
    *((_QWORD *)v17 + 3) = 0LL;
    *(_QWORD *)v17 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *((_DWORD *)v17 + 2) = 1;
    *(_QWORD *)v17 = &DXGTHREAD::`vftable';
    *((_QWORD *)v17 + 5) = &DXGTHREAD::m_LockOrderTrackerUpperBound;
    strcpy(v17 + 32, "DxgT");
    *((_QWORD *)v17 + 6) = 0LL;
    *((_DWORD *)v17 + 14) = -1;
    *((_QWORD *)v17 + 2) = KeGetCurrentThread();
    v18 = PsTlsSetValue(g_DxgkThreadTlsId, v17);
    v19 = v18;
    if ( v18 >= 0 )
    {
      ++dword_140168C48;
      ++dword_140168C40;
      goto LABEL_26;
    }
    ReferenceCounted::Release(v6);
    WdLogSingleEntry2(2LL, v6, v19);
    WdLogGlobalForLineNumber = 531;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to set thread PsTls for DXGTHREAD 0xI64x (Status = 0xI64x).",
      (__int64)v6,
      v19,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 514;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGTHREAD for thread 0xI64x.",
      (__int64)KeGetCurrentThread(),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = 0LL;
LABEL_26:
  v21 = v6;
  if ( v6 )
    goto LABEL_8;
LABEL_27:
  v7 = 0;
LABEL_9:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v25,
    *((struct DXGADAPTER **)this + 2));
  v8 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *))(*((_QWORD *)this + 2) + 936LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
         a2);
  if ( v25[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v5 != KeGetCurrentIrql() )
  {
    v20 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v5, v20);
    WdLogGlobalForLineNumber = 1417;
  }
  if ( v6 )
  {
    v10 = *((int *)v6 + 12);
    if ( (_DWORD)v10 != v7 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v6 + 12), v7, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = v8;
  v11[4] = a2->hContext;
  v11[5] = a2->DmaBufferVirtualAddress;
  DmaBufferSize = a2->DmaBufferSize;
  v11[6] = DmaBufferSize;
  WdLogGlobalForLineNumber = 1423;
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v13);
  v14[3] = a2->pDmaBufferPrivateData;
  v14[4] = a2->DmaBufferPrivateDataSize;
  v14[5] = a2->SubmissionFenceId;
  v14[6] = a2->NodeOrdinal;
  v14[7] = a2->Flags.Value;
  WdLogGlobalForLineNumber = 1430;
  if ( (_DWORD)v8 != -1073741811 && (_DWORD)v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1432;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return (unsigned int)v8;
}
