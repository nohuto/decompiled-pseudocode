/*
 * XREFs of PopQueryPowerButtonBugcheckEnabled @ 0x140B59530
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14060FE80 (PopPowerButtonWorkCallback.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 */

__int64 __fastcall PopQueryPowerButtonBugcheckEnabled(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rdx
  LegacyAutoBoost *v6; // rbx
  unsigned int v7; // edi
  int v8; // esi
  unsigned int WaitBlockList; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopPdcDeviceListLock.WaitStatus, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(&PopPdcDeviceListLock.WaitStatus, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopPdcDeviceListLock.WaitStatus,
      0,
      v6,
      (struct _KTHREAD *)&PopPdcDeviceListLock.WaitStatus);
  v7 = 0;
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  v8 = *(_DWORD *)&PopPdcDeviceListLock.ApcStateFill[40];
  WaitBlockList = (unsigned int)PopPdcDeviceListLock.WaitBlockList;
  if ( _InterlockedCompareExchange64(&PopPdcDeviceListLock.WaitStatus, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPdcDeviceListLock.WaitStatus);
  KeAbPostRelease((unsigned __int64)&PopPdcDeviceListLock.WaitStatus);
  KeLeaveCriticalRegion();
  if ( v8 == 2 )
    v7 = 1;
  PopPdcDeviceListLock.SchedulerApc.Type = v7;
  if ( (WaitBlockList & 1) != 0 && (WaitBlockList & 0xF0) - 32 > 0x40 )
  {
    WaitBlockList = WaitBlockList & 0xFFFFFF0F | 0x50;
    DbgPrintEx(
      0x92u,
      2u,
      "PopQueryPowerButtonBugcheckEnabled: PowerButtonLiveDump Timeout value is invalid or not specified. Set it to default.\n");
  }
  *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[16] = WaitBlockList;
  DbgPrintEx(
    0x92u,
    2u,
    "PopQueryPowerButtonBugcheckEnabled completed with BugcheckEnabled: %d, BugcheckConfig: %08x, LiveDumpConfig: %08x\n",
    v7,
    v8,
    WaitBlockList);
  return v7;
}
