/*
 * XREFs of ExGetLicenseTamperState @ 0x140837D50
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExpGetLicenseTamperState @ 0x1406CD17C (ExpGetLicenseTamperState.c)
 */

bool __fastcall ExGetLicenseTamperState(_DWORD *a1)
{
  struct _LIST_ENTRY *Blink; // rbp
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v4; // r9
  void *v5; // rdx
  LegacyAutoBoost *v6; // rdi
  bool v7; // di
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL, 0LL, v4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2927].Blink, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&Blink[2927].Blink, 0, v6, (struct _KTHREAD *)&Blink[2927].Blink);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  ExpGetLicenseTamperState((__int64)Blink, &v9);
  v7 = v9 != 0;
  if ( a1 )
    *a1 = v9;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2927].Blink, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((unsigned __int64)&Blink[2927].Blink);
  KeLeaveCriticalRegion();
  return v7;
}
