/*
 * XREFs of VrpLockJobContextShared @ 0x140939A38
 * Callers:
 *     VrpPostEnumerateKey @ 0x140938960 (VrpPostEnumerateKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall VrpLockJobContextShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rdi
  void *v6; // rdx
  LegacyAutoBoost *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = (signed __int64 *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  v7 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 16, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v7, (struct _KTHREAD *)v5);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
