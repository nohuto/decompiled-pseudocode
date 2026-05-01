/*
 * XREFs of _DSA_MergeSort @ 0x180683F9C
 * Callers:
 *     DSA_Sort @ 0x180684490 (DSA_Sort.c)
 * Callees:
 *     ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x180683C04 (-CCv6s_HeapFree@@YAJPEAX0@Z.c)
 *     ??$CCv6s_HeapAllocArray@X@@YAJPEAXK_K1PEAPEAX@Z @ 0x180683D14 (--$CCv6s_HeapAllocArray@X@@YAJPEAXK_K1PEAPEAX@Z.c)
 *     _DSA_MergeSort2 @ 0x180683E94 (_DSA_MergeSort2.c)
 */

__int64 __fastcall DSA_MergeSort(__int64 a1)
{
  int v1; // ebp
  unsigned int v3; // esi
  unsigned __int64 v4; // rbx
  HANDLE ProcessHeap; // rax
  void **v6; // r14
  void *v7; // rbx
  HANDLE v8; // rax

  v1 = *(_DWORD *)a1;
  v3 = 1;
  if ( *(_DWORD *)a1 )
  {
    v4 = *(int *)(a1 + 16);
    ProcessHeap = GetProcessHeap();
    v6 = (void **)(a1 + 40);
    if ( (int)CCv6s_HeapAllocArray<void>((__int64)ProcessHeap, (unsigned int)(v1 >> 31), v4, v1 / 2, a1 + 40) < 0 )
    {
      *v6 = 0LL;
      return 0;
    }
    else
    {
      DSA_MergeSort2(a1, 0, *(_DWORD *)a1);
      v7 = *v6;
      v8 = GetProcessHeap();
      CCv6s_HeapFree(v8, v7);
    }
  }
  return v3;
}
