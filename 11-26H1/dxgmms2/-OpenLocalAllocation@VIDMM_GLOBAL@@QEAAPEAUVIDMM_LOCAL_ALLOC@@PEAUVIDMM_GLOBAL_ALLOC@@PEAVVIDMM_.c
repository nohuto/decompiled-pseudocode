/*
 * XREFs of ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@_N@Z @ 0x140127C48
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IterateAllPhysicalMemoryRangesEx@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3I@Z @ 0x14003D744 (-IterateAllPhysicalMemoryRangesEx@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEA.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400DD220 (-VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F4F2C (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400F5BF0 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14011D3C0 (-TransferAllocationDecommit@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@.c)
 */

struct VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::OpenLocalAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS *a3,
        char a4)
{
  __int64 v4; // r13
  struct VIDMM_PROCESS *v6; // rsi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  struct VIDMM_GLOBAL_ALLOC *v12; // rdx
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  char v17; // cl
  char v18; // cl
  __int64 v19; // r15
  _QWORD *v20; // rax
  char *v21; // rdi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  v4 = *(_QWORD *)a2;
  v6 = a3;
  if ( !a3 )
    v6 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5064);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 12695;
  }
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    v10 = 12706;
LABEL_7:
    v11 = 0x40000LL;
LABEL_53:
    WdLogGlobalForLineNumber = v10;
    DxgkLogInternalTriageEvent(v9, v11);
    return 0LL;
  }
  v12 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 14);
  if ( v12 != (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 112) && (**((_DWORD **)a2 + 46) & 0x20000000) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v10 = 12716;
    goto LABEL_7;
  }
  v13 = (VIDMM_GLOBAL *)(**((_DWORD **)a2 + 46) & 0x20000010);
  if ( (_DWORD)v13 == 536870928 )
  {
    v14 = *((_QWORD *)a2 + 6);
    if ( v14 )
    {
      if ( *(struct VIDMM_PROCESS **)(v14 + 8) != v6 )
      {
        if ( v6 != *((struct VIDMM_PROCESS **)this + 5064) )
        {
          WdLogSingleEntry0(1LL);
          v10 = 12735;
          goto LABEL_7;
        }
        return 0LL;
      }
    }
  }
  if ( (*((_DWORD *)v6 + 38) & 0x20) != 0 )
  {
LABEL_17:
    v15 = operator new(80LL, 0x32306956u, 256LL);
    v16 = v15;
    if ( !v15 )
    {
      _InterlockedIncrement(&dword_14008A6F0);
      WdLogSingleEntry0(6LL);
      v10 = 12818;
      v11 = 262145LL;
      goto LABEL_53;
    }
    v17 = *(_BYTE *)(v15 + 24);
    *(_QWORD *)v15 = a2;
    *(_QWORD *)(v15 + 8) = v6;
    v18 = (8 * a4) | v17 & 0xF7;
    v19 = v15 + 48;
    *(_BYTE *)(v15 + 24) = v18;
    v20 = (_QWORD *)(v15 + 32);
    v20[1] = v20;
    *v20 = v20;
    ++*((_DWORD *)a2 + 32);
    v13 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 15);
    if ( *(struct VIDMM_GLOBAL_ALLOC **)v13 != (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 112) )
      goto LABEL_51;
    *(_QWORD *)v19 = (char *)a2 + 112;
    v21 = (char *)v16;
    *(_QWORD *)(v16 + 56) = v13;
    *(_QWORD *)v13 = v19;
    *((_QWORD *)a2 + 15) = v19;
    if ( (*((_DWORD *)a2 + 8) & 0x20) != 0
      && (int)VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct VIDMM_LOCAL_ALLOC *)v16) < 0 )
    {
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct VIDMM_LOCAL_ALLOC *)v16, 1);
      --*((_DWORD *)a2 + 32);
      v22 = *(_QWORD *)v19;
      if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) == v19 )
      {
        v23 = *(_QWORD **)(v16 + 56);
        if ( *v23 == v19 )
        {
          *v23 = v22;
          *(_QWORD *)(v22 + 8) = v23;
          operator delete((void *)v16);
          return 0LL;
        }
      }
