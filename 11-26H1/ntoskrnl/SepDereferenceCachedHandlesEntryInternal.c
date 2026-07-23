/*
 * XREFs of SepDereferenceCachedHandlesEntryInternal @ 0x140A90EB0
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     SepSetTokenBnoIsolation @ 0x140ADE5CC (SepSetTokenBnoIsolation.c)
 *     SepDeleteCachedHandlesTable @ 0x140B00708 (SepDeleteCachedHandlesTable.c)
 *     SepTokenDeleteMethod @ 0x140B85580 (SepTokenDeleteMethod.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x140471000 (RtlRemoveEntryHashTable.c)
 *     SepCloseCachedTokenHandles @ 0x1404CE0A4 (SepCloseCachedTokenHandles.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntryInternal(
        struct _KTHREAD *a1,
        char a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbp
  __int64 v13; // rax
  BOOLEAN v15; // bp
  void *v16; // rcx

  v4 = 0;
  if ( !a1 || !a3 )
    return 0LL;
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
    v12 = v10;
    if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v10, (__int64)a1);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
  }
  v13 = _InterlockedDecrement64((volatile signed __int64 *)(a3 + 24));
  if ( v13 > 0 )
  {
    if ( !a2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
      KeAbPostRelease((unsigned __int64)a1);
      KeLeaveCriticalRegion();
    }
    if ( a4 )
      LOBYTE(a4->Thread) = 0;
    return 0LL;
  }
  if ( v13 )
    __fastfail(0xEu);
  v15 = RtlRemoveEntryHashTable(
          (PRTL_DYNAMIC_HASH_TABLE)a1->Header.WaitListHead.Flink,
          (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a3,
          0LL);
  if ( !a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    KeLeaveCriticalRegion();
  }
  if ( v15 )
  {
    SepCloseCachedTokenHandles(*(_DWORD *)(a3 + 56), *(HANDLE **)(a3 + 64));
    v16 = *(void **)(a3 + 64);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    ExFreePoolWithTag((PVOID)a3, 0);
  }
  else
  {
    v4 = -1073741823;
  }
  if ( a4 )
    LOBYTE(a4->Thread) = v15;
  return v4;
}
