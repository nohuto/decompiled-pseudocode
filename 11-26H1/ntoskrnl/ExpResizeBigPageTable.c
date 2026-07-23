/*
 * XREFs of ExpResizeBigPageTable @ 0x14029A9B8
 * Callers:
 *     ExpAddTagForBigPages @ 0x14029A5D0 (ExpAddTagForBigPages.c)
 * Callees:
 *     ExAllocateHeapPages @ 0x1403480E0 (ExAllocateHeapPages.c)
 *     ExpInsertPoolTracker @ 0x14034CF24 (ExpInsertPoolTracker.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ExpResizeBigPageTable(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  size_t v8; // rbp
  void *HeapPages; // rax
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rax
  unsigned int v12; // r9d
  _QWORD *v13; // rbx
  _QWORD *i; // rdx
  unsigned int v15; // edx
  __int64 j; // rax
  __int64 v17; // r9
  int v18; // eax
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // rax

  v3 = PoolBigPageTableSize;
  v5 = PoolBigPageTable;
  *a3 = 0LL;
  if ( v3 )
  {
    v7 = 2 * v3;
    if ( 2 * v3 <= v3 )
      return 0LL;
    if ( v7 > 0x7FFFFFFFFFFFFFFLL )
      return 0LL;
    v6 = (v3 << 6) + 4095;
    if ( v3 << 6 >= v6 )
      return 0LL;
  }
  else
  {
    v6 = 20479LL;
    v7 = 512LL;
  }
  v8 = v6 & 0xFFFFFFFFFFFFF000uLL;
  HeapPages = (void *)ExAllocateHeapPages(a1, v8);
  v10 = (unsigned __int64)HeapPages;
  if ( !HeapPages )
    return 0LL;
  memset_0(HeapPages, 0, v8);
  v11 = (_QWORD *)v10;
  do
  {
    *v11 = 1LL;
    v11 += 4;
  }
  while ( v11 != (_QWORD *)(v10 + 32 * v7) );
  v12 = v7 - 1;
  v13 = &v5[4 * v3];
  for ( i = v5; i != v13; i += 4 )
  {
    if ( (*i & 1) == 0 )
    {
      v20 = v12 & ((40543 * (*i >> 12)) ^ ((unsigned __int64)(40543LL * (*i >> 12)) >> 32));
      if ( (*(_BYTE *)(32LL * v20 + v10) & 1) == 0 )
      {
        do
        {
          v22 = v20 + 1;
          v23 = 0LL;
          if ( v22 <= v12 )
            v23 = v22;
          v20 = v23;
        }
        while ( (*(_BYTE *)(32 * v23 + v10) & 1) == 0 );
        v20 = v23;
      }
      v21 = 32LL * v20;
      *(_OWORD *)(v21 + v10) = *(_OWORD *)i;
      *(_OWORD *)(v21 + v10 + 16) = *((_OWORD *)i + 1);
    }
  }
  v15 = v12 & ((40543 * (v10 >> 12)) ^ ((40543 * (v10 >> 12)) >> 32));
  for ( j = v15; (*(_QWORD *)(32 * j + v10) & 1) == 0; v15 = j )
  {
    j = 0LL;
    if ( v15 + 1 <= v12 )
      j = v15 + 1;
  }
  v17 = 32LL * v15;
  strcpy((char *)(v17 + v10 + 8), "Pool");
  *(_QWORD *)(v17 + v10) = v10;
  v18 = *(_DWORD *)(v17 + v10 + 12);
  *(_QWORD *)(v17 + v10 + 16) = v8;
  *(_DWORD *)(v17 + v10 + 12) = (unsigned __int8)v18 | 0x4000;
  _InterlockedIncrement(&ExpPoolBigEntriesInUse);
  PoolBigPageTable = (void *)v10;
  PoolBigPageTableSize = v7;
  ExpInsertPoolTracker(1819242320LL, v8, 64LL, v10);
  if ( v5 )
    *v5 = 0LL;
  *a3 = v5;
  return 1LL;
}
