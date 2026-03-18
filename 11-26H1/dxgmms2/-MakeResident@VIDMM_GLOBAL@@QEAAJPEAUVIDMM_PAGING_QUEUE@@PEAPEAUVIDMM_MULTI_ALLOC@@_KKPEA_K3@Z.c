/*
 * XREFs of ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400E4D38
 * Callers:
 *     VidMmMakeResident @ 0x1400397A0 (VidMmMakeResident.c)
 *     ?OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A5A70 (-OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140030174 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003797C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400E4CD8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1400E52E8 (-RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400E5588 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E5664 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitProjectedMemoryUsage@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E56D8 (-CommitProjectedMemoryUsage@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E573C (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MakeResident(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_MULTI_ALLOC **a3,
        __int64 a4,
        char a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  __int64 v9; // rsi
  __int64 v10; // rcx
  bool v11; // zf
  struct _KTHREAD **v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // r9d
  _QWORD *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  VIDMM_ALLOC **v22; // r9
  struct VIDMM_MULTI_ALLOC **v23; // r10
  __int64 v24; // rcx
  __int64 **v25; // r8
  __int64 v26; // r11
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  struct VIDMM_MULTI_ALLOC **v30; // rcx
  struct VIDMM_MULTI_ALLOC *v31; // rax
  VIDMM_ALLOC **v32; // r10
  __int64 *v33; // rbx
  __int64 v34; // r14
  __int64 **v35; // r8
  __int64 v36; // r9
  __int64 v37; // r10
  VIDMM_ALLOC **v38; // r11
  _QWORD *v39; // rax
  __int64 *v40; // rdx
  __int64 *v41; // rcx
  __int64 *v42; // rdx
  __int64 v43; // rcx
  struct VIDMM_MULTI_ALLOC **v44; // r14
  unsigned int v45; // esi
  int *v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // r8
  DXGPUSHLOCK *v50; // rcx
  __int64 v51; // rcx
  struct VIDMM_GLOBAL_ALLOC **v52; // rax
  unsigned __int64 *v53; // [rsp+28h] [rbp-A1h]
  _BYTE v54[8]; // [rsp+58h] [rbp-71h] BYREF
  DXGPUSHLOCK *v55; // [rsp+60h] [rbp-69h]
  int v56; // [rsp+68h] [rbp-61h]
  _QWORD v57[18]; // [rsp+78h] [rbp-51h] BYREF

  *a6 = 0LL;
  *a7 = 0LL;
  v9 = *((_QWORD *)a2 + 12);
  v10 = *(_QWORD *)(v9 + 16);
  v11 = v10 == -144;
  v12 = (struct _KTHREAD **)(v10 + 144);
  v55 = (DXGPUSHLOCK *)v12;
  if ( !v11 && v12[1] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    HIDWORD(v53) = 0;
    DxgkLogInternalTriageEvent(v13, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v55, 0LL) )
  {
    DXGPUSHLOCK::LogEvent(v55, v14, v15);
    ExAcquirePushLockExclusiveEx(v55, 0LL);
  }
  v16 = 0;
  *((_QWORD *)v55 + 1) = KeGetCurrentThread();
  v17 = *(_QWORD **)(v9 + 16);
  v56 = 2;
  if ( *(_DWORD *)(*v17 + 6952LL) )
  {
    do
    {
      v18 = v17[1];
      v19 = (unsigned __int16)v16++;
      v20 = 304 * v19;
      *(_QWORD *)(v20 + v18 + 112) = *(_QWORD *)(304 * v19 + v18 + 80);
      *(_QWORD *)(v20 + v18 + 120) = *(_QWORD *)(304 * v19 + v18 + 88);
      *(_QWORD *)(v20 + v18 + 128) = *(_QWORD *)(304 * v19 + v18 + 96);
      *(_QWORD *)(v20 + v18 + 136) = *(_QWORD *)(304 * v19 + v18 + 104);
    }
    while ( v16 < *(_DWORD *)(*v17 + 6952LL) );
  }
  v21 = a4;
  v22 = a3;
  v23 = &a3[a4];
  if ( a3 != v23 )
  {
    do
    {
      v24 = **(_QWORD **)*v22;
      if ( ((*(_DWORD *)(v24 + 24) & 1) == 0
         || *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v22 + 1) + 8LL) + 336LL) == **(_QWORD **)(v24 + 328))
        && !VIDMM_ALLOC::HasAnyResidencyReferences(*v22)
        && !*((_BYTE *)v25 + 27) )
      {
        v28 = **v25;
        if ( (*((_BYTE *)v25 + 36) & 1) != 0 && (*(_DWORD *)(v28 + 24) & 0xF000) == 0x2000 )
          v29 = 0;
        else
          v29 = (unsigned __int8)HIBYTE(*(_WORD *)(v28 + 24)) >> 4;
        v27 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 8LL) + 304LL * ((*(_DWORD *)(v26 + 52) >> 2) & 0x3F);
        *(_QWORD *)(v27 + 8LL * v29 + 112) += *(_QWORD *)(v26 + 16);
        *((_BYTE *)v25 + 27) = 1;
      }
      ++v22;
    }
    while ( v22 != v23 );
    v21 = a4;
  }
  VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*(VIDMM_PROCESS_ADAPTER_INFO **)(v9 + 16), a7, a5 & 1, 0);
  v30 = a3;
  if ( a3 != &a3[v21] )
  {
    do
    {
      v31 = *v30++;
      *((_BYTE *)v31 + 27) = 0;
    }
    while ( v30 != &a3[v21] );
    v21 = a4;
  }
  if ( !*a7 )
  {
    VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v9 + 16));
    v32 = a3;
    if ( a3 != &a3[v21] )
    {
      do
      {
        v33 = **(__int64 ***)*v32;
        v34 = *v33;
        if ( !VIDMM_ALLOC::HasAnyResidencyReferences(*v32) )
        {
          v39 = v35 + 79;
          v40 = v35[79];
          if ( (__int64 **)v40[1] != v35 + 79
            || (v41 = v35[80], (_QWORD *)*v41 != v39)
            || (*v41 = (__int64)v40, v40[1] = (__int64)v41, v42 = *(__int64 **)(v9 + 160), *v42 != v9 + 152) )
          {
            __fastfail(3u);
          }
          *v39 = v9 + 152;
          v35[80] = v42;
          *v42 = (__int64)v39;
          *(_QWORD *)(v9 + 160) = v39;
          v51 = **v35;
          if ( (*(_DWORD *)(v51 + 24) & 1) == 0 || *(_QWORD *)(v35[1][1] + 336) == **(_QWORD **)(v51 + 328) )
          {
            v43 = (*((_DWORD *)v33 + 6) >> 8) & 0xF;
            *(_QWORD *)(v36 + 8 * v43 + 144) += *(_QWORD *)(v34 + 16);
          }
        }
        v32 = (VIDMM_ALLOC **)(v37 + 8);
        ++*((_DWORD *)v35 + 172);
      }
      while ( v32 != v38 );
    }
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v9 + 16));
    VIDMM_PROCESS_ADAPTER_INFO::CommitProjectedMemoryUsage(*(VIDMM_PROCESS_ADAPTER_INFO **)(v9 + 16));
    if ( v56 == 1 )
    {
      v56 = 0;
      _InterlockedDecrement((volatile signed __int32 *)v55 + 4);
      ExReleasePushLockSharedEx(v55, 0LL);
    }
    else
    {
      if ( v56 != 2 )
        goto LABEL_33;
      v50 = v55;
      v56 = 0;
      *((_QWORD *)v55 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v50, 0LL);
    }
    KeLeaveCriticalRegion();
LABEL_33:
    v44 = &a3[a4];
    v45 = 0;
    while ( a3 != v44 )
    {
      v46 = (int *)*a3;
      if ( *((int *)*a3 + 175) > 0
        || (v46[7] & 3) != 2
        || *((_DWORD *)this + 2) == 206 && *((int **)this + 871) == v46
        || VIDMM_GLOBAL::IsPagingOperationPending(this, **(struct VIDMM_GLOBAL_ALLOC ***)v46, 1u) )
      {
        if ( (*((_DWORD *)a2 + 28) & 1) != 0 )
        {
          memset(v57, 0, 0x58uLL);
          v52 = *(struct VIDMM_GLOBAL_ALLOC ***)v46;
          LODWORD(v57[0]) = 206;
          v57[2] = v46;
          v57[5] = *v52;
          v45 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v57, 1);
        }
        else
        {
          memset(v57, 0, 0x58uLL);
          LODWORD(v57[0]) = 206;
          v57[2] = v46;
          v57[4] = 0LL;
          v45 = VIDMM_GLOBAL::QueueDeferredCommand(
                  this,
                  a2,
                  (struct _VIDMM_DEFERRED_COMMAND *)v57,
                  dword_14008A4FC == 0,
                  a6);
          if ( (v46[7] & 0x20) != 0 && v45 == 259 )
          {
            *((_QWORD *)v46 + 97) = a2;
            *((_QWORD *)v46 + 100) = *a6;
          }
        }
      }
      if ( (byte_14008A201 & 0x20) != 0 )
      {
        LODWORD(v53) = v46[172];
        McTemplateK0pq_EtwWriteTransfer(v47, &EventVidMmMakeResident, v48, v46, v53);
      }
      ++a3;
      VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(this, a2, (struct VIDMM_ALLOC *)v46, v45 == 259, *a6);
    }
    return v45;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
  if ( (a5 & 2) != 0 )
    VidSchMarkDeviceAsError(*(_QWORD *)(v9 + 32), 12);
  return 3221225495LL;
}
