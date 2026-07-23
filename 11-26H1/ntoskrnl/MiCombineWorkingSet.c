/*
 * XREFs of MiCombineWorkingSet @ 0x140709248
 * Callers:
 *     MiCombineIdenticalPages @ 0x140B4BC24 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiProcessSuitableForCombining @ 0x1403FD3DC (MiProcessSuitableForCombining.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiProcessCrcList @ 0x140A67C40 (MiProcessCrcList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r14
  unsigned int v5; // ebx
  int v6; // r12d
  void *v7; // rsi
  __int64 v8; // rdi
  int v9; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  ULONG_PTR v13; // rdi
  __int64 PoolMm; // rax
  __int128 v16; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v17; // [rsp+38h] [rbp-D0h]
  __int64 v18; // [rsp+48h] [rbp-C0h]
  int v19; // [rsp+58h] [rbp-B0h] BYREF
  char v20; // [rsp+60h] [rbp-A8h]
  char v21; // [rsp+61h] [rbp-A7h]
  __int64 v22; // [rsp+78h] [rbp-90h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall *v24)(__int64, _QWORD *, int); // [rsp+100h] [rbp-8h]
  __int64 (__fastcall *v25)(_QWORD); // [rsp+108h] [rbp+0h]
  __int128 *v26; // [rsp+110h] [rbp+8h]
  struct _KTHREAD *v27; // [rsp+148h] [rbp+40h]

  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  memset_0(&v19, 0, 0xC0uLL);
  v4 = *(_QWORD *)(a1 + 112);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 140);
  v7 = 0LL;
  v8 = v4 - 1024;
  v9 = 4;
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0 )
    v8 = 0LL;
  v27 = CurrentThread;
  v21 = MiLockWorkingSetShared(v4, v2, v3);
  if ( !v8 || (unsigned int)MiProcessSuitableForCombining(v8) )
  {
    v12 = *(_QWORD *)(v4 + 160);
    if ( v12 )
    {
      v13 = (40 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      while ( 1 )
      {
        PoolMm = ExAllocatePoolMm(
                   64LL,
                   v13,
                   1836405581,
                   KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
        v7 = (void *)PoolMm;
        if ( PoolMm )
          break;
        v13 >>= 1;
        if ( v13 < 0x10000 )
          goto LABEL_11;
      }
      *((_QWORD *)&v17 + 1) = a1;
      v18 = PoolMm;
      v26 = &v16;
      v24 = MiCombinePte;
      *(_QWORD *)&v17 = v13 / 0x28;
      LODWORD(v16) = v6;
      v22 = v4;
      v23 = -1LL;
      v25 = MiCombineWorkingSetTail;
      v19 = 6;
      v20 = 7;
      v9 = MiWalkPageTables((__int64)&v19);
    }
  }
LABEL_11:
  LOBYTE(v11) = v21;
  MiUnlockWorkingSetShared(v4, v11);
  if ( v7 )
  {
    if ( *((_QWORD *)&v16 + 1) )
      MiProcessCrcList(
        *((_QWORD *)&v17 + 1),
        v7,
        *((_QWORD *)&v16 + 1),
        *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[v27->IdealProcessor] + 192) + 138LL));
    ExFreePoolWithTag(v7, 0);
  }
  if ( v9 == 5 )
    return (unsigned int)-1073741248;
  return v5;
}
