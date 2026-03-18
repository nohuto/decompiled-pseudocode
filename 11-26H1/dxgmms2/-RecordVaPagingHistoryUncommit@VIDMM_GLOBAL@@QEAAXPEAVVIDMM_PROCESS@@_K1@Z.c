/*
 * XREFs of ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x140113070
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rdi
  char *v9; // rax

  v5 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  v9 = operator new(32, (VIDMM_GLOBAL *)((char *)this + 41168), 2u, 0);
  if ( v9 )
  {
    *(_QWORD *)v9 = *((_QWORD *)a2 + 2);
    *((_QWORD *)v9 + 1) = *((_QWORD *)a2 + 9);
    *((_QWORD *)v9 + 2) = a3;
    *((_QWORD *)v9 + 3) = a4;
  }
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
