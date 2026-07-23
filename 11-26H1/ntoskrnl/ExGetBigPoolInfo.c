/*
 * XREFs of ExGetBigPoolInfo @ 0x140348148
 * Callers:
 *     EtwpPoolRunDown @ 0x140835BF8 (EtwpPoolRunDown.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAllocateHeapPages @ 0x1403480E0 (ExAllocateHeapPages.c)
 *     ExFreeHeapPages @ 0x1403483D8 (ExFreeHeapPages.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall ExGetBigPoolInfo(int a1, unsigned int *a2, unsigned int a3, unsigned int *a4, char a5)
{
  char *HeapPages; // rbx
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  _QWORD *v9; // r12
  KIRQL v10; // al
  KIRQL v11; // si
  __int64 v12; // rdi
  __int64 v13; // rdi
  char *v14; // rsi
  char *v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int *v19; // rcx
  _QWORD *v20; // rcx
  __int64 v22; // rcx
  unsigned __int64 v24; // [rsp+A8h] [rbp+10h]
  char *v25; // [rsp+A8h] [rbp+10h]

  HeapPages = 0LL;
  v7 = 0;
  v24 = 0LL;
  v8 = 8;
  v9 = a2 + 2;
  if ( a3 )
  {
    if ( a5 )
      RtlWriteULongToUser(a2, 0LL);
    else
      *a2 = 0;
  }
  while ( 1 )
  {
    v10 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    v11 = v10;
    v12 = PoolBigPageTableSize;
    if ( !PoolBigPageTable )
    {
      ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v10);
      if ( HeapPages )
        ExFreeHeapPages((ULONG_PTR)HeapPages);
      *a4 = 0;
      return 0LL;
    }
    if ( HeapPages && v24 >= PoolBigPageTableSize )
      break;
    v24 = PoolBigPageTableSize;
    ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v10);
    if ( HeapPages )
      ExFreeHeapPages((ULONG_PTR)HeapPages);
    HeapPages = (char *)ExAllocateHeapPages(v22, 32 * v12);
    if ( !HeapPages )
      return 3221225626LL;
  }
  v13 = 32 * PoolBigPageTableSize;
  memmove(HeapPages, PoolBigPageTable, 32 * PoolBigPageTableSize);
  ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v11);
  v14 = HeapPages;
  v15 = &HeapPages[v13];
  v25 = &HeapPages[v13];
  v16 = 0;
  while ( v14 < v15 )
  {
    if ( (*(_QWORD *)v14 & 1) == 0 )
    {
      if ( a3 )
        ++v16;
      v8 += 24;
      if ( v8 < 0x18 )
      {
        v7 = -1073741675;
        break;
      }
      if ( v8 <= a3 )
      {
        if ( a3 )
        {
          v17 = 0LL;
          if ( !a1 )
            v17 = *(_QWORD *)v14;
          if ( (*((_DWORD *)v14 + 3) & 0x10000) == 0 )
            v17 |= 1uLL;
          if ( a5 )
            RtlWriteULong64ToUser(v9, v17);
          else
            *v9 = v17;
          v18 = *((_DWORD *)v14 + 2);
          v19 = (unsigned int *)(v9 + 2);
          if ( a5 )
            RtlWriteULongToUser(v19, v18);
          else
            *v19 = v18;
          v20 = v9 + 1;
          if ( a5 )
            RtlWriteULong64ToUser(v20, *((_QWORD *)v14 + 2));
          else
            *v20 = *((_QWORD *)v14 + 2);
          v9 += 3;
        }
      }
      else
      {
        v7 = -1073741820;
      }
    }
    v14 += 32;
    v15 = v25;
  }
  if ( a5 )
    RtlWriteULongToUser(a2, v16);
  else
    *a2 = v16;
  ExFreeHeapPages((ULONG_PTR)HeapPages);
  *a4 = v8;
  return v7;
}
