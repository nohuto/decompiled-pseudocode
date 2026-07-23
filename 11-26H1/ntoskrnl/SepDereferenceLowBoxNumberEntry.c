/*
 * XREFs of SepDereferenceLowBoxNumberEntry @ 0x140A9F480
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     SeExchangePrimaryToken @ 0x14081AC68 (SeExchangePrimaryToken.c)
 *     SeSetSessionIdToken @ 0x140AE5DDC (SeSetSessionIdToken.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 *     SepTokenDeleteMethod @ 0x140B85580 (SepTokenDeleteMethod.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x140471000 (RtlRemoveEntryHashTable.c)
 *     ExRemoveLowBoxAtomReferences @ 0x14049E814 (ExRemoveLowBoxAtomReferences.c)
 *     SepGetTokenSessionMapEntry @ 0x1404B1940 (SepGetTokenSessionMapEntry.c)
 *     RtlDereferenceAtomTable @ 0x14061C6CC (RtlDereferenceAtomTable.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceLowBoxNumberEntry(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int TokenSessionMapEntry; // r14d
  char *v7; // rdi
  struct _KTHREAD *v8; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbp
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rax
  void *v15; // rdx
  LegacyAutoBoost *v16; // rdi
  BOOLEAN v17; // bp
  char *v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = 0LL;
  TokenSessionMapEntry = 0;
  if ( a1 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v16 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&SepRmCapTableLock.Affinity, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock.Affinity, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&SepRmCapTableLock.Affinity,
        0,
        v16,
        (struct _KTHREAD *)&SepRmCapTableLock.Affinity);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    TokenSessionMapEntry = SepGetTokenSessionMapEntry(a1, 0, (__int64 *)&v18);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock.Affinity, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock.Affinity);
    KeAbPostRelease((unsigned __int64)&SepRmCapTableLock.Affinity);
    KeLeaveCriticalRegion();
    v7 = v18;
  }
  else
  {
    v7 = (char *)&SepRmCapTableLock.600 + 40 * a1;
  }
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7, v9, (__int64)v7);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v12 <= 0 )
  {
    if ( v12 )
      __fastfail(0xEu);
    v17 = RtlRemoveEntryHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)v7 + 3), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2, 0LL);
    if ( v17 )
      *(_BYTE *)(((unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 40) - 1) >> 3) + *((_QWORD *)v7 + 2)) &= ~(1 << ((*(_BYTE *)(a2 + 40) - 1) & 7));
    else
      TokenSessionMapEntry = -1073741823;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((unsigned __int64)v7);
    KeLeaveCriticalRegion();
    if ( v17 )
    {
      if ( *(_QWORD *)(a2 + 48) )
      {
        ExRemoveLowBoxAtomReferences();
        RtlDereferenceAtomTable(*(void **)(a2 + 48));
      }
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    return TokenSessionMapEntry;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((unsigned __int64)v7);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
