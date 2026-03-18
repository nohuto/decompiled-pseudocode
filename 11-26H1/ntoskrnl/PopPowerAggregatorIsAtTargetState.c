/*
 * XREFs of PopPowerAggregatorIsAtTargetState @ 0x140A3FBA8
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140A3F1C4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

bool PopPowerAggregatorIsAtTargetState()
{
  char v0; // dl

  v0 = 0;
  switch ( LODWORD(PopPowerAggregatorLock.QuantumTarget) )
  {
    case 0:
      return (PopPowerAggregatorLock.CycleTime & 0xFFFFFFFD) == 0;
    case 1:
      if ( LODWORD(PopPowerAggregatorLock.CycleTime) == 1 )
        return *(void *volatile *)&PopPowerAggregatorLock.CurrentRunTime == PopPowerAggregatorLock.StackLimit;
      break;
    case 2:
      return (PopPowerAggregatorLock.CycleTime & 0xFFFFFFFD) == 0;
    case 3:
      return LODWORD(PopPowerAggregatorLock.CycleTime) == 5;
  }
  return v0;
}
