/*
 * XREFs of MiUpdatePartitionLargePfnBitMap @ 0x14088314C
 * Callers:
 *     MiHotAddPartitionMemory @ 0x140882270 (MiHotAddPartitionMemory.c)
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 *     MiPartitionTransferAllocateFinish @ 0x140882BEC (MiPartitionTransferAllocateFinish.c)
 * Callees:
 *     MiLockDynamicMemoryExclusive @ 0x140529F60 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14052CC38 (MiUnlockDynamicMemoryExclusive.c)
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiUpdatePartitionLargePfnBitMap(__int64 a1, _QWORD **a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD **v10; // rcx
  __int64 v11; // r10
  _QWORD *v12; // rax
  _QWORD *i; // rcx
  _QWORD v15[3]; // [rsp+20h] [rbp-58h] BYREF
  int v16; // [rsp+38h] [rbp-40h]

  memset_0(v15, 0, 0x48uLL);
  v15[0] = a1;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread, v6, v7);
  v8 = *a2;
  v9 = 0LL;
  while ( v8 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
  }
  while ( v9 )
  {
    v10 = (_QWORD **)v9[1];
    v11 = (__int64)v9;
    v12 = v9;
    if ( v10 )
    {
      v9 = (_QWORD *)v9[1];
      for ( i = *v10; i; i = (_QWORD *)*i )
        v9 = i;
    }
    else
    {
      while ( 1 )
      {
        v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v9 || (_QWORD *)*v9 == v12 )
          break;
        v12 = v9;
      }
    }
    MiActOnPartitionNodePages(v11, 5u, 0, v15);
    if ( v16 < 0 )
    {
      v4 = v16;
      break;
    }
  }
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  return v4;
}
