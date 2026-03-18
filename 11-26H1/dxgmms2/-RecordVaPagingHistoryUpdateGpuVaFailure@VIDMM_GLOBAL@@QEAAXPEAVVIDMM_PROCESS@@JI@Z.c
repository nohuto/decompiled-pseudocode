/*
 * XREFs of ?RecordVaPagingHistoryUpdateGpuVaFailure@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@JI@Z @ 0x140099660
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x140107850 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaFailure(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        int a3,
        int a4)
{
  char *v5; // rdi
  char *v9; // rax

  v5 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  v9 = operator new(16, (VIDMM_GLOBAL *)((char *)this + 41168), 0x14u, 0);
  if ( v9 )
  {
    *(_QWORD *)v9 = *((_QWORD *)a2 + 2);
    *((_DWORD *)v9 + 2) = a3;
    *((_DWORD *)v9 + 3) = a4;
  }
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
