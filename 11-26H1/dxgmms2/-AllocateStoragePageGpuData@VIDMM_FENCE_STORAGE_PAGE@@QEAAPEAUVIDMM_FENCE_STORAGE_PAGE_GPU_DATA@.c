/*
 * XREFs of ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x140119078
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB330 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x14003B35C (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004CB04 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ?RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x140119218 (-RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z.c)
 */

struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *__fastcall VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  void **v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rax
  int LogicalMemory; // eax
  int v11; // eax
  VIDMM_FENCE_STORAGE_PAGE **v12; // rcx
  __int64 v13; // rcx
  void *v15; // rdx

  Pool2 = ExAllocatePool2(64LL, 80LL, 1700882774LL);
  v5 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    _InterlockedIncrement(&dword_14008A86C);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1502;
    DxgkLogInternalTriageEvent(v13, 262145LL);
    return 0LL;
  }
  v6 = *((_QWORD *)a2 + 3);
  v7 = (void **)(Pool2 + 64);
  v8 = (_QWORD *)(Pool2 + 32);
  v8[1] = v8;
  *v8 = v8;
  v9 = *((_QWORD *)this + 16);
  v5[6] = a2;
  v5[7] = v9;
  *((_DWORD *)v5 + 18) = 0;
  LogicalMemory = SysMmAllocateLogicalMemory(*(struct SYSMM_ADAPTER **)(v6 + 224), *(unsigned int *)(v9 + 40), this, v7);
  if ( LogicalMemory < 0 )
  {
    WdLogSingleEntry1(3LL, LogicalMemory);
    WdLogGlobalForLineNumber = 1520;
LABEL_11:
    v15 = (void *)v5[8];
    if ( v15 )
      SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*((_QWORD *)a2 + 3) + 224LL), v15);
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  v11 = VIDMM_GLOBAL::RegisterFenceGpuData(a2, (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v5);
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(3LL, v11);
    WdLogGlobalForLineNumber = 1527;
    goto LABEL_11;
  }
  v12 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)this + 9);
  if ( *v12 != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 64) )
    __fastfail(3u);
  *v5 = (char *)this + 64;
  v5[1] = v12;
  *v12 = (VIDMM_FENCE_STORAGE_PAGE *)v5;
  *((_QWORD *)this + 9) = v5;
  return (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v5;
}
