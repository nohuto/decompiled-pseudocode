/*
 * XREFs of PopPowerAggregatorScreenOffExitStateHandler @ 0x1409F4630
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1409F46A8 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1409F48F0 (PopPowerAggregatorSetCurrentState.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x1409F540C (PopPdcAreAllPhasesDisengaged.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffExitStateHandler(__int64 a1)
{
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  _OWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 32) )
  {
    PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
    v3 = PopPdcAreAllPhasesDisengaged();
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v4, v5, v6);
    if ( v3 )
    {
      memset(v7, 0, sizeof(v7));
      LODWORD(v7[0]) = 3;
      PopPowerAggregatorSetCurrentState(a1, v7);
    }
  }
  else
  {
    PopPowerAggregatorEnterScreenOff();
  }
  return 0LL;
}
