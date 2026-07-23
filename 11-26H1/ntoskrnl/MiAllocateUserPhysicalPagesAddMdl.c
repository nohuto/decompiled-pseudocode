/*
 * XREFs of MiAllocateUserPhysicalPagesAddMdl @ 0x14087DD64
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x14087DC48 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     MiGetAweInfoPartition @ 0x1403C604C (MiGetAweInfoPartition.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiGetCrossPartitionCharges @ 0x1404AFEC8 (MiGetCrossPartitionCharges.c)
 *     MiLockAwePagesShared @ 0x1404E9C70 (MiLockAwePagesShared.c)
 *     MiUnlockAweVadsShared @ 0x1404F3F68 (MiUnlockAweVadsShared.c)
 *     MiFreeAwePagesFromMdl @ 0x140706390 (MiFreeAwePagesFromMdl.c)
 *     MiResizeAweBitMap @ 0x14087F5D8 (MiResizeAweBitMap.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateUserPhysicalPagesAddMdl(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rbp
  __int64 AweInfoPartition; // rax
  struct _KLOCK_ENTRIES *v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r12
  _KTHREAD *v11; // rax
  struct _KLOCK_ENTRIES *v12; // r9
  _KTHREAD *Thread; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v15; // r13
  __int64 v16; // r15
  ULONG_PTR v17; // r9
  int v18; // r13d
  _QWORD *v20; // r8
  unsigned __int64 v21; // r11
  __int64 v22; // r10
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rbx
  __int64 v25; // r9
  unsigned int v26; // edx
  unsigned __int64 v27; // [rsp+20h] [rbp-48h]
  unsigned __int64 v28; // [rsp+70h] [rbp+8h]
  __int64 v29; // [rsp+80h] [rbp+18h]
  unsigned __int64 v30; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD **)(a1 + 40);
  AweInfoPartition = MiGetAweInfoPartition((__int64)v3);
  v8 = (struct _KLOCK_ENTRIES *)(a3 + 6);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = AweInfoPartition;
  v30 = v9;
  v11 = 0LL;
  v27 = (unsigned __int64)*((unsigned int *)a3 + 10) >> 12;
  v12 = (struct _KLOCK_ENTRIES *)&a3[v27 + 6];
  do
  {
    Thread = v8->Thread;
    if ( v8->Thread <= v11 )
      Thread = v11;
    v8 = (struct _KLOCK_ENTRIES *)((char *)v8 + 8);
    v11 = Thread;
  }
  while ( v8 != v12 );
  CurrentThread = KeGetCurrentThread();
  v15 = *(_QWORD *)(a1 + 120);
  v16 = *(_QWORD *)(a1 + 112);
  v29 = v15;
  v28 = (unsigned __int64)Thread / v9;
  while ( 1 )
  {
    if ( !v15 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v16, v9, v12);
      if ( (*(_DWORD *)(v16 + 500) & 0x20) != 0 )
        break;
    }
    v17 = MiLockAwePagesShared((__int64)v3, (__int64)CurrentThread);
    if ( v28 < v3[3] )
    {
      v20 = a3 + 6;
      v21 = *(_QWORD *)(a1 + 24);
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL);
      v23 = (unsigned __int64)&a3[((unsigned __int64)*((unsigned int *)a3 + 10) >> 12) + 6];
      do
      {
        _InterlockedOr((volatile signed __int32 *)(v22 + 4 * ((*v20 / v21) >> 5)), 1 << ((*v20 / v21) & 0x1F));
        ++v20;
      }
      while ( v20 != (_QWORD *)v23 );
      MiUnlockAweVadsShared((__int64)CurrentThread, v17);
      if ( !v15 )
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v16);
      *a3 = *a2;
      *a2 = a3;
      v24 = v27 * v30;
      if ( (*(_DWORD *)a1 & 0x20) == 0 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(v10 + 23464), v24);
        if ( MiGetProcessPartition(*(_QWORD *)(a1 + 104)) != v10 )
        {
          v26 = 4;
          if ( v25 != 1 )
            v26 = 2;
          MiGetCrossPartitionCharges(v10, v26, 1, v24);
        }
      }
      a2[1] += v24;
      return 0LL;
    }
    MiUnlockAweVadsShared((__int64)CurrentThread, v17);
    if ( !v15 )
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v16);
    v18 = MiResizeAweBitMap(v3);
    if ( v18 < 0 && v28 >= v3[3] )
    {
      MiFreeAwePagesFromMdl((__int64)v3, (ULONG_PTR)a3);
      if ( a3 != a2 + 2 )
        ExFreePoolWithTag(a3, 0);
      return (unsigned int)v18;
    }
    v15 = v29;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v16);
  MiFreeAwePagesFromMdl((__int64)v3, (ULONG_PTR)a3);
  if ( a3 != a2 + 2 )
    ExFreePoolWithTag(a3, 0);
  return 3221225738LL;
}
