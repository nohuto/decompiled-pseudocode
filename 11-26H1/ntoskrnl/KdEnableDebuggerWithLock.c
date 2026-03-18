/*
 * XREFs of KdEnableDebuggerWithLock @ 0x1405E3B4C
 * Callers:
 *     KdEnableDebugger @ 0x1405E3B10 (KdEnableDebugger.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KdPowerTransitionEx @ 0x14050A220 (KdPowerTransitionEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 *     KdpRestoreAllBreakpoints @ 0x140C16A48 (KdpRestoreAllBreakpoints.c)
 */

__int64 __fastcall KdEnableDebuggerWithLock(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  int v4; // eax

  CurrentIrql = 0;
  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  if ( a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    KxAcquireSpinLock(&KdDebuggerLock);
  }
  v4 = KdDisableCount;
  if ( KdDisableCount )
  {
    --KdDisableCount;
    if ( v4 == 1 && KdPreviouslyEnabled )
    {
      if ( !a1 )
      {
        KdDisableTimerReset = 1;
        KdInitSystem(0LL, 0LL);
        KdpRestoreAllBreakpoints();
        KdDisableTimerReset = 0;
        return 0LL;
      }
      KdPowerTransitionEx(1073741825, 0);
      KdpDebugRoutineSelect = 1;
      LOBYTE(KdDebuggerEnabled) = 1;
      *(_BYTE *)(MmWriteableSharedUserData + 724) = 1;
      KdpRestoreAllBreakpoints();
    }
    else if ( !a1 )
    {
      return 0LL;
    }
    KxReleaseSpinLock(&KdDebuggerLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  if ( !a1 )
  {
    KdInitSystem(0LL, 0LL);
    return 0LL;
  }
  KxReleaseSpinLock(&KdDebuggerLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 3221225485LL;
}
