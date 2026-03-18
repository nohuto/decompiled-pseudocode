/*
 * XREFs of PpmHeteroReevaluateMultiCoreFeatures @ 0x14050B9B8
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A9DA10 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

__int64 PpmHeteroReevaluateMultiCoreFeatures()
{
  int v0; // eax
  __int64 result; // rax

  v0 = PpmHeteroMultiCoreClassesRegValue;
  if ( PpmHeteroMultiCoreClassesRegValue == -1 )
    v0 = 1;
  PpmHeteroMultiCoreClassesEnabled = v0;
  result = (unsigned int)PpmHeteroMultiClassParkingRegValue;
  if ( PpmHeteroMultiClassParkingRegValue == -1 )
    result = 1LL;
  PpmHeteroMultiClassParkingEnabled = result;
  return result;
}
