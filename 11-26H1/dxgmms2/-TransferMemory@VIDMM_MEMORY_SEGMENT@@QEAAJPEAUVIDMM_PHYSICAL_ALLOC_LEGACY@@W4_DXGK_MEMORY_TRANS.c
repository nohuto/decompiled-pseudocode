/*
 * XREFs of ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@PEA_N3@Z @ 0x14011BD74
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     ?VidMmAcquireTemporaryResourcesForLegacyAllocation@@YAJPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B3598 (-VidMmAcquireTemporaryResourcesForLegacyAllocation@@YAJPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVI.c)
 *     ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@@Z @ 0x1400BF250 (-TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_T.c)
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@PEA_N@Z @ 0x14011BE88 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_T.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferMemory(
        struct VIDMM_PHYSICAL_ADAPTER_LEGACY **this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        union _LARGE_INTEGER a4,
        bool *a5,
        bool *a6)
{
  bool *v6; // r14
  unsigned int v8; // r9d
  int v12; // eax

  v8 = -1073741823;
  if ( *((_DWORD *)a2 + 9) )
  {
    v12 = VidMmAcquireTemporaryResourcesForLegacyAllocation(this[2], a2);
    v8 = v12;
    if ( v12 < 0 )
    {
      if ( *(char *)(*(_QWORD *)(*((_QWORD *)this[1] + 5040) + 8LL * *((unsigned __int16 *)this + 34)) + 556LL) >= 0 )
        return v8;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, a2, v12, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    else
    {
      v6 = a5;
      v8 = VIDMM_MEMORY_SEGMENT::TransferMemoryFast((VIDMM_MEMORY_SEGMENT *)this, a2, a3, a4, a5);
      if ( (v8 & 0x80000000) == 0 )
        return v8;
    }
    VIDMM_MEMORY_SEGMENT::TransferMemorySlow((VIDMM_MEMORY_SEGMENT *)this, a2, a3, a4);
    v8 = 0;
    *v6 = 1;
    if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
      *a6 = 1;
  }
  return v8;
}
