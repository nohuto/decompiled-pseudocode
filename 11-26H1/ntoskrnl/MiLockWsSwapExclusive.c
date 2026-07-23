/*
 * XREFs of MiLockWsSwapExclusive @ 0x1403FE9A4
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403FDED0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x1403FE41C (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MiContractWsSwapPageFileWorker @ 0x140708F20 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall MiLockWsSwapExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  --*(_WORD *)(a1 + 486);
  v4 = (unsigned __int64 *)(a2 + 1280);
  v5 = (AutoBoost *)KeAbPreAcquire(a2 + 1280, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
