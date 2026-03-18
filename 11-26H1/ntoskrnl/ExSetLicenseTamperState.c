/*
 * XREFs of ExSetLicenseTamperState @ 0x140837E90
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExpGetLicenseTamperState @ 0x1406CD17C (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x1406CD4F4 (ExpSetLicenseTamperState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ntoskrnl_20 @ 0x140A7E0D0 (ntoskrnl_20.c)
 */

void __fastcall ExSetLicenseTamperState(int a1)
{
  struct _KLOCK_ENTRIES *v2; // r9
  struct _LIST_ENTRY *Blink; // r14
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rsi
  bool v8; // si
  __int64 v9; // rdx
  struct _LIST_ENTRY *v10; // rcx
  _OWORD v11[3]; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+80h] [rbp+8h] BYREF

  v12 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (AutoBoost *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL, 0LL, v2);
    v7 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v5, (__int64)&Blink[2927].Blink);
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v7, v6);
      else
        *((_BYTE *)v7 + 10) = 1;
    }
    ExpGetLicenseTamperState((__int64)Blink, &v12);
    v8 = v12 == 0;
    ExpSetLicenseTamperState((__int64)Blink, a1);
    memset(v11, 0, sizeof(v11));
    ntoskrnl_20(Blink, v11, 32LL, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((unsigned __int64)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
    if ( v8 )
    {
      v10 = PsGetCurrentServerSiloGlobals()[54].Blink;
      if ( ExpPlatformBinaryLock.AbWaitObject )
        guard_dispatch_icall_no_overrides((__int64)v10, v9);
    }
  }
}
