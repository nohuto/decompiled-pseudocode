/*
 * XREFs of VfAvlInitializeTreeEx @ 0x140C280DC
 * Callers:
 *     VfAvlInitializeTree @ 0x140644788 (VfAvlInitializeTree.c)
 *     VfInitBootDriversLoaded @ 0x140CE4CB4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     RtlInitializeGenericTableAvl @ 0x140488F70 (RtlInitializeGenericTableAvl.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall VfAvlInitializeTreeEx(
        _QWORD *TableContext,
        __int64 a2,
        int a3,
        void (__cdecl *a4)(_RTL_AVL_TABLE *, PVOID))
{
  int v6; // eax
  int v7; // eax
  unsigned int MaximumProcessorCount; // ecx
  __int64 v9; // rax
  ULONG_PTR Pool2; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rdi

  TableContext[1] = 0LL;
  *TableContext = a2;
  if ( a3 || !ViAvlInitialized )
  {
    v7 = 16;
    if ( a3 )
      v7 = a3;
    v6 = v7 + 32;
  }
  else
  {
    v6 = 1;
  }
  *((_DWORD *)TableContext + 7) = v6;
  if ( a2 )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount < 0x40 )
    {
      v9 = 32LL;
      if ( MaximumProcessorCount < 0x20 )
      {
        *((_DWORD *)TableContext + 6) = 16;
        v9 = 16LL;
      }
      else
      {
        *((_DWORD *)TableContext + 6) = 32;
      }
    }
    else
    {
      *((_DWORD *)TableContext + 6) = 64;
      v9 = 64LL;
    }
  }
  else
  {
    *((_DWORD *)TableContext + 6) = 1;
    v9 = 1LL;
  }
  Pool2 = ExAllocatePool2(64LL, 192 * v9, 0x54416656u);
  TableContext[2] = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v12 = 0LL;
  if ( *((_DWORD *)TableContext + 6) )
  {
    v13 = 0LL;
    do
    {
      *(_QWORD *)(TableContext[2] + v13 + 104) = 0LL;
      *(_DWORD *)(TableContext[2] + v13 + 128) = 0;
      *(_QWORD *)(TableContext[2] + v13 + 112) = 0LL;
      *(_QWORD *)(TableContext[2] + v13 + 136) = 0LL;
      RtlInitializeGenericTableAvl(
        (PRTL_AVL_TABLE)(v13 + TableContext[2]),
        (PRTL_AVL_COMPARE_ROUTINE)ViAvlCompareNode,
        (PRTL_AVL_ALLOCATE_ROUTINE)ViAvlAllocateNode,
        a4,
        TableContext);
      ++v12;
      v13 += 192LL;
    }
    while ( v12 < *((unsigned int *)TableContext + 6) );
  }
  return 0LL;
}
