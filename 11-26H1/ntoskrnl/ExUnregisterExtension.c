/*
 * XREFs of ExUnregisterExtension @ 0x140846E60
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpDereferenceHost @ 0x140846F98 (ExpDereferenceHost.c)
 *     ExpVerifyCallbackResult @ 0x140847018 (ExpVerifyCallbackResult.c)
 */

__int64 __fastcall ExUnregisterExtension(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rdi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbp
  unsigned int v10; // eax
  unsigned __int64 Count; // rax
  unsigned int v12; // eax

  CurrentThread = KeGetCurrentThread();
  p_Count = &a1[4].Count;
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&a1[4], 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Count, v7, (__int64)p_Count);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( a1[8].Count )
  {
    v10 = guard_dispatch_icall_no_overrides(2LL, a1[9].Count);
    ExpVerifyCallbackResult(2LL, v10);
  }
  ExWaitForRundownProtectionRelease(a1 + 11);
  Count = a1[8].Count;
  a1[12].Count = 0LL;
  a1[7].Count = 0LL;
  if ( Count )
  {
    v12 = guard_dispatch_icall_no_overrides(3LL, a1[9].Count);
    ExpVerifyCallbackResult(3LL, v12);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Count, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_Count);
  KeAbPostRelease((unsigned __int64)p_Count);
  KeLeaveCriticalRegion();
  return ExpDereferenceHost(a1);
}
