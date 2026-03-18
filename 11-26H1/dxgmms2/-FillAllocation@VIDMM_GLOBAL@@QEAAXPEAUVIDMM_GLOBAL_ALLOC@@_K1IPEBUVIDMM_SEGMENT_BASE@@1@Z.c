/*
 * XREFs of ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D8AA0
 * Callers:
 *     ?VidMmPbmmFillMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI@Z @ 0x1400B0960 (-VidMmPbmmFillMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D8B94 (-FillAllocationInternal@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        const struct VIDMM_SEGMENT_BASE *a6,
        unsigned __int64 a7)
{
  unsigned int v7; // ebx
  __int64 v12; // rcx
  _QWORD *v13; // rax

  v7 = 0;
  if ( a2 )
    v7 = (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 14497;
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
    v13[3] = a4;
    v13[4] = a5;
    v13[5] = a6;
    v13[6] = a7;
    WdLogGlobalForLineNumber = 14503;
  }
  VIDMM_GLOBAL::FillAllocationInternal(this, v7, a2, a3, a4, a5, a6, a7);
}
