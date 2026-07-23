/*
 * XREFs of ArbAddOrdering @ 0x14078A898
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x14078AC9C (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbAddOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  void *Pool2; // rax
  void *v8; // rbp
  const void *v9; // rdx

  if ( a3 < a2 )
    return 3221225485LL;
  if ( *a1 == a1[1] )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v8 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v9 = (const void *)*((_QWORD *)a1 + 1);
    if ( v9 )
    {
      memmove(Pool2, v9, 16LL * *a1);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0);
    }
    a1[1] += 8;
    *((_QWORD *)a1 + 1) = v8;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * *a1) = a2;
  *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * (*a1)++ + 8) = a3;
  return 0LL;
}
