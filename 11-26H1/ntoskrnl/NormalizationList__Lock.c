/*
 * XREFs of NormalizationList__Lock @ 0x140629420
 * Callers:
 *     RtlpGetNormalization @ 0x140814CE4 (RtlpGetNormalization.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall NormalizationList__Lock(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  volatile unsigned __int8 *v6; // rdx
  AutoBoost *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&NormalizationListLock, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&NormalizationListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&NormalizationListLock, v5, (__int64)&NormalizationListLock);
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
