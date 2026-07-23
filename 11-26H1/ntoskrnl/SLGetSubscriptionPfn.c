/*
 * XREFs of SLGetSubscriptionPfn @ 0x14083F698
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x140A770F8 (SLQueryLicenseValueInternal.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExpQueryLicenseValueFromBlobHelper @ 0x1404EACF8 (ExpQueryLicenseValueFromBlobHelper.c)
 *     _local_unwind @ 0x140538480 (_local_unwind.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SLGetSubscriptionPfn(__int64 a1, __int64 *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // r15
  unsigned int v6; // r13d
  struct _KLOCK_ENTRIES *v7; // r9
  int LicenseValueFromBlobHelper; // r12d
  struct _KTHREAD *v9; // rax
  signed __int64 *v10; // rsi
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v16; // rdx
  LegacyAutoBoost *v17; // rbx
  _OWORD *Pool2; // rax
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v20; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h]
  __int64 *v22; // [rsp+40h] [rbp-48h]
  AutoBoost *v24; // [rsp+A0h] [rbp+18h] BYREF

  v22 = &v19;
  v20 = 0;
  v5 = 0LL;
  P = 0LL;
  v6 = 0;
  LODWORD(v24) = 0;
  if ( *(_BYTE *)(a1 + 46856) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (signed __int64 *)(a1 + 46840);
    v17 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v10, 0, v17, (struct _KTHREAD *)v10);
    if ( v17 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v17, v16);
      else
        *((_BYTE *)v17 + 10) = 1;
    }
    if ( *(_BYTE *)(a1 + 46856) )
    {
      Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL);
      v5 = (__int64)Pool2;
      P = Pool2;
      if ( !Pool2 )
      {
        v20 = -1073741595;
        local_unwind(v22, &loc_14083F7DD);
      }
      *Pool2 = *(_OWORD *)(a1 + 46858);
      Pool2[1] = *(_OWORD *)(a1 + 46874);
      Pool2[2] = *(_OWORD *)(a1 + 46890);
      Pool2[3] = *(_OWORD *)(a1 + 46906);
      Pool2[4] = *(_OWORD *)(a1 + 46922);
      Pool2[5] = *(_OWORD *)(a1 + 46938);
      Pool2[6] = *(_OWORD *)(a1 + 46954);
      *(_OWORD *)(v5 + 112) = *(_OWORD *)(a1 + 46970);
      *(_WORD *)(v5 + 128) = *(_WORD *)(a1 + 46986);
    }
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
  }
  else
  {
    LicenseValueFromBlobHelper = ExpQueryLicenseValueFromBlobHelper(
                                   a1,
                                   (__int64)&qword_140BE0200,
                                   0LL,
                                   0LL,
                                   0,
                                   (__int64)&v24);
    v20 = LicenseValueFromBlobHelper;
    if ( LicenseValueFromBlobHelper == -1073741789 )
    {
      v6 = (unsigned int)v24;
      v5 = ExAllocatePool2(0x100uLL);
      P = (PVOID)v5;
      if ( !v5 || v6 > 0x82 )
      {
        v20 = -1073741595;
        goto LABEL_12;
      }
      LicenseValueFromBlobHelper = ExpQueryLicenseValueFromBlobHelper(
                                     a1,
                                     (__int64)&qword_140BE0200,
                                     0LL,
                                     (struct _KLOCK_ENTRIES *)v5,
                                     v6,
                                     (__int64)&v24);
      v20 = LicenseValueFromBlobHelper;
    }
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    v10 = (signed __int64 *)(a1 + 46840);
    v11 = (AutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, v7);
    v13 = v11;
    v24 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 46840), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 46840), v11, a1 + 46840);
      v13 = v24;
    }
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    if ( !*(_BYTE *)(a1 + 46856) )
    {
      if ( LicenseValueFromBlobHelper >= 0 )
        memmove((void *)(a1 + 46858), (const void *)v5, v6);
      if ( (int)(LicenseValueFromBlobHelper + 0x80000000) < 0 || LicenseValueFromBlobHelper == -1073741772 )
        *(_BYTE *)(a1 + 46856) = 1;
    }
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
  }
  KeAbPostRelease((unsigned __int64)v10);
  KeLeaveCriticalRegion();
  *a2 = v5;
  P = 0LL;
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v20;
}
