/*
 * XREFs of KdDisableDebuggerWithLock @ 0x1405E6358
 * Callers:
 *     KdDisableDebugger @ 0x1405E6340 (KdDisableDebugger.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KdPowerTransitionEx @ 0x140503C90 (KdPowerTransitionEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KdpAllowDisable @ 0x140C1C37C (KdpAllowDisable.c)
 *     KdpSuspendAllBreakpoints @ 0x140C1CA90 (KdpSuspendAllBreakpoints.c)
 */

__int64 KdDisableDebuggerWithLock()
{
  unsigned __int8 CurrentIrql; // bl
  int v2; // edi

  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  KxAcquireSpinLock(&KdDebuggerLock);
  if ( KdDisableCount )
    goto LABEL_16;
  KdPreviouslyEnabled = (char)KdDebuggerEnabled;
  if ( !(_BYTE)KdDebuggerEnabled )
    goto LABEL_16;
  v2 = KdpAllowDisable();
  if ( v2 >= 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled )
    {
      KdpSuspendAllBreakpoints();
      *(_BYTE *)(MmWriteableSharedUserData + 724) = 0;
      LOBYTE(KdDebuggerNotPresent) = 1;
      LOBYTE(KdDebuggerEnabled) = 0;
      KdpDebugRoutineSelect = 0;
      KdPowerTransitionEx(1073741828, 0);
    }
LABEL_16:
    ++KdDisableCount;
    KxReleaseSpinLock(&KdDebuggerLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    v2 = 0;
    goto LABEL_19;
  }
  KxReleaseSpinLock(&KdDebuggerLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
LABEL_19:
  __writecr8(CurrentIrql);
  return (unsigned int)v2;
}
