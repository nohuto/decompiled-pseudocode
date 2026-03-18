/*
 * XREFs of CmThawRegistry @ 0x1408571F0
 * Callers:
 *     NtThawRegistry @ 0x140850440 (NtThawRegistry.c)
 *     CmpFreezeThawWorker @ 0x140857350 (CmpFreezeThawWorker.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x14046EC80 (CmpEnableLazyFlush.c)
 *     CmpLockFreezeQueue @ 0x14077054C (CmpLockFreezeQueue.c)
 *     CmpUnLockFreezeQueue @ 0x140770C7C (CmpUnLockFreezeQueue.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     HvMarkBaseBlockDirty @ 0x140AE37FC (HvMarkBaseBlockDirty.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 CmThawRegistry()
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 i; // rcx
  __int64 v6; // rax
  __int64 NextActiveHive; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rbx
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v15; // rcx

  v0 = 0;
  KeCancelTimer((PKTIMER)&CmpFreezeListLock.StackLimit);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v2, v1) )
  {
    CmpLockRegistryExclusive(v3);
    if ( *(_DWORD *)&WheapPfaLock.ApcStateFill[12] == 1 )
    {
      for ( i = 0LL; ; i = v12 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v12 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        v6 = *(_QWORD *)(NextActiveHive + 64);
        if ( !*(_DWORD *)(v6 + 164) )
        {
          *(_OWORD *)(v6 + 112) = *(_OWORD *)(v6 + 4056);
          *(_OWORD *)(*(_QWORD *)(v12 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v12 + 64) + 4040LL);
          *(_OWORD *)(*(_QWORD *)(v12 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v12 + 64) + 4072LL);
          *(_DWORD *)(*(_QWORD *)(v12 + 64) + 164LL) = 1836346738;
          if ( (*(_DWORD *)(v12 + 4120) & 0x300) != 0x100 && !*(_DWORD *)(v12 + 104) )
          {
            HvLockHiveWriter(v12);
            HvMarkBaseBlockDirty(v12);
            HvUnlockHiveWriter(v12);
          }
        }
      }
      while ( (struct _LIST_ENTRY **)CmpFreezeListLock.Header.WaitListHead.Blink != &CmpFreezeListLock.Header.WaitListHead.Blink )
      {
        CmpLockFreezeQueue(v9, v8, v10, v11);
        Blink = CmpFreezeListLock.Header.WaitListHead.Blink;
        if ( (struct _LIST_ENTRY **)CmpFreezeListLock.Header.WaitListHead.Blink->Blink != &CmpFreezeListLock.Header.WaitListHead.Blink
          || (Flink = CmpFreezeListLock.Header.WaitListHead.Blink->Flink,
              CmpFreezeListLock.Header.WaitListHead.Blink->Flink->Blink != CmpFreezeListLock.Header.WaitListHead.Blink) )
        {
          __fastfail(3u);
        }
        CmpFreezeListLock.Header.WaitListHead.Blink = CmpFreezeListLock.Header.WaitListHead.Blink->Flink;
        Flink->Blink = (struct _LIST_ENTRY *)&CmpFreezeListLock.Header.WaitListHead.Blink;
        CmpUnLockFreezeQueue();
        KeSetEvent((PRKEVENT)&Blink[1], 0, 0);
      }
      *(_DWORD *)&WheapPfaLock.ApcStateFill[12] = 0;
      CmpEnableLazyFlush(2);
    }
    else
    {
      v0 = -1073741431;
    }
    CmpUnlockRegistry(v4);
    CmpReleaseShutdownRundown(v15);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v0;
}
