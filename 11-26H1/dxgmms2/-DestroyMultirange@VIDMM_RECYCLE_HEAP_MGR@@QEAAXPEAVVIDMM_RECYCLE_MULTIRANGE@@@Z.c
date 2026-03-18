/*
 * XREFs of ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F4640
 * Callers:
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140099BD4 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14009A600 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE_FLAGS@@@Z @ 0x1400ACA7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EE4D8 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400EEAAC (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1400EEF40 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F0480 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F106C (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400F21B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1400F3B94 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F4498 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?FreeGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400F4DC0 (-FreeGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1400047C8 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(PLOOKASIDE_LIST_EX *this, struct _LOOKASIDE_LIST_EX *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  VIDMM_RECYCLE_BLOCK *v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = *(_QWORD *)&a2->L.LastTotalAllocates;
  v5 = *(_QWORD *)(v2 + 152);
  if ( v5 )
  {
    v10 = *(_QWORD *)(v5 + 24);
    v11 = 144LL * *(_QWORD *)(v5 + 32);
    *(_DWORD *)(v11 + v10) = 1;
    *(_QWORD *)(v11 + v10 + 8) = a2;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v11 + v10 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v2 + 152) + 32LL);
    v12 = *(_QWORD *)(v2 + 152);
    if ( *(_QWORD *)(v12 + 32) == *(_QWORD *)(v12 + 48) )
    {
      *(_QWORD *)(v12 + 32) = 0LL;
      *(_BYTE *)(*(_QWORD *)(v2 + 152) + 40LL) = 1;
    }
  }
  v6 = *(VIDMM_RECYCLE_BLOCK **)&a2->L.LastTotalAllocates;
  v7 = *((_QWORD *)v6 + 1) - 1LL;
  v8 = *(_QWORD *)v6 == 0LL;
  *((_QWORD *)v6 + 1) = v7;
  if ( v8 && !v7 && v6 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v6);
  BYTE4(a2[1].L.ListEntry.Blink) = 1;
  v9 = *((unsigned int *)this + 405);
  if ( (unsigned int)v9 >= 4 )
  {
    ExFreeToLookasideListEx(this[165], a2);
  }
  else
  {
    this[v9 + 207] = a2;
    ++*((_DWORD *)this + 405);
  }
  --*((_DWORD *)this + 422);
}
