/*
 * XREFs of ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0378
 * Callers:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0274 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_D.c)
 * Callees:
 *     ?MemoryTransferPhysical@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0514 (-MemoryTransferPhysical@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAME.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A09F4 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@21U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A0BA8 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFE.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_TRANSFER_PARAMETER *a6,
        struct VIDMM_TRANSFER_PARAMETER *a7,
        struct _DXGK_TRANSFERFLAGS a8)
{
  if ( *(char *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * a2) + 556LL) >= 0 )
  {
    VIDMM_GLOBAL::MemoryTransferPhysical(this, a2, a3, a4, a5, a6, a7, a8);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)a3 + 192, 0LL);
    if ( *((struct VIDMM_GLOBAL_ALLOC **)a3 + 12) == (struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 96) )
    {
      ExReleasePushLockExclusiveEx((char *)a3 + 192, 0LL);
      KeLeaveCriticalRegion();
      VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(this, a2, a3, a4, a5, a6, a7, 0LL, a8, 0LL);
    }
    else
    {
      VIDMM_GLOBAL::MemoryTransferUsingGpuVa(this, a2, a3, a4, a5, a6, a7, a8);
      ExReleasePushLockExclusiveEx((char *)a3 + 192, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
