/*
 * XREFs of PspLockProcessThreadListShared @ 0x140444020
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140204CDC (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407F60E4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PsQueryProcessEnergyValues @ 0x1409CE2C0 (PsQueryProcessEnergyValues.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140AA4DE0 (PsQueryTotalCycleTimeProcess.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B643BC (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PspLockProcessThreadListShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  volatile signed __int64 *v4; // rdi
  LegacyAutoBoost *v5; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v4 = (volatile signed __int64 *)(a1 + 1504);
  v5 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 1504, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64(v4, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v4, 0, v5, (struct _KTHREAD *)v4);
  if ( v5 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  return result;
}
