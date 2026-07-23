/*
 * XREFs of SepDeReferenceSharedSidEntries @ 0x1409E45E0
 * Callers:
 *     SepFreeTokenCapabilities @ 0x1404A0930 (SepFreeTokenCapabilities.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x140471000 (RtlRemoveEntryHashTable.c)
 *     SepFindSharedSidEntry @ 0x1409E470C (SepFindSharedSidEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeReferenceSharedSidEntries(PSID *a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbp
  unsigned __int64 *v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  __int64 v11; // rsi
  __int64 SharedSidEntry; // rax
  void *v13; // rdi
  __int64 v14; // rcx
  volatile signed __int64 *p_Lock; // rdi

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)g_SepSidMapping;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)g_SepSidMapping, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( (_DWORD)v6 )
  {
    v11 = v6;
    do
    {
      SharedSidEntry = SepFindSharedSidEntry(*a1);
      v13 = (void *)SharedSidEntry;
      v14 = _InterlockedDecrement64((volatile signed __int64 *)(SharedSidEntry + 24));
      if ( v14 <= 0 )
      {
        if ( v14 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(
               (PRTL_DYNAMIC_HASH_TABLE)g_SepSidMapping->Header.WaitListHead.Flink,
               (PRTL_DYNAMIC_HASH_TABLE_ENTRY)SharedSidEntry,
               0LL) )
        {
          ExFreePoolWithTag(v13, 0);
        }
      }
      a1 += 2;
      --v11;
    }
    while ( v11 );
  }
  p_Lock = (volatile signed __int64 *)&g_SepSidMapping->Header.Lock;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&g_SepSidMapping->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(p_Lock);
  KeAbPostRelease((unsigned __int64)p_Lock);
  KeLeaveCriticalRegion();
}
