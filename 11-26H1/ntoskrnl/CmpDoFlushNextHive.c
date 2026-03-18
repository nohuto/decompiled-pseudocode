/*
 * XREFs of CmpDoFlushNextHive @ 0x1408B1C20
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B11FC (UNLOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1408B45EC (LOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408C52DC (CmpDoQueueLateUnloadWorker.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  char v5; // si
  struct _KTHREAD *v8; // rdi
  __int64 PriorityFloorCounts; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v13; // r8
  __int64 v14; // rcx

  v4 = -1LL;
  v5 = 0;
  if ( BYTE1(NlsMbOemCodePageTag) )
    return 0;
  v8 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
  CmpLockHiveListShared(a1, a2, a3, a4);
  do
  {
    v8 = *(struct _KTHREAD **)&v8->Header.Lock;
    PriorityFloorCounts = 0LL;
    if ( v8 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
      break;
    PriorityFloorCounts = (__int64)v8[-2].PriorityFloorCounts;
  }
  while ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v8->QuantumTarget) );
  CmpUnlockHiveList();
  if ( PriorityFloorCounts )
  {
    while ( 1 )
    {
      v11 = -1LL;
      if ( (*(_DWORD *)(PriorityFloorCounts + 160) & 3) == 0 )
      {
        if ( !*(_DWORD *)(PriorityFloorCounts + 104) && !*(_BYTE *)(PriorityFloorCounts + 195) )
        {
          if ( (*(_DWORD *)(PriorityFloorCounts + 4232) & 1) == 0 )
            CmpFlushHive(PriorityFloorCounts, 34LL);
          goto LABEL_11;
        }
        v10 = MEMORY[0xFFFFF780000003B0];
        v13 = *(_QWORD *)(PriorityFloorCounts + 4144) + 10000000LL * (unsigned int)dword_140E02160;
        if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] < v13 )
        {
          v11 = v13 - (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
          goto LABEL_26;
        }
        if ( (int)CmpFlushHive(PriorityFloorCounts, 18LL) < 0 )
        {
          *a1 = 1;
          v11 = 10000000LL * (unsigned int)dword_140E0216C;
LABEL_26:
          v5 = 1;
        }
      }
LABEL_11:
      if ( *(_BYTE *)(PriorityFloorCounts + 2952) == 1 )
      {
        LOCK_HIVE_LOAD(v10);
        CmpLockRegistryFreezeAware(0LL);
        if ( *(_BYTE *)(PriorityFloorCounts + 2952) == 1 )
          CmpDoQueueLateUnloadWorker(PriorityFloorCounts);
        CmpUnlockRegistry(v14);
        UNLOCK_HIVE_LOAD();
      }
      if ( v11 >= v4 )
        v11 = v4;
      v4 = v11;
      PriorityFloorCounts = CmpGetNextActiveHive(PriorityFloorCounts);
      if ( !PriorityFloorCounts )
      {
        if ( v5 )
          *a2 = v11;
        return v5;
      }
    }
  }
  return v5;
}
