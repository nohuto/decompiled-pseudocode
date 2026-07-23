/*
 * XREFs of PopPowerAggregatorModernStandbyExitStateHandler @ 0x1409F2CB0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1409F2CF8 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPdcDisengagePhases @ 0x1409F4C8C (PopPdcDisengagePhases.c)
 *     PdcPoPerfOverride @ 0x1409F4CB8 (PdcPoPerfOverride.c)
 */

__int64 __fastcall PopPowerAggregatorModernStandbyExitStateHandler(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9

  if ( *(_BYTE *)(a1 + 72) )
  {
    PopPowerAggregatorDisengageModernStandby();
  }
  else
  {
    PoModernStandbyActionInProgress = 0;
    PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
    PdcPoPerfOverride();
    PopPdcDisengagePhases();
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v2, v3, v4);
  }
  return 0LL;
}
