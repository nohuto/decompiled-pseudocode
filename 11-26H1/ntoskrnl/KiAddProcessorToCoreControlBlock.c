/*
 * XREFs of KiAddProcessorToCoreControlBlock @ 0x1405F1588
 * Callers:
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405ED984 (KiFinalizeCoreControlBlockAssignment.c)
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     qsort @ 0x140539380 (qsort.c)
 */

char __fastcall KiAddProcessorToCoreControlBlock(unsigned __int8 *a1, ULONG_PTR a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // edx

  *(_QWORD *)(a2 + 36504) = a1;
  v2 = *((_QWORD *)a1 + 5);
  *(_QWORD *)(a2 + 44728) = v2;
  v4 = *a1;
  if ( (unsigned __int8)v4 >= 4u )
    KeBugCheckEx(0x3Eu, a2, v4 + 1, 4uLL, 1uLL);
  *(_QWORD *)&a1[8 * v4 + 8] = a2;
  qsort(a1 + 8, ++*a1, 8uLL, (int (__cdecl *)(const void *, const void *))KiComparePrcbLockOrdering);
  ++*(_BYTE *)(v2 + 24);
  v5 = 0LL;
  LOBYTE(v6) = *a1;
  v7 = 0;
  if ( *a1 )
  {
    do
    {
      *(_DWORD *)(*(_QWORD *)&a1[8 * v7 + 8] + 44724LL) = v7;
      ++v7;
      v6 = *a1;
    }
    while ( v7 < v6 );
    if ( (_BYTE)v6 )
    {
      do
      {
        *(_QWORD *)(v2 + 8 * v5 + 32) = *(unsigned int *)(*(_QWORD *)&a1[8 * v5 + 8] + 36LL);
        v5 = (unsigned int)(v5 + 1);
        v6 = *a1;
      }
      while ( (unsigned int)v5 < v6 );
    }
  }
  return v6;
}
