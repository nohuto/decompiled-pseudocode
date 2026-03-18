/*
 * XREFs of SepIsParentOfChildAppContainer @ 0x140816B9C
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x140810BB0 (SeIsParentOfChildAppContainer.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x1404B8110 (SepGetTokenSessionMapEntry.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x1408169E0 (SepFindMatchingLowBoxNumberEntries.c)
 *     RtlIsParentOfChildAppContainer @ 0x140A8F93C (RtlIsParentOfChildAppContainer.c)
 */

char __fastcall SepIsParentOfChildAppContainer(unsigned int a1, int a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  char IsParentOfChildAppContainer; // r12
  char v8; // bp
  unsigned __int64 *v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void *v11; // rdx
  LegacyAutoBoost *v12; // rdi
  struct _KTHREAD *v13; // rax
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rsi
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v19; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 *v20; // [rsp+98h] [rbp+20h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  IsParentOfChildAppContainer = 0;
  v8 = 0;
  if ( a2 && a3 )
  {
    if ( a1 >= 5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&SepRmCapTableLock.ThreadListEntry.Blink, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink,
          0,
          v12,
          (struct _KTHREAD *)&SepRmCapTableLock.ThreadListEntry.Blink);
      if ( v12 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v12, v11);
        else
          *((_BYTE *)v12 + 10) = 1;
      }
      v8 = 1;
      if ( (int)SepGetTokenSessionMapEntry(a1, 0, (__int64 *)&v20) < 0 )
      {
LABEL_24:
        if ( _InterlockedCompareExchange64(
               (volatile signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink,
               0LL,
               17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink);
        KeAbPostRelease((unsigned __int64)&SepRmCapTableLock.ThreadListEntry.Blink);
        KeLeaveCriticalRegion();
        return IsParentOfChildAppContainer;
      }
      v9 = v20;
    }
    else
    {
      v9 = &SepRmCapTableLock.AffinityVersion + 5 * a1;
    }
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v14 = (AutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, a4);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v14, (__int64)v9);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    if ( (int)SepFindMatchingLowBoxNumberEntries(
                (PRTL_DYNAMIC_HASH_TABLE)v9[3],
                a2,
                a3,
                &v19,
                (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v18) >= 0 )
      IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(v19[1].Linkage.Blink, *(PSID *)(v18 + 32));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((unsigned __int64)v9);
    KeLeaveCriticalRegion();
    if ( !v8 )
      return IsParentOfChildAppContainer;
    goto LABEL_24;
  }
  return 0;
}
