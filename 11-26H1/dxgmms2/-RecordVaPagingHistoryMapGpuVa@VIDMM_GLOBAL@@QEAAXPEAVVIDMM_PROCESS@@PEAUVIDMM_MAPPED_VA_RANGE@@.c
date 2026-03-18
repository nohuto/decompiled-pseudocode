/*
 * XREFs of ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_PAGING_QUEUE@@_K@Z @ 0x140115C54
 * Callers:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_N@Z @ 0x14010EFB0 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_AL.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct VIDMM_PAGING_QUEUE *a4,
        unsigned __int64 a5)
{
  char *v6; // rdi
  char *v10; // rax
  char *v11; // rdx
  __int64 v12; // rax

  v6 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  *((_QWORD *)v6 + 1) = KeGetCurrentThread();
  v10 = operator new(80, (VIDMM_GLOBAL *)((char *)this + 41168), 0xEu, 0);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = *((_QWORD *)a2 + 2);
    *((_QWORD *)v10 + 1) = *((_QWORD *)a2 + 9);
    *((_QWORD *)v10 + 3) = a5;
    *((_QWORD *)v10 + 2) = a4;
    *((_QWORD *)v10 + 4) = *((_QWORD *)a3 + 13);
    *((_QWORD *)v10 + 5) = *((_QWORD *)a3 + 14);
    *((_QWORD *)v10 + 6) = *((_QWORD *)a3 + 8);
    *((_DWORD *)v10 + 14) = *((_DWORD *)a3 + 18) & 0xF;
    *((_QWORD *)v10 + 8) = *((_QWORD *)a3 + 10);
    *((_QWORD *)v10 + 9) = 0LL;
    if ( (*((_DWORD *)a3 + 18) & 0xF) == 1 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)a3 + 8) + 16LL);
      if ( v12 )
        *((_QWORD *)v11 + 9) = *(_QWORD *)(v12 + 32);
    }
  }
  *((_QWORD *)v6 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
}