LABEL_51:
      __fastfail(3u);
    }
  }
  else
  {
    while ( 1 )
    {
      if ( v12 == (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 112) )
        goto LABEL_17;
      v21 = (char *)v12 - 48;
      if ( *((struct VIDMM_PROCESS **)v12 - 5) == v6 )
        break;
      v12 = *(struct VIDMM_GLOBAL_ALLOC **)v12;
    }
    v24 = v21[24];
    if ( (v24 & 1) != 0 )
    {
      v21[24] = v24 & 0xFE;
      WdLogSingleEntry1(4LL, (char *)v12 - 48);
      v25 = *((_QWORD *)a2 + 6);
      WdLogGlobalForLineNumber = 12770;
      if ( !v25 || (*(_BYTE *)(v25 + 24) & 1) != 0 )
      {
        *((_QWORD *)a2 + 6) = v21;
        if ( (*(_DWORD *)(v4 + 56) & 1) != 0 )
          VidMmRecordAlloc(
            *(__int64 **)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v4 + 52) >> 2) & 0x3F)),
            v4,
            *((_QWORD *)v21 + 1),
            0);
      }
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = v21;
      WdLogGlobalForLineNumber = 12795;
    }
  }
  ++*((_DWORD *)v21 + 7);
  if ( (**((_DWORD **)a2 + 46) & 0x20000000) != 0 )
  {
    v26 = *((_QWORD *)a2 + 6);
    if ( v26 && (*((_DWORD *)a2 + 8) & 4) == 0 )
      goto LABEL_48;
    if ( (*((_BYTE *)a2 + 32) & 0x60) == 0x60 )
    {
      VIDMM_GLOBAL::TransferAllocationDecommit(
        v13,
        a2,
        (struct VIDMM_LOCAL_ALLOC *)v26,
        (struct VIDMM_LOCAL_ALLOC *)v21);
      v26 = *((_QWORD *)a2 + 6);
    }
    if ( (*((_DWORD *)a2 + 8) & 4) != 0 && (*(_DWORD *)(v4 + 56) & 1) != 0 )
    {
      VidMmRecordAlloc(
        *(__int64 **)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v4 + 52) >> 2) & 0x3F)),
        v4,
        *(_QWORD *)(v26 + 8),
        1);
      VidMmRecordAlloc(
        *(__int64 **)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v4 + 52) >> 2) & 0x3F)),
        v4,
        *((_QWORD *)v21 + 1),
        0);
    }
    *((_QWORD *)v21 + 1) = v6;
    if ( *((_QWORD *)a2 + 6) )
    {
      *(_QWORD *)v21 = a2;
      v27 = *((_QWORD *)a2 + 6);
      if ( (*(_BYTE *)(v27 + 24) & 1) == 0 )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v27 + 8) + 16LL), &ApcState);
        VIDMM_GLOBAL::CloseOneAllocation(
          this,
          (struct VIDMM_ALLOC *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 32LL) - 40LL),
          0LL,
          0,
          0,
          0LL);
        KeUnstackDetachProcess(&ApcState);
      }
    }
    *((_DWORD *)a2 + 8) &= ~4u;
  }
  *((_QWORD *)a2 + 6) = v21;
LABEL_48:
  if ( *((_DWORD *)a2 + 18) )
  {
    v28 = (unsigned __int8)*(_DWORD *)(v4 + 52) >> 2;
    VIDMM_PHYSICAL_ADAPTER::IterateAllPhysicalMemoryRangesEx(
      *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5040) + 8 * v28),
      (struct VIDMM_PHYSICAL_ALLOC *)v4,
      (int (*)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *))AddResidencyPerfCountersCB,
      (void *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 4) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                         + 8LL)
             + 304 * v28
             + 8),
      0);
  }
  return (struct VIDMM_LOCAL_ALLOC *)v21;
}
