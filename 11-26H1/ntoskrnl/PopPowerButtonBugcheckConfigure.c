/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x1407DAA14
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x1407DAB50 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x140CD502C (PopInitializePowerButtonHold.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PopQueryPowerButtonConfiguration @ 0x14060D13C (PopQueryPowerButtonConfiguration.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x140725870 (ZwNotifyChangeKey.c)
 */

void __fastcall PopPowerButtonBugcheckConfigure(HANDLE KeyHandle, char a2, _BYTE *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v6; // esi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  if ( a2 )
    v6 = (unsigned int)ZwNotifyChangeKey(KeyHandle, 0LL, qword_140F0C400, (PVOID)1, &IoStatusBlock, 4u, 0, 0LL, 0, 1u) >> 31;
  else
    LOBYTE(v6) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F0C428, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64(&stru_140F0C428.Header.Lock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F0C428, v8, (__int64)&stru_140F0C428);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  PopQueryPowerButtonConfiguration(KeyHandle, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F0C428, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F0C428.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140F0C428);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v6 )
    ZwClose(KeyHandle);
}
