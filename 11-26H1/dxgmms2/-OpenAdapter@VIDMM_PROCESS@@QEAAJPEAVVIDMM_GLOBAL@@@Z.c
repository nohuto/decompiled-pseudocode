/*
 * XREFs of ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400CB9E0
 * Callers:
 *     VidMmOpenAdapter @ 0x140043CD0 (VidMmOpenAdapter.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140047988 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400AAA6C (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400C9AE0 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB330 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PE.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x14011D998 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1400B935C (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400C7AF4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x140112590 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 *     ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1401148B0 (--0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::OpenAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2)
{
  __int64 v4; // r15
  __int64 v5; // rax
  VIDMM_PROCESS_HEAP *v6; // rax
  VIDMM_RECYCLE_HEAP_MGR *v7; // rax
  __int64 v8; // r14
  void *v9; // rax
  struct _KPROCESS *v10; // rcx
  int v11; // ebp
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, struct _KTHREAD **, _QWORD); // r9
  struct _KTHREAD **v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v18; // rax
  struct VIDMM_PROCESS_ADAPTER_INFO *v19; // r14
  unsigned __int16 i; // bx
  __int64 v21; // rcx
  _BYTE v23[24]; // [rsp+50h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-70h] BYREF

  v4 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 240LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v5 + 24) = a2;
    *(_QWORD *)(v5 + 32) = this;
    WdLogGlobalForLineNumber = 437;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v23, this + 38);
  if ( *((_QWORD *)this[5] + *((unsigned int *)a2 + 11324)) )
    goto LABEL_15;
  if ( dword_14008A508 || (*((_DWORD *)this[9] + 102) & 0x180) != 0 )
  {
    v9 = (void *)operator new(1696LL, 0x30316956u, 64LL);
    if ( !v9 )
    {
LABEL_20:
      _InterlockedAdd(&dword_14008A7C0, 1u);
      WdLogSingleEntry0(6LL);
      v16 = 464;
LABEL_31:
      WdLogGlobalForLineNumber = v16;
      DxgkLogInternalTriageEvent(v15, 262145LL);
LABEL_32:
      v11 = -1073741801;
      goto LABEL_35;
    }
    v7 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v9);
  }
  else
  {
    v6 = (VIDMM_PROCESS_HEAP *)operator new(320LL, 0x30316956u, 64LL);
    if ( !v6 )
    {
      v8 = 0LL;
      goto LABEL_12;
    }
    v7 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v6);
  }
  v8 = (__int64)v7;
LABEL_12:
  if ( !v8 )
    goto LABEL_20;
  v10 = this[2];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v10, &ApcState);
  v11 = (*(__int64 (__fastcall **)(__int64, struct _KTHREAD **, _QWORD))(*(_QWORD *)v8 + 8LL))(
          v8,
          this,
          *((unsigned int *)a2 + 11324));
  KeUnstackDetachProcess(&ApcState);
  if ( v11 < 0 )
    goto LABEL_19;
  *((_QWORD *)this[5] + *((unsigned int *)a2 + 11324)) = v8;
LABEL_15:
  if ( *((_QWORD *)this[7] + *((unsigned int *)a2 + 11324)) )
  {
LABEL_24:
    v17 = *((_QWORD *)this[4] + v4);
    if ( v17 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v17 + 136), 1u);
LABEL_34:
      v11 = 0;
      goto LABEL_35;
    }
    v18 = VIDMM_PROCESS::InitializeProcessAdapterInfo(this, a2);
    v19 = v18;
    if ( v18 )
    {
      *((_QWORD *)this[4] + v4) = v18;
      _InterlockedAdd((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v4, 1u);
      for ( i = 0; (unsigned int)i < *((_DWORD *)a2 + 1738); ++i )
      {
        v21 = *(_QWORD *)(*((_QWORD *)a2 + 5040) + 8LL * i);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 168LL))(
          v21,
          *((unsigned int *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v4));
      }
      VIDMM_GLOBAL::ReportProcessAdapterBudget(a2, v19);
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  v12 = operator new(24LL, 0x63316956u, 64LL);
  v8 = v12;
  if ( !v12 )
  {
    _InterlockedAdd(&dword_14008A8C8, 1u);
    WdLogSingleEntry0(6LL);
    v16 = 506;
    goto LABEL_31;
  }
  *(_BYTE *)(v12 + 16) = 0;
  v13 = (__int64 (__fastcall *)(__int64, struct _KTHREAD **, _QWORD))*(&VIDMM_SYSTEM_HEAP::`vftable' + 1);
  *(_QWORD *)v12 = &VIDMM_SYSTEM_HEAP::`vftable';
  if ( (*((_DWORD *)this[9] + 102) & 0x80) != 0 )
    v14 = this;
  else
    v14 = 0LL;
  v11 = v13(v12, v14, *((unsigned int *)a2 + 11324));
  if ( v11 >= 0 )
  {
    *((_QWORD *)this[7] + *((unsigned int *)a2 + 11324)) = v8;
    goto LABEL_24;
  }
LABEL_19:
  (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
LABEL_35:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  return (unsigned int)v11;
}
