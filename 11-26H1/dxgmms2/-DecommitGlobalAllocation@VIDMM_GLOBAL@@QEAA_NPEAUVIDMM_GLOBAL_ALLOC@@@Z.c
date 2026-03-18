/*
 * XREFs of ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E090
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x14010DC98 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D7254 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400E4CD8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400F5BF0 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E984 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E9E4 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::DecommitGlobalAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r15
  char v8; // bl
  char v9; // si
  char result; // al
  __int64 v11; // r9
  struct VIDMM_GLOBAL_ALLOC *i; // r15
  __int64 v13; // rcx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v2 = *(_QWORD *)a2;
  v5 = *((_QWORD *)this + 5040);
  v6 = (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F;
  v7 = *(_QWORD *)(v5 + 8 * v6);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6) + 24) = a2;
    WdLogGlobalForLineNumber = 27535;
  }
  v8 = 0;
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  v9 = 1;
  if ( *(_WORD *)(*((_QWORD *)a2 + 46) + 8LL) == 2 && (*((_DWORD *)a2 + 8) & 0x40) != 0 )
  {
    *((_DWORD *)a2 + 6) |= 0x4000000u;
    v8 = 1;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 17);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v2 + 56) & 1) != 0 )
    {
      VIDMM_GLOBAL::MarkGlobalAllocation(this, a2);
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _BYTE, _QWORD))(*(_QWORD *)v7 + 240LL))(
        v7,
        v2,
        0LL,
        0LL,
        0,
        0LL);
    }
    else if ( !VIDMM_GLOBAL::DiscardOfferedAllocation(this, a2) )
    {
      WdLogSingleEntry1(3LL, a2);
      result = 0;
      WdLogGlobalForLineNumber = 27581;
      return result;
    }
  }
  if ( VIDMM_GLOBAL::IsPagingOperationPending(this, a2, 0) )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, a2);
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  if ( *(_WORD *)(*((_QWORD *)a2 + 46) + 8LL) == 3 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 216LL))(v7, v2);
    for ( i = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 14);
          i != (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 112);
          i = *(struct VIDMM_GLOBAL_ALLOC **)i )
    {
      v13 = *((_QWORD *)i - 5);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*(PRKPROCESS *)(v13 + 16), &ApcState);
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct VIDMM_GLOBAL_ALLOC *)((char *)i - 48), 1);
      KeUnstackDetachProcess(&ApcState);
    }
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, a2, 0, v11);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 8LL) + 72LL) + 440LL),
      -*(_QWORD *)(v2 + 16));
  }
  else
  {
    v9 = 0;
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 27668;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 17);
  return v9;
}
