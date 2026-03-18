/*
 * XREFs of MxCreateFreePageNode @ 0x140CF5A8C
 * Callers:
 *     MxCreateFreePages @ 0x140CF5CA8 (MxCreateFreePages.c)
 * Callees:
 *     MxGetPage @ 0x140CF6D70 (MxGetPage.c)
 *     MxGetSplitDescriptor @ 0x140CF6FEC (MxGetSplitDescriptor.c)
 *     MxInsertFreeZeroMemoryDescriptor @ 0x140CF755C (MxInsertFreeZeroMemoryDescriptor.c)
 *     MxRemoveFreeZeroMemoryDescriptor @ 0x140CF82D0 (MxRemoveFreeZeroMemoryDescriptor.c)
 */

unsigned __int64 __fastcall MxCreateFreePageNode(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned int v8; // r12d
  unsigned __int64 v9; // rbx
  unsigned __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // r8
  int v16; // ebp
  __int64 SplitDescriptor; // rbx
  unsigned __int64 i; // r14
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
  if ( a2 == *(_QWORD *)(a1 + 192) )
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
        if ( (unsigned int)(32 - *(_DWORD *)(a1 + 200)) < 2 )
        {
          stru_140E2EB88.ApcStateIndex |= 4u;
          return v15;
        }
        if ( v5 - v15 < i )
          i = 1LL;
        v20 = v16 & 0xFFFFFFFE;
        if ( v5 - v15 >= v19 )
          v20 = v16;
        v16 = v20;
        Page = MxGetPage(*(unsigned int *)(a1 + 184), v20);
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
    SplitDescriptor = MxGetSplitDescriptor(a1, v6);
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
  v8 = 32 - *(_DWORD *)(a1 + 200);
  v9 = *(_QWORD *)(a2 + 40);
  if ( a3 < v9 )
  {
    if ( v8 < 2 )
    {
      stru_140E2EB88.ApcStateIndex |= 2u;
      return 0LL;
    }
  }
  else if ( !v8 )
  {
    stru_140E2EB88.ApcStateIndex |= 1u;
    return 0LL;
  }
  MxRemoveFreeZeroMemoryDescriptor();
  if ( v5 < v9 )
  {
    v11 = MxGetSplitDescriptor(a1, v6);
    *(_QWORD *)(v6 + 32) += v5;
    *(_QWORD *)(v6 + 40) -= v5;
    v12 = v11;
    MxInsertFreeZeroMemoryDescriptor(a1, v13);
    v6 = v12;
    *(_QWORD *)(v12 + 40) = v5;
  }
  else
  {
    v5 = v9;
  }
  if ( (*(_DWORD *)(v6 + 28) & 6) != 4 )
    *(_DWORD *)(v6 + 28) = *(_DWORD *)(v6 + 28) & 0xFFFFFFF9 | 2;
  v14 = *(__int64 **)(a4 + 8);
  if ( *v14 != a4 )
LABEL_33:
    __fastfail(3u);
  *(_QWORD *)(v6 + 8) = v14;
  *(_QWORD *)v6 = a4;
  *v14 = v6;
  result = v5;
  *(_QWORD *)(a4 + 8) = v6;
  return result;
}
