/*
 * XREFs of MxCreateFreePageNode @ 0x140CFBE0C
 * Callers:
 *     MxCreateFreePages @ 0x140CFC028 (MxCreateFreePages.c)
 * Callees:
 *     MxGetPage @ 0x140CFD0F0 (MxGetPage.c)
 *     MxGetSplitDescriptor @ 0x140CFD36C (MxGetSplitDescriptor.c)
 *     MxInsertFreeZeroMemoryDescriptor @ 0x140CFD8DC (MxInsertFreeZeroMemoryDescriptor.c)
 *     MxRemoveFreeZeroMemoryDescriptor @ 0x140CFE650 (MxRemoveFreeZeroMemoryDescriptor.c)
 */

unsigned __int64 __fastcall MxCreateFreePageNode(
        PRTL_RB_TREE Tree,
        _RTL_BALANCED_NODE *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v5; // rsi
  _RTL_BALANCED_NODE *v6; // rdi
  unsigned int v8; // r12d
  unsigned __int64 ParentValue; // rbx
  unsigned __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  PRTL_BALANCED_NODE v13; // rdx
  _RTL_BALANCED_NODE *v14; // rax
  __int64 v15; // r8
  int v16; // ebp
  __int64 SplitDescriptor; // rbx
  unsigned __int64 i; // r15
  unsigned __int64 v19; // r9
  unsigned int v20; // eax
  __int64 Page; // r10
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // r10
  __int64 *v26; // rax
  __int64 v27; // [rsp+50h] [rbp+8h]

  v5 = a3;
  v6 = a2;
  if ( a2 == Tree[12].Root )
  {
    v15 = 0LL;
    v16 = 5;
    v27 = 0LL;
    SplitDescriptor = 0LL;
    for ( i = 512LL; ; *(_QWORD *)(SplitDescriptor + 40) = v23 + i )
    {
      while ( 1 )
      {
        v19 = i;
        if ( v15 == v5 )
          return v15;
        if ( (unsigned int)(32 - *(_DWORD *)&Tree[12].0) < 2 )
        {
          stru_140E2ED08.ApcStateIndex |= 4u;
          return v15;
        }
        if ( v5 - v15 < i )
          i = 1LL;
        v20 = v16 & 0xFFFFFFFE;
        if ( v5 - v15 >= v19 )
          v20 = v16;
        v16 = v20;
        Page = MxGetPage(*(unsigned int *)&Tree[11].0, v20);
        if ( Page != -1 )
          break;
        if ( (v16 & 1) == 0 )
          return v27;
        v16 &= ~1u;
        i = 1LL;
LABEL_25:
        v15 = v27;
      }
      v15 = i + v27;
      v27 += i;
      if ( !SplitDescriptor )
        break;
      v22 = *(_QWORD *)(SplitDescriptor + 32);
      v23 = *(_QWORD *)(SplitDescriptor + 40);
      if ( v23 + v22 != Page )
      {
        if ( Page + i != v22 )
          break;
        *(_QWORD *)(SplitDescriptor + 32) = v22 - i;
      }
    }
    SplitDescriptor = MxGetSplitDescriptor(Tree, v6);
    v24 = *(_DWORD *)(SplitDescriptor + 28) & 0xFFFFFFFD;
    *(_QWORD *)(SplitDescriptor + 32) = v25;
    *(_QWORD *)(SplitDescriptor + 40) = i;
    *(_DWORD *)(SplitDescriptor + 28) = v24 | 4;
    v26 = *(__int64 **)(a4 + 8);
    if ( *v26 != a4 )
      goto LABEL_33;
    *(_QWORD *)SplitDescriptor = a4;
    *(_QWORD *)(SplitDescriptor + 8) = v26;
    *v26 = SplitDescriptor;
    *(_QWORD *)(a4 + 8) = SplitDescriptor;
    goto LABEL_25;
  }
  v8 = 32 - *(_DWORD *)&Tree[12].0;
  ParentValue = a2[1].ParentValue;
  if ( a3 < ParentValue )
  {
    if ( v8 < 2 )
    {
      stru_140E2ED08.ApcStateIndex |= 2u;
      return 0LL;
    }
  }
  else if ( !v8 )
  {
    stru_140E2ED08.ApcStateIndex |= 1u;
    return 0LL;
  }
  MxRemoveFreeZeroMemoryDescriptor();
  if ( v5 < ParentValue )
  {
    v11 = MxGetSplitDescriptor(Tree, v6);
    v6[1].Children[1] = (_RTL_BALANCED_NODE *)((char *)v6[1].Children[1] + v5);
    v6[1].ParentValue -= v5;
    v12 = v11;
    MxInsertFreeZeroMemoryDescriptor(Tree, v13);
    v6 = (_RTL_BALANCED_NODE *)v12;
    *(_QWORD *)(v12 + 40) = v5;
  }
  else
  {
    v5 = ParentValue;
  }
  if ( (HIDWORD(v6[1].Left) & 6) != 4 )
    HIDWORD(v6[1].Left) = HIDWORD(v6[1].Left) & 0xFFFFFFF9 | 2;
  v14 = *(_RTL_BALANCED_NODE **)(a4 + 8);
  if ( v14->Children[0] != (_RTL_BALANCED_NODE *)a4 )
LABEL_33:
    __fastfail(3u);
  v6->Children[1] = v14;
  v6->Children[0] = (_RTL_BALANCED_NODE *)a4;
  v14->Children[0] = v6;
  result = v5;
  *(_QWORD *)(a4 + 8) = v6;
  return result;
}
