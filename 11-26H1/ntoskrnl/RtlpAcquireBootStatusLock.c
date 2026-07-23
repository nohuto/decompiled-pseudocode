/*
 * XREFs of RtlpAcquireBootStatusLock @ 0x1404DD410
 * Callers:
 *     PopBootStatSet @ 0x140ACD7B0 (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140ACDFB0 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140B14C40 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140B53F84 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall RtlpAcquireBootStatusLock(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&RtlpBootStatHandleLock, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlpBootStatHandleLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&RtlpBootStatHandleLock, v5, (__int64)&RtlpBootStatHandleLock);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
