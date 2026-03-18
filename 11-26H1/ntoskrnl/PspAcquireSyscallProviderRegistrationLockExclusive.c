/*
 * XREFs of PspAcquireSyscallProviderRegistrationLockExclusive @ 0x1406145AC
 * Callers:
 *     PspDestroySyscallProvider @ 0x1407ED6D8 (PspDestroySyscallProvider.c)
 *     PspInsertSyscallProvider @ 0x1407ED8CC (PspInsertSyscallProvider.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall PspAcquireSyscallProviderRegistrationLockExclusive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  volatile unsigned __int8 *v6; // rdx
  AutoBoost *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.FirstArgument, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.FirstArgument, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PspSiloMonitorLock.FirstArgument,
      v5,
      (__int64)&PspSiloMonitorLock.FirstArgument);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v6) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v7 + 33), v6, 1);
    }
    else
    {
      *((_BYTE *)v7 + 10) = 1;
    }
  }
}
