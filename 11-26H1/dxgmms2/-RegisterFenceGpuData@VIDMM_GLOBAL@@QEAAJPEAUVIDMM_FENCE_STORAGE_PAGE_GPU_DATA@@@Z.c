/*
 * XREFs of ?RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x140119218
 * Callers:
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x140119078 (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RegisterFenceGpuData(VIDMM_GLOBAL *this, struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *a2)
{
  char *v2; // rdi
  bool v5; // zf
  VIDMM_GLOBAL **v6; // rdx
  VIDMM_GLOBAL *v7; // rax
  __int64 v9; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v11; // eax
  unsigned int v12; // ebx
  char v13; // [rsp+20h] [rbp-38h]
  char *v14; // [rsp+40h] [rbp-18h] BYREF
  char v15; // [rsp+48h] [rbp-10h]

  v2 = (char *)this + 3768;
  v14 = (char *)this + 3768;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v5 = *((_BYTE *)this + 40100) == 0;
  v15 = 1;
  if ( v5
    || (v9 = *((_QWORD *)a2 + 7),
        LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 8), 0LL),
        v13 = 0,
        v11 = SysMmMapPagesToIommu(
                *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
                LogicalAddress,
                v9 + 48,
                (unsigned __int64)*(unsigned int *)(v9 + 40) >> 12,
                v13,
                4,
                a2),
        v12 = v11,
        v11 >= 0) )
  {
    v6 = (VIDMM_GLOBAL **)*((_QWORD *)this + 468);
    v7 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)((char *)a2 + 16);
    if ( *v6 != (VIDMM_GLOBAL *)((char *)this + 3736) )
      __fastfail(3u);
    *(_QWORD *)v7 = (char *)this + 3736;
    *((_QWORD *)a2 + 3) = v6;
    *v6 = v7;
    *((_QWORD *)this + 468) = v7;
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, v11);
    WdLogGlobalForLineNumber = 3082;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v14);
    return v12;
  }
}
