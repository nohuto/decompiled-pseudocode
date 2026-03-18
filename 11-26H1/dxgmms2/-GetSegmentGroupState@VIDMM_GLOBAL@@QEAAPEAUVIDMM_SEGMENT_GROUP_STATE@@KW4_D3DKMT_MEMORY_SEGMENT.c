/*
 * XREFs of ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400C8F48
 * Callers:
 *     ?QuerySegmentGroupUsageStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_MEMORY_USAGE@@@Z @ 0x1400A9138 (-QuerySegmentGroupUsageStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1400C85DC (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1400C88B0 (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1400C8B24 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 * Callees:
 *     <none>
 */

struct VIDMM_SEGMENT_GROUP_STATE *__fastcall VIDMM_GLOBAL::GetSegmentGroupState(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PARTITION *a4)
{
  __int64 v4; // r10
  __int64 v5; // r8

  v4 = a3;
  v5 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * a2);
  if ( (*(_BYTE *)(v5 + 24 * v4 + 632) & 1) != 0 )
    return (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                          + *((_QWORD *)a4 + 5)
                                                          + 24)
                                              + 344LL * a2);
  else
    return (struct VIDMM_SEGMENT_GROUP_STATE *)(v5 + 344 * v4 + 664);
}
