/*
 * XREFs of MiGetPhysicalMemoryRanges @ 0x14086C784
 * Callers:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140B4F390 (MmGetPhysicalMemoryRangesEx2.c)
 * Callees:
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiLockDynamicMemoryShared @ 0x1404C5110 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1404C9D60 (MiUnlockDynamicMemoryShared.c)
 *     MiGetFileOnlyRanges @ 0x1406EDB28 (MiGetFileOnlyRanges.c)
 *     MiRebuildPartitionMemoryBlock @ 0x14070E274 (MiRebuildPartitionMemoryBlock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetPhysicalMemoryRanges(ULONG *a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned int *v12; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // rbp
  __int64 v15; // rsi
  char *v16; // r15
  char *FileOnlyRanges; // rax
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v20; // r13
  _QWORD *v21; // rdi
  __int64 *v22; // rdx
  __int64 v23; // rax
  size_t v24; // rsi
  char v25; // [rsp+68h] [rbp+10h]
  __int64 v26; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  v6 = (__int64)a1;
  v7 = a2 & 1;
  if ( (a2 & 1) != 0 || a1 != &MiSystemPartition )
  {
    v25 = 1;
    while ( 1 )
    {
      MiLockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread, a3, a4);
      if ( (ULONG *)v6 == &MiSystemPartition || !*(_QWORD *)(v6 + 22288) || *(_QWORD *)(v6 + 80) )
        break;
      MiUnlockDynamicMemoryShared(v6, (__int64)CurrentThread);
      if ( !MiRebuildPartitionMemoryBlock(v6, v8, v9, v10) )
        return 0LL;
      a1 = (ULONG *)v6;
    }
  }
  v12 = (unsigned int *)MiReferencePageRuns(v6, 0);
  v13 = (__int64)v12;
  if ( v12 )
    v14 = *v12 & (unsigned __int64)-(__int64)(*(_QWORD *)(v6 + 22288) != 0LL);
  else
    v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v26 = 0LL;
  if ( v7 )
  {
    FileOnlyRanges = MiGetFileOnlyRanges((__int16 *)v6, a2, &v26);
    v15 = v26;
    v16 = FileOnlyRanges;
  }
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 16 * (v14 + v15 + 1), 1750101325, CurrentProcessorColor | 0x80000000);
  v20 = PoolMm;
  if ( PoolMm )
  {
    v21 = (_QWORD *)PoolMm;
    if ( v14 )
    {
      v22 = (__int64 *)(v13 + 24);
      do
      {
        *v21 = *(v22 - 1) << 12;
        v23 = *v22;
        v22 += 2;
        v21[1] = v23 << 12;
        v21 += 2;
        --v14;
      }
      while ( v14 );
    }
    if ( v15 )
    {
      v24 = 16 * v15;
      memmove(v21, v16, v24);
      v21 = (_QWORD *)((char *)v21 + v24);
    }
    *v21 = 0LL;
    v21[1] = 0LL;
  }
  if ( v25 )
    MiUnlockDynamicMemoryShared(v6, (__int64)CurrentThread);
  if ( v13 )
    MiDereferencePageRuns(v13);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  return v20;
}
