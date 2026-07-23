/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x14062912C
 * Callers:
 *     RtlpAllocateHeap @ 0x1405238C8 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14061E070 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14061E464 (RtlpCreateSplitBlock.c)
 *     RtlpPopulateListIndex @ 0x140629228 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x14080B8A0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x1406290B0 (RtlpHeapListCompare.c)
 */

__int64 *__fastcall RtlpHeapRemoveListEntry(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v8; // esi
  bool v9; // zf
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r14
  __int64 *result; // rax
  __int64 v15; // rbp

  v8 = a5 - *(_DWORD *)(a2 + 24);
  v9 = *(_DWORD *)(a2 + 12) == 0;
  v10 = *(_QWORD *)(a2 + 48);
  v11 = *(_DWORD *)(a2 + 8);
  v12 = 2 * v8;
  if ( v9 )
    v12 = v8;
  v13 = (unsigned int)v12;
  result = *(__int64 **)(v10 + 8 * v12);
  --*(_DWORD *)(a2 + 16);
  if ( a5 == v11 - 1 )
    --*(_DWORD *)(a2 + 20);
  if ( result == a4 )
  {
    v15 = *a4;
    result = *(__int64 **)(a2 + 32);
    if ( !*(_QWORD *)a2 )
      --v11;
    if ( a5 >= v11 )
    {
      if ( (__int64 *)v15 != result )
      {
        *(_QWORD *)(v10 + 8LL * (unsigned int)v12) = v15;
        return result;
      }
      *(_QWORD *)(v10 + 8LL * (unsigned int)v12) = 0LL;
    }
    else
    {
      if ( (__int64 *)v15 != result && !(unsigned int)RtlpHeapListCompare(a1, v15, a6, 1) )
      {
        result = *(__int64 **)(a2 + 48);
        result[v13] = v15;
        return result;
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v13) = 0LL;
    }
    result = *(__int64 **)(a2 + 40);
    *((_DWORD *)result + ((unsigned __int64)v8 >> 5)) &= ~(1 << (v8 & 0x1F));
  }
  return result;
}
