/*
 * XREFs of PopAcquireUmpoPushLock @ 0x140AE230C
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140AA77A8 (PopUmpoProcessMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PopPdcDeviceListLock.116 + 4, 0LL, 0LL, a4);
    v6 = v7;
    if ( _interlockedbittestandset64((_DWORD *)&PopPdcDeviceListLock.0 + 1, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)((char *)&PopPdcDeviceListLock.116 + 4),
        v7,
        (__int64)&PopPdcDeviceListLock.116 + 4);
  }
  else
  {
    v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopPdcDeviceListLock.116 + 4, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)((char *)&PopPdcDeviceListLock.116 + 4), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)((char *)&PopPdcDeviceListLock.116 + 4),
        0,
        v6,
        (struct _KTHREAD *)((char *)&PopPdcDeviceListLock.116 + 4));
  }
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
}
