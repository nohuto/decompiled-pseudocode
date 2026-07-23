/*
 * XREFs of CmFcManagerRegisterFeatureUsageProvider @ 0x140B55350
 * Callers:
 *     wil_details_RegisterFeatureUsageProvider @ 0x14085B514 (wil_details_RegisterFeatureUsageProvider.c)
 *     RtlRegisterFeatureUsageProvider @ 0x140B55330 (RtlRegisterFeatureUsageProvider.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CmFcpManagerAllocateUsageProviderSubscription @ 0x14077C144 (CmFcpManagerAllocateUsageProviderSubscription.c)
 */

__int64 __fastcall CmFcManagerRegisterFeatureUsageProvider(__int64 a1, __int64 a2, __int64 a3, char **a4)
{
  unsigned int v5; // edi
  char *UsageProviderSubscription; // rsi
  struct _KLOCK_ENTRIES *v7; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // rbp
  char **v13; // rax

  v5 = 0;
  UsageProviderSubscription = CmFcpManagerAllocateUsageProviderSubscription(a1, a2, a3);
  if ( UsageProviderSubscription )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140EFBCA8, 0LL, 0LL, v7);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EFBCA8, 0LL);
    v12 = v9;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EFBCA8, v9, (__int64)&stru_140EFBCA8);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v10);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v13 = (char **)qword_140EFBE70;
    if ( *(__int64 **)qword_140EFBE70 != &qword_140EFBE68 )
      __fastfail(3u);
    *(_QWORD *)UsageProviderSubscription = &qword_140EFBE68;
    *((_QWORD *)UsageProviderSubscription + 1) = v13;
    *v13 = UsageProviderSubscription;
    qword_140EFBE70 = (__int64)UsageProviderSubscription;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EFBCA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EFBCA8);
    KeAbPostRelease((unsigned __int64)&stru_140EFBCA8);
    KeLeaveCriticalRegion();
    *a4 = UsageProviderSubscription;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
