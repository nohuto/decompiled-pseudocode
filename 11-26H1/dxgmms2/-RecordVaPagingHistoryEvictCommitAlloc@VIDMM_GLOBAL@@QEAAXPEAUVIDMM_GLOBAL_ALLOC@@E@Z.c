/*
 * XREFs of ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1401119B4
 * Callers:
 *     EvictResources @ 0x1401172F8 (EvictResources.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A3F0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A910 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  char *v4; // rsi
  char *v7; // rax
  char *v8; // rcx
  __int64 v9; // rax
  int v10; // edx

  v4 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v7 = operator new(32, (VIDMM_GLOBAL *)((char *)this + 41168), 0xDu, 0);
  v8 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 1) = a2;
    if ( a2 )
      v9 = *(_QWORD *)(*((_QWORD *)a2 + 46) + 48LL);
    else
      v9 = 0LL;
    *((_QWORD *)v8 + 2) = v9;
    v10 = (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F;
    v8[24] = a3;
    *(_DWORD *)v8 = v10;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
