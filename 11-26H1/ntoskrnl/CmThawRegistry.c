/*
 * XREFs of CmThawRegistry @ 0x14085D580
 * Callers:
 *     NtThawRegistry @ 0x140856750 (NtThawRegistry.c)
 *     CmpFreezeThawWorker @ 0x14085D6E0 (CmpFreezeThawWorker.c)
 *     CmFreezeRegistry @ 0x140AE0F10 (CmFreezeRegistry.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x140468400 (CmpEnableLazyFlush.c)
 *     CmpLockFreezeQueue @ 0x14077354C (CmpLockFreezeQueue.c)
 *     CmpUnLockFreezeQueue @ 0x140773C7C (CmpUnLockFreezeQueue.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvMarkBaseBlockDirty @ 0x140AE1304 (HvMarkBaseBlockDirty.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
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
  KeCancelTimer(&CmpFreezeThawTimer);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v2, v1) )
  {
    CmpLockRegistryExclusive(v3);
    if ( HIDWORD(WheapPfaLock.SwapListEntry.Next) == 1 )
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
      HIDWORD(WheapPfaLock.SwapListEntry.Next) = 0;
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
