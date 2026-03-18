/*
 * XREFs of ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F0C7C
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400F1384 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400F3100 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400F68A8 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 * Callees:
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1400EDE24 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EFC60 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400EFE4C (-Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400F0AA8 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14010BFB8 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14010C08C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // edx
  char *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // r14
  __int64 v17; // r8
  __int64 v18; // rbx
  _QWORD *Multirange; // r13
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8

  if ( *((_DWORD *)a2 + 16) == 4 )
  {
    v6 = 0;
    v4 = *((_QWORD *)a2 + 19);
    v5 = 2;
    v13 = **(_DWORD **)(*((_QWORD *)a2 + 9) + 32LL);
    if ( v13 != 3 && (unsigned int)(v13 - 4) > 2 && (unsigned int)(v13 - 9) > 1 )
      v5 = 1;
  }
  else
  {
    if ( *((_DWORD *)a2 + 16) != 5 )
    {
      v5 = 3;
      v6 = 3;
      goto LABEL_23;
    }
    v4 = *((_QWORD *)a2 + 18);
    v5 = 2;
    v6 = 1;
  }
  if ( !v4 )
  {
LABEL_23:
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, v6, a2);
    VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v5, a2);
    return;
  }
  WdLogSingleEntry2(4LL, v4, v6);
  WdLogGlobalForLineNumber = 8517;
  if ( v6 )
    v14 = (char *)this + 56;
  else
    v14 = (char *)this + 48;
  RtlAvlRemoveNode(v14, v4);
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *(_QWORD *)(v4 + 40);
  *(_DWORD *)(v4 + 88) = 3;
  v9 = *((_QWORD *)a2 + 4);
  v10 = *((_QWORD *)a2 + 5);
  if ( v7 < v9 )
  {
    if ( v8 > v10 )
    {
      v15 = *((_QWORD *)a2 + 15);
      v16 = 0LL;
      v17 = *((_QWORD *)a2 + 9);
      v18 = *(_QWORD *)(v4 + 72);
      if ( v15 != v17 + 72 )
        v16 = (_QWORD *)(v15 - 120);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(*((_QWORD *)this + 1), *(_DWORD *)(v4 + 168), v17, v10, v8);
      Multirange[8] = v16;
      Multirange[9] = v18;
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v4, *(_QWORD *)(v4 + 32), *((_QWORD *)a2 + 4));
      while ( 1 )
      {
        v20 = *((_DWORD *)Multirange + 42);
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 1 )
              v16[19] = Multirange;
          }
          else
          {
            v16[18] = Multirange;
          }
        }
        else
        {
          v16[17] = Multirange;
        }
        if ( v16 == (_QWORD *)Multirange[9] )
          break;
        v22 = v16[15];
        v23 = v16[9];
        v16 = 0LL;
        if ( v22 != v23 + 72 )
          v16 = (_QWORD *)(v22 - 120);
      }
      if ( *((_DWORD *)a2 + 16) == 4 )
      {
        *((_QWORD *)a2 + 19) = 0LL;
      }
      else if ( *((_DWORD *)a2 + 16) == 5 )
      {
        *((_QWORD *)a2 + 18) = 0LL;
      }
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v6, v4);
      v24 = (__int64)Multirange;
      goto LABEL_40;
    }
LABEL_36:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v4, v7, v9);
    if ( *((_DWORD *)a2 + 16) == 4 )
    {
      *((_QWORD *)a2 + 19) = 0LL;
    }
    else if ( *((_DWORD *)a2 + 16) == 5 )
    {
      *((_QWORD *)a2 + 18) = 0LL;
    }
    v24 = v4;
LABEL_40:
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v6, v24);
    return;
  }
  if ( v8 > v10 )
  {
    v9 = v8;
    v7 = *((_QWORD *)a2 + 5);
    goto LABEL_36;
  }
  v11 = *((_QWORD *)this + 1);
  VIDMM_RECYCLE_MULTIRANGE::Destroy((VIDMM_RECYCLE_MULTIRANGE *)v4);
  v12 = *(unsigned int *)(v11 + 1620);
  if ( (unsigned int)v12 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v11 + 1320), (PVOID)v4);
  }
  else
  {
    *(_QWORD *)(v11 + 8 * v12 + 1656) = v4;
    ++*(_DWORD *)(v11 + 1620);
  }
  --*(_DWORD *)(v11 + 1688);
  if ( *((_DWORD *)a2 + 16) == 4 )
  {
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( *((_DWORD *)a2 + 16) == 5 )
  {
    *((_QWORD *)a2 + 18) = 0LL;
  }
}
