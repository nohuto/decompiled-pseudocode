/*
 * XREFs of PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A370F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140A37138 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPdcDisengagePhases @ 0x140A390CC (PopPdcDisengagePhases.c)
 *     PdcPoPerfOverride @ 0x140A390F8 (PdcPoPerfOverride.c)
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
    BYTE2(stru_140F10828.WriteOperationCount) = 0;
    PopReleaseRwLock(&PopPowerAggregatorLock);
    PdcPoPerfOverride();
    PopPdcDisengagePhases();
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v2, v3, v4);
  }
  return 0LL;
}
