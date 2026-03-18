/*
 * XREFs of PspLockSyscallProviderExclusive @ 0x140614664
 * Callers:
 *     PspAttachProcessToSyscallProvider @ 0x1407ED5EC (PspAttachProcessToSyscallProvider.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall PspLockSyscallProviderExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v6; // rax
  volatile unsigned __int8 *v7; // rdx
  AutoBoost *v8; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 64);
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire(a1 + 64, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v7) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v8 + 33), v7, 1);
    }
    else
    {
      *((_BYTE *)v8 + 10) = 1;
    }
  }
}
