/*
 * XREFs of SmpKeyedStoreReference @ 0x140409CFC
 * Callers:
 *     SmPageWrite @ 0x140409AE4 (SmPageWrite.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     SmKmStoreReference @ 0x1402F04A0 (SmKmStoreReference.c)
 *     SmpKeyedStoreEntryGet @ 0x140409DF0 (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmpKeyedStoreReference(struct _KTHREAD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // esi
  LegacyAutoBoost *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8

  CurrentThread = KeGetCurrentThread();
  v7 = -1;
  --CurrentThread->KernelApcDisable;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&a1->Header.Lock, 0, v8, a1);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v8 + 33) |= 2u;
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = SmpKeyedStoreEntryGet(a1);
  v10 = v9;
  if ( v9 )
  {
    SmKmStoreReference(a2, *(unsigned __int16 *)(v9 + 16));
    v7 = *(unsigned __int16 *)(v10 + 16);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12);
  return v7;
}
