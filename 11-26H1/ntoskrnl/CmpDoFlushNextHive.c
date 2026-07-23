/*
 * XREFs of CmpDoFlushNextHive @ 0x1408B8230
 * Callers:
 *     <none>
 * Callees:
 *     UNLOCK_HIVE_LOAD @ 0x1408B7808 (UNLOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1408BABC0 (LOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408CB8AC (CmpDoQueueLateUnloadWorker.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // si
  __int64 v6; // rcx
  __int64 NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // r8
  __int64 v11; // rcx

  v2 = -1LL;
  v3 = 0;
  if ( BYTE1(NlsMbOemCodePageTag) )
    return 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v8 = -1LL;
      if ( (*(_DWORD *)(NextActiveHive + 160) & 3) == 0 )
      {
        if ( *(_DWORD *)(NextActiveHive + 104) || *(_BYTE *)(NextActiveHive + 195) )
        {
          v6 = MEMORY[0xFFFFF780000003B0];
          v10 = *(_QWORD *)(NextActiveHive + 4144) + 10000000LL * (unsigned int)dword_140E02160;
          if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] < v10 )
          {
            v3 = 1;
            v8 = v10 - (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
          }
          else if ( (int)CmpFlushHive(NextActiveHive, 18LL) < 0 )
          {
            v3 = 1;
            *a1 = 1;
            v8 = 10000000LL * (unsigned int)dword_140E0216C;
          }
        }
        else if ( (*(_DWORD *)(NextActiveHive + 4232) & 1) == 0 )
        {
          CmpFlushHive(NextActiveHive, 34LL);
        }
      }
      if ( *(_BYTE *)(NextActiveHive + 2952) == 1 )
      {
        LOCK_HIVE_LOAD(v6);
        CmpLockRegistryFreezeAware(0LL);
        if ( *(_BYTE *)(NextActiveHive + 2952) == 1 )
          CmpDoQueueLateUnloadWorker(NextActiveHive);
        CmpUnlockRegistry(v11);
        UNLOCK_HIVE_LOAD();
      }
      if ( v8 >= v2 )
        v8 = v2;
      v2 = v8;
      NextActiveHive = CmpGetNextActiveHive(NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v3 )
      *a2 = v8;
  }
  return v3;
}
