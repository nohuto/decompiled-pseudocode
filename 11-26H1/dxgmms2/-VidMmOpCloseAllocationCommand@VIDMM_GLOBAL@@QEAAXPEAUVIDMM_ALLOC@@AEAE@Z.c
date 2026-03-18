/*
 * XREFs of ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     VidSchCancelDeviceCommand @ 0x14003AFC8 (VidSchCancelDeviceCommand.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14003BFB8 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400D3884 (-CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D3B70 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x1400DCDB8 (-TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400E3CE8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B960 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_A.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010DAD4 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x140119940 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_A.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14011D298 (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14011D3C0 (-TransferAllocationDecommit@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::VidMmOpCloseAllocationCommand(ADAPTER_RENDER **this, struct VIDMM_ALLOC *a2, bool *a3)
{
  struct VIDMM_LOCAL_ALLOC *v3; // r15
  VIDMM_DEVICE *v6; // r14
  __int64 *v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r13
  VIDMM_DEVICE *v10; // rcx
  int v11; // eax
  char v12; // r14
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD **v18; // rdx
  _QWORD *v19; // rcx
  struct VIDMM_ALLOC *v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rcx
  VIDMM_GLOBAL *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-B8h]
  _BYTE v29[32]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v30[10]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v31; // [rsp+E0h] [rbp+8h]

  v3 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 10685;
  }
  v6 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
  v7 = **(__int64 ***)a2;
  v8 = *v7;
  v9 = v7[6];
  v10 = (VIDMM_DEVICE *)((*(_DWORD *)(*v7 + 52) >> 2) & 0x3F);
  v31 = *((_QWORD *)this[5040] + (_QWORD)v10);
  if ( *((_DWORD *)a2 + 26) || *((_DWORD *)a2 + 173) )
  {
    v27 = *((int *)a2 + 26);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 42LL, this, a2, v27);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400D1E50LL);
  }
  if ( (*((_BYTE *)a2 + 25) & 1) != 0 )
    VIDMM_GLOBAL::UnpinOneAllocation(this, a2, 3LL);
  v11 = *((_DWORD *)a2 + 7) & 3;
  if ( v11 == 2 )
  {
    VIDMM_GLOBAL::NotifyAllocationEviction((VIDMM_GLOBAL *)this, a2, 0);
  }
  else if ( v11 == 1 )
  {
    VIDMM_DEVICE::UnfaultCommitment(v10, a2);
  }
  if ( (*((_DWORD *)a2 + 7) & 0x10) != 0 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  else
  {
    VIDMM_DEVICE::CleanupAllocationCommitment(v6, a2);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v7 + 17));
    if ( *(int *)(*((_QWORD *)a2 + 12) + 12LL) <= 0 )
      goto LABEL_11;
  }
  memset(v30, 0, sizeof(v30));
  v22 = *((_QWORD *)v6 + 4);
  LODWORD(v30[5]) = 3;
  v30[6] = a2;
  VidSchCancelDeviceCommand(v22, (__int64)v30, 1, 0);
LABEL_11:
  v12 = 0;
  if ( (*(_DWORD *)v7[46] & 0x20000000) != 0 )
  {
    v17 = *(_QWORD *)a2;
    v18 = (_QWORD **)(*(_QWORD *)a2 + 32LL);
    v19 = *v18;
    while ( v19 != v18 )
    {
      v20 = (struct VIDMM_ALLOC *)(v19 - 5);
      v19 = (_QWORD *)*v19;
      if ( v20 != a2 && (*((_DWORD *)v20 + 7) & 4) == 0 )
        goto LABEL_15;
    }
    if ( v17 != v9 )
    {
      *(_BYTE *)(v17 + 24) |= 1u;
      goto LABEL_15;
    }
    WdLogSingleEntry2(4LL, v7, a2);
    *(_BYTE *)(v9 + 24) |= 1u;
    v21 = (__int64 *)v7[14];
    WdLogGlobalForLineNumber = 10829;
    while ( v21 != v7 + 14 )
    {
      v3 = (struct VIDMM_LOCAL_ALLOC *)(v21 - 6);
      if ( (*(_BYTE *)(v21 - 3) & 1) == 0 )
        goto LABEL_44;
      v21 = (__int64 *)*v21;
    }
    v3 = 0LL;
LABEL_44:
    VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(
      (VIDMM_GLOBAL *)this,
      (struct VIDMM_PHYSICAL_ALLOC *)v8,
      (struct VIDMM_LOCAL_ALLOC *)v9);
    *a3 = !VIDMM_GLOBAL::TransferAllocationOwnership((VIDMM_GLOBAL *)this, a2, (struct VIDMM_LOCAL_ALLOC *)v9, v3);
    if ( (v7[4] & 4) != 0 )
      v3 = (struct VIDMM_LOCAL_ALLOC *)v7[6];
    WdLogSingleEntry1(4LL, v7[6]);
    WdLogGlobalForLineNumber = 10855;
  }
  else
  {
    v13 = (VIDMM_GLOBAL *)a3;
    *a3 = 1;
  }
  v12 = 1;
  if ( (v7[4] & 0x60) == 0x60 )
    VIDMM_GLOBAL::TransferAllocationDecommit(v13, (struct VIDMM_GLOBAL_ALLOC *)v7, (struct VIDMM_LOCAL_ALLOC *)v9, v3);
LABEL_15:
  DXGFASTMUTEX::Release((struct _KTHREAD **)v7 + 17);
  if ( v12 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v29, this + 5031);
    v15 = v7 + 34;
    if ( v7[34] )
    {
      v23 = (VIDMM_GLOBAL *)*((unsigned int *)this[3] + 60);
      VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
        v23,
        (struct VIDMM_GLOBAL_ALLOC *)v7,
        *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 32LL) + 8LL * (_QWORD)v23));
      if ( v3 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 32LL) + 8LL * *((unsigned int *)this[3] + 60));
        v25 = *(_QWORD **)(v24 + 96);
        v26 = v24 + 88;
        if ( *v25 != v26 )
          __fastfail(3u);
        *v15 = v26;
        v7[35] = (__int64)v25;
        *v25 = v15;
        *(_QWORD *)(v26 + 8) = v15;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  }
  if ( *a3 )
  {
    if ( (*(_DWORD *)(v8 + 56) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v14);
        WdLogGlobalForLineNumber = 10936;
      }
      LOBYTE(v28) = 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, __int64))(*(_QWORD *)v31 + 240LL))(
        v31,
        v8,
        0LL,
        0LL,
        v28,
        v9);
      VIDMM_GLOBAL::FlushPagingBufferInternal(
        (VIDMM_GLOBAL *)this,
        (*(_DWORD *)(v8 + 52) >> 2) & 0x3F,
        0,
        0LL,
        0LL,
        0,
        0);
    }
    VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(
      (VIDMM_GLOBAL *)this,
      (struct VIDMM_PHYSICAL_ALLOC *)v8,
      (struct VIDMM_LOCAL_ALLOC *)v9);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v29, this + 5031);
    if ( v7[32] )
      VIDMM_GLOBAL::RemoveAllocationFromOfferList((VIDMM_GLOBAL *)this, (struct VIDMM_GLOBAL_ALLOC *)v7);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  }
  *((_DWORD *)a2 + 7) |= 4u;
  v16 = *((_QWORD *)a2 + 91);
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 32), 0xFFFFFFFF) == 1 )
      ADAPTER_RENDER::NotifyDeferredDestructionComplete(this[2], *((struct DXGTERMINATIONTRACKER **)a2 + 91));
  }
}
