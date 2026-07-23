/*
 * XREFs of KeUpdateDpcWatchdogConfiguration @ 0x1405EB7C0
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCreateDpcLimitsProcessorConfiguration @ 0x1405EBA0C (KiCreateDpcLimitsProcessorConfiguration.c)
 *     KiValidateDpcWatchdogConfiguration @ 0x1405EBBF8 (KiValidateDpcWatchdogConfiguration.c)
 *     KiApplyDpcVerificationScaleSettings @ 0x1405ECBA4 (KiApplyDpcVerificationScaleSettings.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KeUpdateDpcWatchdogConfiguration(void *Src, size_t Size, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // r15d
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  AutoBoost *v9; // rdi
  int v10; // edx
  int v11; // edi
  unsigned __int8 CurrentIrql; // si
  unsigned int v13; // r14d
  unsigned int v14; // edi
  __int64 v15; // rdx
  _OWORD v17[2]; // [rsp+40h] [rbp-30h] BYREF

  memset(v17, 0, sizeof(v17));
  v4 = Size;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&KiDpcWatchdogConfigurationLock, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&KiDpcWatchdogConfigurationLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&KiDpcWatchdogConfigurationLock,
      v7,
      (__int64)&KiDpcWatchdogConfigurationLock);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v8) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v9 + 33), v8, 1);
    }
    else
    {
      *((_BYTE *)v9 + 10) = 1;
    }
  }
  v11 = KiValidateDpcWatchdogConfiguration(Src, v4);
  if ( v11 >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v10);
    }
    v13 = KeDpcWatchdogProfileBufferSizeBytes;
    v14 = KeDpcWatchdogProfileBufferSizeBytes;
    if ( !KeDpcWatchdogProfileBufferSizeBytes
      && (KeDpcWatchdogProfileSingleDpcThresholdMs || KeDpcWatchdogProfileCumulativeDpcThresholdMs) )
    {
      v14 = 266240;
    }
    KeDpcWatchdogProfileBufferSizeBytes = v14;
    dword_140FBF3EC = v14 >> 3;
    KiApplyDpcVerificationScaleSettings();
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    KiCreateDpcLimitsProcessorConfiguration(v17, v13, v14);
    KeGenericProcessorCallback(
      (__int64 *)&stru_140FC11F0.WaitRegister,
      (__int64)KiUpdateProcessorDpcWatchdogConfiguration,
      (__int64)v17,
      2);
    v11 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&KiDpcWatchdogConfigurationLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15);
  return (unsigned int)v11;
}
