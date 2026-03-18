/*
 * XREFs of ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C
 * Callers:
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x14004D400 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x140003320 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1400362C8 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140039708 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     ??1DXGK_LOG@@QEAA@XZ @ 0x14004C9E8 (--1DXGK_LOG@@QEAA@XZ.c)
 *     ?Clear@?$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GCDBGJFG@@@QEAAXXZ @ 0x14004F394 (-Clear@-$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GCDBGJFG@@@QEAAXXZ.c)
 *     ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1400574B8 (-VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x14009B8C0 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009BA24 (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ??1VIDMM_LOCKED_PAGE_HISTORY@@QEAA@XZ @ 0x14009CFBC (--1VIDMM_LOCKED_PAGE_HISTORY@@QEAA@XZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009D6F0 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?FreeForwardProgressMdl@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009E5A0 (-FreeForwardProgressMdl@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400A20FC (-RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidMmTerminateWorkerThread @ 0x1400A85D4 (VidMmTerminateWorkerThread.c)
 *     ?VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400AC26C (-VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400E2318 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400E6870 (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x140104C9C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010B81C (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::~VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // rsi
  unsigned int i; // edi
  struct _VIDSCH_NODE **v4; // rdx
  unsigned int v5; // r9d
  struct _VIDSCH_NODE **v6; // rax
  unsigned int j; // edi
  struct VIDMM_DMA_BUFFER *v8; // rcx
  VIDMM_DMA_POOL *v9; // rcx
  VIDMM_MAPPED_VA_RANGE *v10; // rcx
  struct DXGADAPTER *v11; // rdi
  struct _RTL_BALANCED_NODE *v12; // rax
  _QWORD *Children; // rdi
  unsigned int v14; // eax
  _QWORD *v15; // rsi
  _QWORD **v16; // rcx
  _QWORD *v17; // rax
  _QWORD *k; // rcx
  unsigned int m; // edi
  __int64 v20; // rcx
  struct _PCW_INSTANCE *v21; // rcx
  void *v22; // rcx
  unsigned int v23; // eax
  unsigned int n; // edi
  struct _PCW_INSTANCE *v25; // rcx
  unsigned int v26; // edi
  __int64 v27; // rsi
  void (__fastcall ***v28)(_QWORD, __int64); // rcx
  CVirtualAddressAllocator *v29; // rcx
  PVOID *v30; // rdi
  unsigned int v31; // esi
  __int64 v32; // rcx
  void *v33; // rcx
  _BYTE v34[40]; // [rsp+20h] [rbp-28h] BYREF

  VIDMM_GLOBAL::LogTeardownTelemetry((struct DXGADAPTER **)this);
  if ( *((_QWORD *)this + 5655) )
    VIDMM_GLOBAL::RemoveFromAdapterList(this);
  *((_WORD *)this + 3520) = 257;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = this;
    WdLogGlobalForLineNumber = 875;
  }
  VIDMM_GLOBAL::DoDeferredUnlock(this);
  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
  if ( *(int *)(*(_QWORD *)(v2 + 16) + 3044LL) >= 2500 )
  {
    for ( i = 0; i < *(_DWORD *)(v2 + 88); ++i )
    {
      v4 = *(struct _VIDSCH_NODE ***)(v2 + 696);
      v5 = *(_DWORD *)(v2 + 768);
      v6 = &v4[i];
      if ( i >= v5 )
        v6 = *(struct _VIDSCH_NODE ***)(v2 + 696);
      if ( (*((_DWORD *)*v6 + 3) & 2) != 0 )
      {
        if ( i < v5 )
          v4 += i;
        VidSchiDestroyNodeSchedulingLog(*v4);
      }
    }
  }
  VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
  for ( j = 0; j < *((_DWORD *)this + 1738); ++j )
  {
    v8 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + j + 144);
    if ( v8 )
    {
      VidMmReleaseDmaBuffer(v8, 1);
      *((_QWORD *)this + j + 144) = 0LL;
    }
    v9 = (VIDMM_DMA_POOL *)*((_QWORD *)this + j + 80);
    if ( v9 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v9);
  }
  v10 = (VIDMM_MAPPED_VA_RANGE *)*((_QWORD *)this + 5141);
  if ( v10 )
  {
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v10);
    *((_QWORD *)this + 5141) = 0LL;
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40512));
  if ( *((_BYTE *)this + 41067) )
    VIDMM_PROCESS::CloseAdapter(g_pVidMmSystemProcess, this);
  v11 = *(struct DXGADAPTER **)this;
  *((_QWORD *)this + 5607) = 0LL;
  if ( v11 )
  {
    VidMmTerminateWorkerThread(v11);
    operator delete(v11);
    *(_QWORD *)this = 0LL;
  }
  DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
    (DXGAUTOEXPUSHLOCKSHARED *)v34,
    (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
  v12 = VIDMM_PARTITION::_PartitionTree;
  Children = 0LL;
  while ( v12 )
  {
    Children = v12->Children;
    v12 = v12->Children[0];
  }
  while ( Children )
  {
    v14 = VIDMM_GLOBAL::AdapterId(this);
    v15 = (_QWORD *)(Children[5] + 384LL * v14);
    if ( v15[1] )
    {
      VidMmiClosePerfCounters((struct VIDMM_PARTITION_ADAPTER_INFO *)(Children[5] + 384LL * v14));
      NonPagedPoolZeroedArray<VIDMM_SEGMENT_GROUP_STATE,1,1647405398>::Clear((__int64)(v15 + 3));
      v15[1] = 0LL;
      *v15 = 0LL;
    }
    v16 = (_QWORD **)Children[1];
    v17 = Children;
    if ( v16 )
    {
      Children = (_QWORD *)Children[1];
      for ( k = *v16; k; k = (_QWORD *)*k )
        Children = k;
    }
    else
    {
      while ( 1 )
      {
        Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !Children || (_QWORD *)*Children == v17 )
          break;
        v17 = Children;
      }
    }
  }
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v34);
  for ( m = 0; m < *((_DWORD *)this + 1738); ++m )
  {
    v20 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * m);
    if ( (*(_BYTE *)(v20 + 632) & 1) == 0 )
    {
      v21 = *(struct _PCW_INSTANCE **)(v20 + 1000);
      if ( v21 )
        PcwCloseInstance(v21);
    }
  }
  v22 = (void *)*((_QWORD *)this + 979);
  if ( v22 )
  {
    operator delete(v22);
    *((_OWORD *)this + 489) = 0LL;
    *((_QWORD *)this + 980) = 0LL;
  }
  operator delete(*((void **)this + 5150));
  v23 = *((_DWORD *)this + 1738);
  for ( n = 0; n < v23; ++n )
  {
    v25 = *(struct _PCW_INSTANCE **)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * n) + 1744LL);
    if ( v25 )
      PcwCloseInstance(v25);
    v23 = *((_DWORD *)this + 1738);
  }
  if ( *((_QWORD *)this + 5040) )
  {
    v26 = 0;
    if ( v23 )
    {
      do
      {
        v27 = v26;
        v28 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 5040) + 8LL * v26);
        if ( v28 )
          (**v28)(v28, 1LL);
        ++v26;
        *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v27) = 0LL;
      }
      while ( v26 < *((_DWORD *)this + 1738) );
    }
    operator delete(*((void **)this + 5040));
    *((_QWORD *)this + 5040) = 0LL;
  }
  v29 = (CVirtualAddressAllocator *)*((_QWORD *)this + 5615);
  if ( v29 )
    CVirtualAddressAllocator::DestroyVaAllocator(v29);
  VIDMM_GLOBAL::FreeForwardProgressMdl(this);
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40384));
  v30 = (PVOID *)((char *)this + 44672);
  if ( *((_QWORD *)this + 5584) )
  {
    v31 = 0;
    if ( *((_DWORD *)this + 11164) )
    {
      do
      {
        v32 = *((_QWORD *)*v30 + v31);
        if ( v32 )
        {
          if ( (*(_BYTE *)(v32 + 10) & 2) != 0 )
            MmUnlockPages((PMDL)v32);
          ExFreePoolWithTag(*((PVOID *)*v30 + v31), 0);
        }
        ++v31;
      }
      while ( v31 < *((_DWORD *)this + 11164) );
      v30 = (PVOID *)((char *)this + 44672);
    }
    ExFreePoolWithTag(*v30, 0);
  }
  v33 = (void *)*((_QWORD *)this + 5577);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  VIDMM_LOCKED_PAGE_HISTORY::~VIDMM_LOCKED_PAGE_HISTORY((VIDMM_GLOBAL *)((char *)this + 45256));
  DXGK_LOG::~DXGK_LOG((void **)this + 5146);
}
