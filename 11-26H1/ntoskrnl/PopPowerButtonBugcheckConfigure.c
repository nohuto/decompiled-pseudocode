/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x1407DE904
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x1407DEA40 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x140CDB3CC (PopInitializePowerButtonHold.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PopQueryPowerButtonConfiguration @ 0x14061024C (PopQueryPowerButtonConfiguration.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14072A440 (ZwNotifyChangeKey.c)
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
    v6 = (unsigned int)ZwNotifyChangeKey(
                         KeyHandle,
                         0LL,
                         (PIO_APC_ROUTINE)&PopPdcDeviceListLock.Spare18,
                         (PVOID)1,
                         &IoStatusBlock,
                         4u,
                         0,
                         0LL,
                         0,
                         1u) >> 31;
  else
    LOBYTE(v6) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&PopPdcDeviceListLock.WaitStatus, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&PopPdcDeviceListLock.WaitStatus, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopPdcDeviceListLock.WaitStatus,
      v8,
      (__int64)&PopPdcDeviceListLock.WaitStatus);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  PopQueryPowerButtonConfiguration(KeyHandle, a3);
  if ( (_InterlockedExchangeAdd64(&PopPdcDeviceListLock.WaitStatus, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopPdcDeviceListLock.WaitStatus);
  KeAbPostRelease((unsigned __int64)&PopPdcDeviceListLock.WaitStatus);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v6 )
    ZwClose(KeyHandle);
}
