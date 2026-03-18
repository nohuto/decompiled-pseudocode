/*
 * XREFs of ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EFC60
 * Callers:
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140099BD4 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14009A600 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14009AF7C (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AD454 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIW4VIDMM_HEAP_ALLOC.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EE4D8 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400EEAAC (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1400EEF40 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F0480 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F0C7C (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1400F3B94 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400EFE10 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP::AddMultirangeToTree(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _QWORD *v9; // r14
  struct _RTL_BALANCED_NODE *v10; // rbx
  struct _RTL_BALANCED_NODE *v11; // rax
  struct _RTL_BALANCED_NODE *v12; // rax
  __int64 result; // rax
  struct _RTL_BALANCED_NODE *v14; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+40h] [rbp-18h]

  v4 = a2;
  WdLogSingleEntry2(4LL, a3, a2);
  v7 = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v8 = *(_QWORD *)(a3 + 56);
  WdLogGlobalForLineNumber = 8467;
  v15[0] = v7;
  v15[1] = v8;
  v16 = 0;
  if ( (_DWORD)v4 == 2 )
  {
    v9 = a1 + 8;
    LOBYTE(v6) = 0;
    v10 = (struct _RTL_BALANCED_NODE *)a1[8];
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v15, v10) < 0 )
        {
          v11 = v10->Children[0];
          if ( !v10->Children[0] )
            goto LABEL_23;
        }
        else
        {
          v11 = v10->Children[1];
          if ( !v11 )
            goto LABEL_16;
        }
        v10 = v11;
      }
    }
  }
  else if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 15LL, v4, 0LL);
      WdLogGlobalForLineNumber = 213;
      JUMPOUT(0x1400EFE00LL);
    }
    v9 = a1 + 7;
    LOBYTE(v6) = 0;
    v10 = (struct _RTL_BALANCED_NODE *)a1[7];
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v15, v10) < 0 )
        {
          v12 = v10->Children[0];
          if ( !v10->Children[0] )
            goto LABEL_23;
        }
        else
        {
          v12 = v10->Children[1];
          if ( !v12 )
            goto LABEL_16;
        }
        v10 = v12;
      }
    }
  }
  else
  {
    v9 = a1 + 6;
    LOBYTE(v6) = 0;
    v10 = (struct _RTL_BALANCED_NODE *)a1[6];
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v15, v10) < 0 )
        {
          v14 = v10->Children[0];
          if ( !v10->Children[0] )
          {
LABEL_23:
            LOBYTE(v6) = 0;
            break;
          }
        }
        else
        {
          v14 = v10->Children[1];
          if ( !v14 )
          {
LABEL_16:
            LOBYTE(v6) = 1;
            break;
          }
        }
        v10 = v14;
      }
    }
  }
  result = RtlAvlInsertNodeEx(v9, v10, v6, a3);
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
