/*
 * XREFs of RemoveDmaBufferFromPool @ 0x1400EB6EC
 * Callers:
 *     ?VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z @ 0x1400A4288 (-VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z.c)
 *     VidMmResizeBuffersInPool @ 0x1400A4950 (VidMmResizeBuffersInPool.c)
 *     VidMmAcquireDmaBuffer @ 0x1400EB3D0 (VidMmAcquireDmaBuffer.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1400ECBCC (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400395A0 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x140039814 (-ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x140046B60 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 *     ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14009E6A8 (-FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     WaitDmaBufferNotBusy @ 0x1400EB03C (WaitDmaBufferNotBusy.c)
 */

void __fastcall RemoveDmaBufferFromPool(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rax
  struct _ERESOURCE *v5; // rcx
  _QWORD *v6; // rcx
  void **v7; // rax
  _QWORD *v8; // r8
  VIDMM_PROCESS_ADAPTER_INFO *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(a1);
    *(_QWORD *)(v4 + 24) = a2;
    *(_QWORD *)(v4 + 32) = a1;
    WdLogGlobalForLineNumber = 925;
  }
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0pppxxxp_EtwWriteTransfer(
      a2[11],
      (const EVENT_DESCRIPTOR *)"M",
      a2[9],
      a1[3],
      *(_QWORD *)(*a1 + 24LL),
      a2,
      a2[9],
      a2[10],
      a2[11],
      *((_QWORD *)a2 + 6));
  if ( *((_BYTE *)a2 + 24) )
    WaitDmaBufferNotBusy(a1, (__int64)a2, 0, 0LL);
  v5 = Resource;
  --*((_DWORD *)a1 + 21);
  ExAcquireResourceSharedLite(v5, 1u);
  v6 = *(_QWORD **)a2;
  if ( *(unsigned int **)(*(_QWORD *)a2 + 8LL) != a2 || (v7 = (void **)*((_QWORD *)a2 + 1), *v7 != a2) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  ExReleaseResourceLite(Resource);
  operator delete(*((void **)a2 + 15));
  operator delete(*((void **)a2 + 14));
  operator delete(*((void **)a2 + 13));
  operator delete(*((void **)a2 + 12));
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( (*((_DWORD *)a1 + 9) & 1) != 0 )
      VIDMM_GLOBAL::FreePagingBufferResources((VIDMM_GLOBAL *)*a1, *((struct VIDMM_ALLOC **)a2 + 7));
    VIDMM_GLOBAL::CloseOneAllocation(
      (VIDMM_GLOBAL *)*a1,
      *((struct VIDMM_ALLOC **)a2 + 7),
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
    VIDMM_GLOBAL::DestroyOneAllocation(
      (VIDMM_GLOBAL *)*a1,
      (struct VIDMM_DEVICE *)a1[1],
      *((struct VIDMM_GLOBAL_ALLOC **)a2 + 6),
      0);
  }
  else
  {
    MmFreeContiguousMemorySpecifyCache(*((PVOID *)a2 + 8), a2[9], (MEMORY_CACHING_TYPE)a2[18]);
  }
  if ( *((_DWORD *)a1 + 21) == 2
    && *((_DWORD *)a1 + 11) == *((_DWORD *)a1 + 12)
    && *((_DWORD *)a1 + 14) == *((_DWORD *)a1 + 15)
    && *((_DWORD *)a1 + 17) == *((_DWORD *)a1 + 18) )
  {
    *((_DWORD *)a1 + 9) |= 8u;
  }
  *((_DWORD *)a1 + 30) -= a2[9];
  v8 = (_QWORD *)a1[1];
  *((_DWORD *)a1 + 31) += -24 * a2[10];
  *((_DWORD *)a1 + 32) += -24 * a2[11];
  if ( v8 )
  {
    v9 = *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(v8[1] + 32LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(*v8 + 24LL) + 240LL));
    VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock(v9);
    v10 = *((_QWORD *)v9 + 23);
    v11 = a2[9];
    --*(_DWORD *)v10;
    *(_QWORD *)(v10 + 8) -= v11;
    *(_DWORD *)(*((_QWORD *)v9 + 23) + 16LL) += -24 * a2[10];
    *(_DWORD *)(*((_QWORD *)v9 + 23) + 20LL) += -24 * a2[11];
    VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock(v9);
  }
  _InterlockedAdd64(&qword_14008AA78, -(__int64)a2[9]);
  _InterlockedAdd64(&qword_14008AA48, -24LL * a2[10]);
  _InterlockedAdd64(&qword_14008AA18, -24LL * a2[11]);
  operator delete(a2);
}
