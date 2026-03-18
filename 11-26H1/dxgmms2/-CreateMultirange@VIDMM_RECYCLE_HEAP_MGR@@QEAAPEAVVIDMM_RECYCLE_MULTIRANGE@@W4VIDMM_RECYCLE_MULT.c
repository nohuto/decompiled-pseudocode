/*
 * XREFs of ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400F0AA8
 * Callers:
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140099BD4 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14009A600 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14009AF7C (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AD454 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIW4VIDMM_HEAP_ALLOC.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EE4D8 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400EEAAC (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F0480 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F0C7C (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _LOOKASIDE_LIST_EX *v6; // rcx
  int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // rbx
  ULONGLONG v13; // rcx
  CCHAR LeastSignificantBit; // al
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx

  v6 = *(struct _LOOKASIDE_LIST_EX **)(a1 + 1320);
  v10 = *(_DWORD *)(a1 + 1620);
  if ( v10 )
  {
    v11 = (unsigned int)(v10 - 1);
    v12 = *(_QWORD **)(a1 + 8 * v11 + 1656);
    *(_QWORD *)(a1 + 8 * v11 + 1656) = 0LL;
    --*(_DWORD *)(a1 + 1620);
  }
  else
  {
    v12 = ExAllocateFromLookasideListEx(v6);
  }
  if ( v12 )
  {
    ++*(_DWORD *)(a1 + 1688);
    WdLogSingleEntry1(4LL, v12);
    v12[4] = a4;
    v12[5] = a5;
    *((_DWORD *)v12 + 6) = 1;
    v12[8] = 0LL;
    v12[9] = 0LL;
    v12[10] = a3;
    v12[6] = a4;
    *((_DWORD *)v12 + 42) = a2;
    ++*(_QWORD *)(a3 + 8);
    v13 = v12[4];
    WdLogGlobalForLineNumber = 2287;
    LeastSignificantBit = RtlFindLeastSignificantBit(v13);
    if ( LeastSignificantBit < 0 )
      v15 = 0LL;
    else
      v15 = 1LL << LeastSignificantBit;
    v12[7] = v15;
    v12[11] = 3LL;
    *((_BYTE *)v12 + 96) = 0;
    v12[13] = 0LL;
    v12[14] = 0LL;
    v12[18] = 0LL;
    *((_WORD *)v12 + 60) = 0;
    v12[16] = 0LL;
    v12[17] = 0LL;
    v12[19] = 0LL;
    v12[20] = 0LL;
    v16 = v12[10];
    *((_BYTE *)v12 + 172) = 0;
    v17 = *(_QWORD *)(v16 + 152);
    if ( v17 )
    {
      v19 = *(_QWORD *)(v17 + 24);
      v20 = 144LL * *(_QWORD *)(v17 + 32);
      *(_DWORD *)(v20 + v19) = 0;
      *(_QWORD *)(v20 + v19 + 8) = v12;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v20 + v19 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v16 + 152) + 32LL);
      v21 = *(_QWORD *)(v16 + 152);
      if ( *(_QWORD *)(v21 + 32) == *(_QWORD *)(v21 + 48) )
      {
        *(_QWORD *)(v21 + 32) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v16 + 152) + 40LL) = 1;
      }
    }
  }
  return v12;
}
