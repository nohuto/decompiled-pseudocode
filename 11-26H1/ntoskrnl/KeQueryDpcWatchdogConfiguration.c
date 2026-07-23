/*
 * XREFs of KeQueryDpcWatchdogConfiguration @ 0x1405111C4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall KeQueryDpcWatchdogConfiguration(void *a1, size_t Size, int a3, struct _KLOCK_ENTRIES *a4)
{
  size_t v5; // r14
  unsigned int v7; // ebx
  char PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rax
  volatile unsigned __int8 *v10; // rdx
  _BYTE *v11; // rsi
  signed __int64 v12; // r9
  int v13; // edi
  __int64 v14; // rdx
  __int128 Src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+40h] [rbp-48h]

  v5 = (unsigned int)Size;
  Src = 0LL;
  v17 = 0LL;
  if ( a3 != 228 )
  {
    if ( a3 != 229 )
      return (unsigned int)-1073741811;
    if ( (_DWORD)Size == 32 )
    {
      LODWORD(Src) = 2;
      goto LABEL_9;
    }
    return (unsigned int)-1073741820;
  }
  if ( (_DWORD)Size != 20 )
    return (unsigned int)-1073741820;
  LODWORD(Src) = 1;
LABEL_9:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (_BYTE *)KeAbPreAcquire((__int64)&KiDpcWatchdogConfigurationLock, 0LL, 0LL, a4);
  v12 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&KiDpcWatchdogConfigurationLock.Header.Lock,
      0,
      (LegacyAutoBoost *)v11,
      &KiDpcWatchdogConfigurationLock);
    v12 = 17LL;
  }
  v7 = 0;
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v10) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v11 + 33), v10, 1);
    }
    else
    {
      v11[10] = 1;
    }
  }
  v13 = a3 - 228;
  if ( !v13 )
    goto LABEL_23;
  if ( v13 == 1 )
  {
    if ( KeDpcWatchdogProfileSingleDpcThresholdMs )
    {
      LODWORD(Src) = Src | 0x1000;
      DWORD1(v17) = KeDpcWatchdogProfileSingleDpcThresholdMs;
    }
    if ( KeDpcWatchdogProfileCumulativeDpcThresholdMs )
    {
      LODWORD(Src) = Src | 0x2000;
      DWORD2(v17) = KeDpcWatchdogProfileCumulativeDpcThresholdMs;
    }
    if ( KeDpcWatchdogProfileBufferSizeBytes )
    {
      LODWORD(Src) = Src | 0x4000;
      HIDWORD(v17) = KeDpcWatchdogProfileBufferSizeBytes;
    }
LABEL_23:
    if ( KeDpcTimeoutMs )
    {
      LODWORD(Src) = Src | 0x100;
      DWORD1(Src) = KeDpcTimeoutMs;
    }
    if ( KeDpcWatchdogPeriodMs )
    {
      LODWORD(Src) = Src | 0x200;
      DWORD2(Src) = KeDpcWatchdogPeriodMs;
    }
    if ( KeDpcSoftTimeoutMs )
    {
      LODWORD(Src) = Src | 0x400;
      HIDWORD(Src) = KeDpcSoftTimeoutMs;
    }
    if ( KeDpcCumulativeSoftTimeoutMs )
    {
      LODWORD(Src) = Src | 0x800;
      LODWORD(v17) = KeDpcCumulativeSoftTimeoutMs;
    }
  }
  if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 0LL, v12) )
    ExfReleasePushLockShared((signed __int64 *)&KiDpcWatchdogConfigurationLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&KiDpcWatchdogConfigurationLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14);
  if ( PreviousMode )
    RtlCopyToUser(a1, &Src, v5);
  else
    RtlCopyVolatileMemory(a1, &Src, v5);
  return v7;
}
