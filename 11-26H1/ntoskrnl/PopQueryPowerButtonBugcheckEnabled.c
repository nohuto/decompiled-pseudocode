/*
 * XREFs of PopQueryPowerButtonBugcheckEnabled @ 0x140B56830
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14060CD70 (PopPowerButtonWorkCallback.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 */

__int64 __fastcall PopQueryPowerButtonBugcheckEnabled(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rdx
  LegacyAutoBoost *v6; // rbx
  unsigned int v7; // edi
  int v8; // esi
  unsigned int Flink; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140F0C428, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F0C428, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140F0C428.Header.Lock, 0, v6, &stru_140F0C428);
  v7 = 0;
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  v8 = dword_140F0C420;
  Flink = (unsigned int)stru_140F0C428.Header.WaitListHead.Flink;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F0C428, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140F0C428.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140F0C428);
  KeLeaveCriticalRegion();
  if ( v8 == 2 )
    v7 = 1;
  LOBYTE(PopModernStandbyStateNotify.Spare32) = v7;
  if ( (Flink & 1) != 0 && (Flink & 0xF0) - 32 > 0x40 )
  {
    Flink = Flink & 0xFFFFFF0F | 0x50;
    DbgPrintEx(
      0x92u,
      2u,
      "PopQueryPowerButtonBugcheckEnabled: PowerButtonLiveDump Timeout value is invalid or not specified. Set it to default.\n");
  }
  PopModernStandbyStateNotify.SchedulerAssistYieldCounter = Flink;
  DbgPrintEx(
    0x92u,
    2u,
    "PopQueryPowerButtonBugcheckEnabled completed with BugcheckEnabled: %d, BugcheckConfig: %08x, LiveDumpConfig: %08x\n",
    v7,
    v8,
    Flink);
  return v7;
}
