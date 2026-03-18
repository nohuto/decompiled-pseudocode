/*
 * XREFs of ExpQueryLicenseValueFromBlobHelper @ 0x1404F1718
 * Callers:
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x140838290 (ExpConsumeAddonPolicySetCacheProvider.c)
 *     SLGetSubscriptionPfn @ 0x140839458 (SLGetSubscriptionPfn.c)
 *     SLQueryLicenseValueInternal @ 0x140A6A758 (SLQueryLicenseValueInternal.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     sub_1408391D8 @ 0x1408391D8 (sub_1408391D8.c)
 */

__int64 __fastcall ExpQueryLicenseValueFromBlobHelper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v11; // rdi
  LegacyAutoBoost *v12; // rsi
  _DWORD *v13; // rax
  unsigned int v14; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (signed __int64 *)(a1 + 46840);
  v12 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, 0, v12, (struct _KTHREAD *)v11);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v12 + 33) |= 2u;
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( *(_BYTE *)(a1 + 46828) == 1 && !*(_DWORD *)(a1 + 46824) )
    goto LABEL_12;
  v13 = *(_DWORD **)a1;
  if ( !*(_QWORD *)a1 )
  {
    v13 = *(_DWORD **)(a1 + 46832);
    if ( !v13 )
      goto LABEL_9;
  }
  if ( *v13 == 24 )
  {
LABEL_12:
    v14 = -1073741772;
    goto LABEL_16;
  }
  if ( *v13 < 0x18u )
  {
LABEL_9:
    v14 = -1073741762;
    goto LABEL_16;
  }
  v14 = sub_1408391D8(a1, a2, a3, a4, a5, a6);
LABEL_16:
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  KeAbPostRelease((unsigned __int64)v11);
  KeLeaveCriticalRegion();
  return v14;
}
