/*
 * XREFs of ArbpBuildAllocationStack @ 0x14078C794
 * Callers:
 *     ArbTestAllocation @ 0x14078C610 (ArbTestAllocation.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ArbpBuildAlternative @ 0x14078C8F4 (ArbpBuildAlternative.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbpBuildAllocationStack(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // r14
  int v4; // ebx
  __int64 *v5; // r8
  int i; // edi
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // ebx
  __int64 Pool2; // rbp
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *j; // rbx
  unsigned __int64 k; // rbp

  v3 = (unsigned int)(a3 + 1);
  v4 = 0;
  v5 = (__int64 *)*a2;
  for ( i = 0; a2 != v5; i = v10 )
  {
    v9 = *((_DWORD *)v5 + 4);
    if ( v9 )
      v4 += v9 << 6;
    else
      v3 = (unsigned int)(v3 - 1);
    v5 = (__int64 *)*v5;
    v10 = i + 1;
    if ( !v9 )
      v10 = i;
  }
  v11 = 80 * v3 + v4;
  if ( *(_DWORD *)(a1 + 104) < v11 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x41627241u);
    *(_QWORD *)(a1 + 112) = Pool2;
    *(_DWORD *)(a1 + 104) = v11;
  }
  memset_0(*(void **)(a1 + 112), 0, v11);
  v14 = *(_QWORD *)(a1 + 112);
  if ( i )
    v15 = v14 + 80 * v3;
  else
    v15 = 0LL;
  for ( j = (__int64 *)*a2; a2 != j; j = (__int64 *)*j )
  {
    if ( *((_DWORD *)j + 4) )
    {
      *(_QWORD *)(v14 + 32) = j;
      *(_DWORD *)(v14 + 48) = *((_DWORD *)j + 4);
      *(_QWORD *)(v14 + 56) = v15;
      *(_QWORD *)v14 = 1LL;
      for ( k = j[3]; k < j[3] + 32 * (unsigned __int64)*((unsigned int *)j + 4); k += 32LL )
      {
        result = ArbpBuildAlternative(a1, k, v15);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(v15 + 32) = 0;
        v15 += 64LL;
      }
      v14 += 80LL;
    }
  }
  *(_QWORD *)(v14 + 32) = 0LL;
  return 0LL;
}
