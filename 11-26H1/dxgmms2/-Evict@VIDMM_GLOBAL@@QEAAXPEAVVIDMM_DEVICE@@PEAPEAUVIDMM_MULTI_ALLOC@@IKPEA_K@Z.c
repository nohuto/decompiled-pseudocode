/*
 * XREFs of ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400E591C
 * Callers:
 *     VidMmEvict @ 0x14003C840 (VidMmEvict.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1400A2D54 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PE.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003797C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400E4BE4 (-VidMmGetNewPagingQueuePacket@@YAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAUVIDMM_WORKER_THREAD@@PEAUVID.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400E5588 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E5664 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E573C (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ValidateAllocationReferences @ 0x1400E5810 (ValidateAllocationReferences.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400E6BC0 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::Evict(
        struct VIDMM_WORKER_THREAD **this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_ALLOC **a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rbx
  DXGPUSHLOCK *v9; // r14
  __int64 v10; // rcx
  struct VIDMM_MULTI_ALLOC **v11; // r12
  struct VIDMM_MULTI_ALLOC **v12; // r15
  VIDMM_ALLOC *v13; // rbx
  __int64 v14; // rcx
  __int64 *v15; // r10
  int v16; // r8d
  __int64 v17; // r11
  __int64 v18; // r9
  unsigned int v19; // r8d
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  struct VIDMM_MULTI_ALLOC *v26; // rdi
  __int64 **v27; // rax
  __int64 *v28; // r14
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // r8
  char v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r13
  struct VIDMM_WORKER_THREAD *v37; // r12
  struct VIDMM_PAGING_QUEUE_PACKET *v38; // r15
  struct VIDMM_PAGING_QUEUE_PACKET *NewPagingQueuePacket; // rbx
  __int64 v40; // rax
  struct _VIDSCH_SYNC_OBJECT *j; // r15
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  struct VIDMM_WORKER_THREAD *v46; // rcx
  struct VIDMM_DEVICE *v47; // rax
  VIDMM_ALLOC **v48; // rdx
  struct VIDMM_DEVICE **v49; // rcx
  struct VIDMM_DEVICE **v50; // rdx
  __int64 *v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 *v55; // [rsp+20h] [rbp-A9h]
  struct _VIDSCH_SYNC_OBJECT *v56; // [rsp+50h] [rbp-79h] BYREF
  unsigned __int64 v57; // [rsp+58h] [rbp-71h] BYREF
  struct VIDMM_MULTI_ALLOC **i; // [rsp+60h] [rbp-69h]
  struct _VIDSCH_SYNC_OBJECT *v59[21]; // [rsp+68h] [rbp-61h] BYREF
  int v61; // [rsp+128h] [rbp+5Fh] BYREF
  unsigned int v62; // [rsp+130h] [rbp+67h]

  v6 = a4;
  v9 = (DXGPUSHLOCK *)(*((_QWORD *)a2 + 2) + 144LL);
  if ( *((_QWORD *)a2 + 2) != -144LL && *(struct _KTHREAD **)(*((_QWORD *)a2 + 2) + 152LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    HIDWORD(v55) = 0;
    DxgkLogInternalTriageEvent(v10, 262146LL);
  }
  DXGPUSHLOCK::AcquireExclusive(v9);
  VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)a2 + 2));
  v11 = &a3[v6];
  v12 = a3;
  for ( i = v11; v12 != v11; ++v12 )
  {
    v13 = *v12;
    if ( *((_DWORD *)*v12 + 172) == ((*(_DWORD *)(**(_QWORD **)*v12 + 24LL) >> 25) & 1) )
    {
      WdLogSingleEntry2(1LL, *v12, (*(_DWORD *)(**(_QWORD **)v13 + 24LL) >> 25) & 1);
      v51 = *(__int64 **)v13;
      WdLogGlobalForLineNumber = 2079;
      HIDWORD(v55) = HIDWORD(v13);
      DxgkLogInternalTriageEvent(*v51, 0x40000LL);
    }
    else
    {
      v14 = (__int64)*v12;
      --*((_DWORD *)v13 + 172);
      ValidateAllocationReferences(v14);
      if ( !VIDMM_ALLOC::HasAnyResidencyReferences(v13) )
      {
        v15 = **(__int64 ***)v13;
        v16 = *((_DWORD *)v15 + 6);
        if ( (v16 & 1) == 0 || *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 8LL) + 336LL) == *(_QWORD *)v15[41] )
        {
          v17 = *v15;
          v18 = 304LL * ((*(_DWORD *)(*v15 + 52) >> 2) & 0x3F) + *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL) + 8LL;
          if ( (*((_BYTE *)v13 + 36) & 1) != 0 && (v15[3] & 0xF000) == 0x2000 )
            v19 = 0;
          else
            v19 = (unsigned __int16)v16 >> 12;
          v20 = *(_QWORD *)(v17 + 16);
          v21 = *(_QWORD *)(v18 + 8LL * v19 + 72);
          if ( v20 > v21 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 68LL, v18, v21, v20);
            WdLogGlobalForLineNumber = 213;
            break;
          }
          *(_QWORD *)(v18 + 8LL * v19 + 72) = v21 - v20;
          v52 = *(_QWORD *)(v17 + 16);
          v53 = (*((_DWORD *)v15 + 6) >> 8) & 0xF;
          v54 = *(_QWORD *)(v18 + 8 * v53 + 136);
          if ( v52 > v54 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            v53 = WdLogSingleEntry5(0LL, 270LL, 68LL, v18, v54, v52);
            WdLogGlobalForLineNumber = 213;
          }
          *(_QWORD *)(v18 + 8 * v53 + 136) = v54 - v52;
        }
        v47 = (VIDMM_ALLOC *)((char *)v13 + 632);
        v48 = (VIDMM_ALLOC **)*((_QWORD *)v13 + 79);
        if ( v48[1] != (VIDMM_ALLOC *)((char *)v13 + 632)
          || (v49 = (struct VIDMM_DEVICE **)*((_QWORD *)v13 + 80), *v49 != v47)
          || (*v49 = (struct VIDMM_DEVICE *)v48,
              v48[1] = (VIDMM_ALLOC *)v49,
              v50 = (struct VIDMM_DEVICE **)*((_QWORD *)a2 + 22),
              *v50 != (struct VIDMM_DEVICE *)((char *)a2 + 168)) )
        {
LABEL_44:
          __fastfail(3u);
        }
        *(_QWORD *)v47 = (char *)a2 + 168;
        *((_QWORD *)v13 + 80) = v50;
        *v50 = v47;
        *((_QWORD *)a2 + 22) = v47;
      }
    }
  }
  VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*((VIDMM_PROCESS_ADAPTER_INFO **)a2 + 2), a6, 0, 1u);
  VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)a2 + 2), v22, v23);
  *((_QWORD *)v9 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( a3 != v11 )
  {
    v24 = a5;
    v25 = a5 & 2;
    v62 = v25;
    while ( 1 )
    {
      v26 = *a3;
      v27 = *(__int64 ***)*a3;
      v28 = *v27;
      v29 = **v27;
      if ( v25 )
      {
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v28 + 17));
        *((_BYTE *)v28 + 43) = 1;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v28 + 17);
        v24 = a5;
      }
      if ( !VIDMM_ALLOC::HasAnyResidencyReferences(v26) && !*((_DWORD *)v26 + 173) )
        break;
LABEL_34:
      if ( (byte_14008A201 & 0x20) != 0 )
      {
        LODWORD(v55) = *((_DWORD *)v26 + 172);
        McTemplateK0pq_EtwWriteTransfer(v30, &EventVidMmEvict, v31, v26, v55);
      }
      if ( ++a3 == v11 )
        return;
      v25 = v62;
      v24 = a5;
    }
    _InterlockedIncrement((volatile signed __int32 *)v26 + 175);
    memset(&v59[1], 0, 0x58uLL);
    v32 = (_QWORD *)((char *)v26 + 8);
    LODWORD(v59[1]) = 207;
    v59[3] = v26;
    LODWORD(v59[5]) = v24;
    if ( dword_14008A5D4 || (v33 = 0, (*(_DWORD *)(*(_QWORD *)(*v32 + 8LL) + 152LL) & 1) != 0) )
      v33 = 1;
    v34 = *v32;
    v35 = (*(_DWORD *)(v29 + 52) >> 2) & 0x3F;
    v61 = 0;
    v36 = *(_QWORD *)(32 * v35 + *(_QWORD *)(v34 + 80));
    v56 = *(struct _VIDSCH_SYNC_OBJECT **)(v36 + 88);
    v37 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v37 + 184, 0LL);
    v38 = (struct VIDMM_PAGING_QUEUE_PACKET *)(v36 + 16);
    *((_QWORD *)v37 + 24) = KeGetCurrentThread();
    v57 = *(_QWORD *)(v36 + 72);
    *(_QWORD *)(v36 + 72) = v57 + 1;
    NewPagingQueuePacket = *(struct VIDMM_PAGING_QUEUE_PACKET **)(v36 + 16);
    if ( *((_QWORD *)NewPagingQueuePacket + 1) != v36 + 16 )
      goto LABEL_44;
    v40 = *(_QWORD *)NewPagingQueuePacket;
    if ( *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)NewPagingQueuePacket + 8LL) != NewPagingQueuePacket )
      goto LABEL_44;
    *(_QWORD *)v38 = v40;
    *(_QWORD *)(v40 + 8) = v38;
    *((_QWORD *)v37 + 24) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v37 + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( NewPagingQueuePacket == v38 )
    {
      NewPagingQueuePacket = (struct VIDMM_PAGING_QUEUE_PACKET *)operator new(160LL, 0x38346956u, 256LL);
      if ( !NewPagingQueuePacket )
      {
LABEL_26:
        if ( !v59[2] )
          v59[2] = *((struct _VIDSCH_SYNC_OBJECT **)v26 + 1);
        for ( j = v56;
              !NewPagingQueuePacket;
              NewPagingQueuePacket = VidMmGetNewPagingQueuePacket(*this, (struct VIDMM_PAGING_QUEUE *)v36) )
        {
          v57 = *(_QWORD *)(v36 + 64);
          v56 = j;
          VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v56, &v57, 1u, 0LL, 0LL);
        }
        v42 = *(_OWORD *)&v59[3];
        *((_OWORD *)NewPagingQueuePacket + 3) = *(_OWORD *)&v59[1];
        *((_WORD *)NewPagingQueuePacket + 12) = 257;
        v43 = *(_OWORD *)&v59[5];
        *((_OWORD *)NewPagingQueuePacket + 4) = v42;
        v44 = *(_OWORD *)&v59[7];
        *((_OWORD *)NewPagingQueuePacket + 5) = v43;
        v45 = *(_OWORD *)&v59[9];
        *((_OWORD *)NewPagingQueuePacket + 6) = v44;
        *(struct _VIDSCH_SYNC_OBJECT **)&v44 = v59[11];
        *((_OWORD *)NewPagingQueuePacket + 7) = v45;
        *((_QWORD *)NewPagingQueuePacket + 16) = v44;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 96) + 8LL) + 152LL) & 0x100) != 0 )
        {
          v33 = 1;
        }
        else if ( !v33 )
        {
LABEL_31:
          v46 = *this;
          v56 = 0LL;
          VidMmAppendReadyPacket(v46, (struct VIDMM_PAGING_QUEUE *)v36, NewPagingQueuePacket, (unsigned __int64 *)&v56);
          if ( v33 )
          {
            v57 = (unsigned __int64)v56;
            v59[0] = j;
            VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, v59, &v57, 1u, 0LL, 0LL);
          }
          v11 = i;
          goto LABEL_34;
        }
        *((_QWORD *)NewPagingQueuePacket + 9) = &v61;
        goto LABEL_31;
      }
    }
    else
    {
      memset(NewPagingQueuePacket, 0, 0xA0uLL);
    }
    *((_QWORD *)NewPagingQueuePacket + 5) = v57;
    goto LABEL_26;
  }
}
