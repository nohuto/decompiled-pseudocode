/*
 * XREFs of ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011BC74
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@21U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A0BA8 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFE.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct VIDMM_GLOBAL_ALLOC *a3)
{
  char *v4; // rbp
  char *v7; // rax
  char *v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // rax

  v4 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v7 = operator new(88, (VIDMM_GLOBAL *)((char *)this + 41168), 7u, 0);
  v8 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = *(_OWORD *)&a2->Transfer.hAllocation;
    *((_OWORD *)v7 + 1) = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
    *((_OWORD *)v7 + 2) = *(_OWORD *)&a2->Reserved.Reserved[8];
    v9 = *(_OWORD *)&a2->Reserved.Reserved[12];
    *((_QWORD *)v7 + 9) = a3;
    *((_OWORD *)v7 + 3) = v9;
    if ( a3 )
      v10 = *(_QWORD *)(*((_QWORD *)a3 + 46) + 48LL);
    else
      v10 = 0LL;
    *((_QWORD *)v8 + 10) = v10;
    *((_DWORD *)v8 + 16) = (*(_DWORD *)(*(_QWORD *)a3 + 52LL) >> 2) & 0x3F;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
