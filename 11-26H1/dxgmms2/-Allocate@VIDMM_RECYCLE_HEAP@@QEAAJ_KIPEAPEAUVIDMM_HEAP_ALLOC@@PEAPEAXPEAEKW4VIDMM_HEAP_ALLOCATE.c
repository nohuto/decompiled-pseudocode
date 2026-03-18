/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE_FLAGS@@@Z @ 0x1400ACA7C
 * Callers:
 *     ?AllocateGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@PEAXW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400ACD30 (-AllocateGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FL.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAEK@Z @ 0x1400ACF54 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAEK@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AD454 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIW4VIDMM_HEAP_ALLOC.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EDD50 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1400EDFB0 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EE4D8 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F0480 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F106C (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F4640 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x14010BD68 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?Zeroed@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x140110524 (-Zeroed@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?GetVirtualAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1401106D8 (-GetVirtualAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::Allocate(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct VIDMM_RECYCLE_MULTIRANGE **a4,
        _QWORD *a5,
        unsigned __int8 *a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v8; // rbx
  __int64 v12; // r12
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rdx
  unsigned __int8 v19; // dl
  int v20; // eax
  unsigned int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // r8
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  void *VirtualAddress; // rcx
  int v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h]
  char v31; // [rsp+40h] [rbp-10h]

  v8 = (unsigned int)a3;
  v29 = -1;
  v30 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v31 = 1;
    v29 = 8004;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v12 = v8;
  WdLogSingleEntry3(4LL, a1, a2, v8);
  WdLogGlobalForLineNumber = 9337;
  BlockAndRange = VIDMM_RECYCLE_HEAP::LookupSufficientRange((VIDMM_RECYCLE_HEAP *)a1, a2, v8, (a8 & 4) != 0);
  if ( BlockAndRange
    || (WdLogSingleEntry3(4LL, a1, a2, v12),
        WdLogGlobalForLineNumber = 9343,
        (BlockAndRange = (struct VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP::CreateBlockAndRange(a1, a2, v14, a8, a7)) != 0LL) )
  {
    v18 = *((_QWORD *)BlockAndRange + 6);
    if ( *((_QWORD *)BlockAndRange + 5) - v18 > a2 )
      VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v18 - *((_QWORD *)BlockAndRange + 4));
    VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch((VIDMM_RECYCLE_HEAP *)a1, BlockAndRange);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(a1, *((unsigned int *)BlockAndRange + 22), BlockAndRange);
    v20 = VIDMM_RECYCLE_MULTIRANGE::Commit(BlockAndRange, v19, a6, a7);
    v21 = v20;
    if ( v20 >= 0 )
    {
      v25 = *((_QWORD *)BlockAndRange + 9);
      v26 = 0LL;
      v27 = *(_QWORD *)(v25 + 120);
      if ( v27 != *(_QWORD *)(v25 + 72) + 72LL )
        v26 = v27 - 120;
      if ( v26 && !*(_DWORD *)(v26 + 64) )
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)BlockAndRange + 10));
      *a4 = BlockAndRange;
      *a6 = VIDMM_RECYCLE_MULTIRANGE::Zeroed(BlockAndRange);
      if ( *(_BYTE *)(a1 + 18) )
        VirtualAddress = VIDMM_RECYCLE_MULTIRANGE::GetVirtualAddress(BlockAndRange);
      else
        VirtualAddress = 0LL;
      *a5 = VirtualAddress;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 176LL) += *((_QWORD *)BlockAndRange + 5)
                                                                   - *((_QWORD *)BlockAndRange + 4);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
      v24 = v31 == 0;
    }
    else
    {
      WdLogSingleEntry5(3LL, BlockAndRange, a2, v12, v20, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 16LL));
      WdLogGlobalForLineNumber = 9385;
      VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)a1, BlockAndRange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(a1 + 8), BlockAndRange);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
      v24 = v31 == 0;
    }
    if ( !v24 && (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v29);
    return v21;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      if ( (byte_14008A202 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v29);
    }
    return 3221225495LL;
  }
}
