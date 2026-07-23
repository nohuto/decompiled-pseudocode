/*
 * XREFs of SepIsParentOfChildAppContainer @ 0x14081CDAC
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x140816640 (SeIsParentOfChildAppContainer.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x1404B1940 (SepGetTokenSessionMapEntry.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x14081CBF0 (SepFindMatchingLowBoxNumberEntries.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409E4888 (RtlIsParentOfChildAppContainer.c)
 */

BOOLEAN __fastcall SepIsParentOfChildAppContainer(unsigned int a1, int a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  BOOLEAN IsParentOfChildAppContainer; // r12
  char v8; // bp
  char *v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void *v11; // rdx
  LegacyAutoBoost *v12; // rdi
  struct _KTHREAD *v13; // rax
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rsi
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v19; // [rsp+38h] [rbp-40h] BYREF
  char *v20; // [rsp+98h] [rbp+20h] BYREF

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
      v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&SepRmCapTableLock.Affinity, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock.Affinity, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&SepRmCapTableLock.Affinity,
          0,
          v12,
          (struct _KTHREAD *)&SepRmCapTableLock.Affinity);
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
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock.Affinity, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock.Affinity);
        KeAbPostRelease((unsigned __int64)&SepRmCapTableLock.Affinity);
        KeLeaveCriticalRegion();
        return IsParentOfChildAppContainer;
      }
      v9 = v20;
    }
    else
    {
      v9 = (char *)&SepRmCapTableLock.600 + 40 * a1;
    }
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v14 = (AutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, a4);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v9, v14, (__int64)v9);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    if ( (int)SepFindMatchingLowBoxNumberEntries(
                *((PRTL_DYNAMIC_HASH_TABLE *)v9 + 3),
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
