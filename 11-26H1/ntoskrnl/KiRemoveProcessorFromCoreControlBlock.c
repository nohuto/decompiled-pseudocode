/*
 * XREFs of KiRemoveProcessorFromCoreControlBlock @ 0x1405F272C
 * Callers:
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405ED984 (KiFinalizeCoreControlBlockAssignment.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 */

char __fastcall KiRemoveProcessorFromCoreControlBlock(__int64 a1)
{
  unsigned __int8 *v1; // rbx
  unsigned int v2; // edi
  unsigned int v3; // edx
  __int64 v4; // rsi
  __int64 v5; // r8
  bool v6; // zf
  unsigned __int8 v7; // al
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // rdx

  v1 = *(unsigned __int8 **)(a1 + 36504);
  v2 = 0;
  v3 = 0;
  v4 = *((_QWORD *)v1 + 5);
  *(_QWORD *)(a1 + 36504) = 0LL;
  *(_QWORD *)(a1 + 44728) = 0LL;
  v5 = *v1;
  if ( *v1 )
  {
    do
    {
      if ( *(_QWORD *)&v1[8 * v3 + 8] == a1 )
        break;
      ++v3;
    }
    while ( v3 < (unsigned int)v5 );
  }
  *(_QWORD *)&v1[8 * v3 + 8] = *(_QWORD *)&v1[8 * v5];
  *(_QWORD *)&v1[8 * *v1] = 0LL;
  v7 = *v1 - 1;
  v6 = *v1 == 1;
  *v1 = v7;
  if ( !v6 )
    qsort(v1 + 8, v7, 8uLL, (int (__cdecl *)(const void *, const void *))KiComparePrcbLockOrdering);
  --*(_BYTE *)(v4 + 24);
  v8 = 0;
  LOBYTE(v9) = *v1;
  if ( *v1 )
  {
    do
    {
      *(_DWORD *)(*(_QWORD *)&v1[8 * v8 + 8] + 44724LL) = v8;
      ++v8;
      v9 = *v1;
    }
    while ( v8 < v9 );
    if ( (_BYTE)v9 )
    {
      do
      {
        v10 = v2++;
        *(_QWORD *)(v4 + 8 * v10 + 32) = *(unsigned int *)(*(_QWORD *)&v1[8 * v10 + 8] + 36LL);
        v9 = *v1;
      }
      while ( v2 < v9 );
    }
  }
  return v9;
}
