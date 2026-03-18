/*
 * XREFs of PopAcquireUmpoPushLock @ 0x140AE47FC
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140437684 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140AAA1C8 (PopUmpoProcessMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall PopAcquireUmpoPushLock(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rdx
  LegacyAutoBoost *v6; // rdi
  AutoBoost *v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PopModernStandbyStateNotify.WriteTransferCount, 0LL, 0LL, a4);
    v6 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&PopModernStandbyStateNotify.WriteTransferCount, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopModernStandbyStateNotify.WriteTransferCount,
        v7,
        (__int64)&PopModernStandbyStateNotify.WriteTransferCount);
  }
  else
  {
    v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopModernStandbyStateNotify.WriteTransferCount, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(&PopModernStandbyStateNotify.WriteTransferCount, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        &PopModernStandbyStateNotify.WriteTransferCount,
        0,
        v6,
        (struct _KTHREAD *)&PopModernStandbyStateNotify.WriteTransferCount);
  }
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
}
