/*
 * XREFs of PspLookupSyscallProviderById @ 0x140617524
 * Callers:
 *     PspSyscallProviderOptIn @ 0x1407F35B0 (PspSyscallProviderOptIn.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     PspLookupSyscallProviderByIdNoLock @ 0x1407F34B0 (PspLookupSyscallProviderByIdNoLock.c)
 */

__int64 __fastcall PspLookupSyscallProviderById(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile unsigned __int8 *v7; // rdx
  _BYTE *v8; // rbx
  unsigned int v9; // ebx
  signed __int64 v10; // r11

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (_BYTE *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.FirstArgument, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.FirstArgument, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PspSiloMonitorLock.FirstArgument,
      0,
      (LegacyAutoBoost *)v8,
      (struct _KTHREAD *)&PspSiloMonitorLock.FirstArgument);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v7) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v8 + 33), v7, 1);
    }
    else
    {
      v8[10] = 1;
    }
  }
  v9 = PspLookupSyscallProviderByIdNoLock(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.FirstArgument, v10, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock.FirstArgument);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.FirstArgument);
  KeLeaveCriticalRegion();
  return v9;
}
