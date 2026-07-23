/*
 * XREFs of IopCompactRemovePagesArray @ 0x1405D7CCC
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x1405D6F18 (IoAddPagesForPartialKernelDump.c)
 *     IopAddAddressRangeToRemovePagesArray @ 0x1405D7284 (IopAddAddressRangeToRemovePagesArray.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void IopCompactRemovePagesArray()
{
  int v0; // edi
  unsigned int *v1; // rsi
  unsigned int v2; // ecx
  unsigned int v3; // eax
  unsigned __int64 *v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14

  v0 = 0;
  if ( IopRemovePagesArray )
  {
    qsort((void *)(IopRemovePagesArray + 8), *(unsigned int *)IopRemovePagesArray, 0x10uLL, IopRemovePagesRunsSort);
    v1 = (unsigned int *)IopRemovePagesArray;
    v2 = 1;
    v3 = *(_DWORD *)IopRemovePagesArray;
    if ( *(_DWORD *)IopRemovePagesArray > 1u )
    {
      v4 = (unsigned __int64 *)(IopRemovePagesArray + 8);
      v5 = IopRemovePagesArray;
      do
      {
        v6 = *v4;
        v7 = *v4 + *(_QWORD *)(v5 + 16);
        v8 = *(_QWORD *)&v1[4 * v2 + 2];
        v9 = v8 + *(_QWORD *)&v1[4 * v2 + 4];
        if ( v7 - 1 < v8 - 1 )
        {
          v5 = (__int64)&v1[4 * ++v0];
          v4 = (unsigned __int64 *)(v5 + 8);
          *(_OWORD *)(v5 + 8) = *(_OWORD *)&v1[4 * v2 + 2];
        }
        else
        {
          if ( v6 >= v8 )
            v6 = *(_QWORD *)&v1[4 * v2 + 2];
          *v4 = v6;
          if ( v7 - 1 <= v9 - 1 )
            v7 = v9;
          *(_QWORD *)(v5 + 16) = v7 - v6;
        }
        v3 = *v1;
        ++v2;
      }
      while ( v2 < *v1 );
    }
    memset_0(&v1[4 * (v0 + 1) + 2], 0, 16LL * (v3 + ~v0));
    *v1 = v0 + 1;
  }
}
