/*
 * XREFs of VfDriverInitStarting @ 0x140B72248
 * Callers:
 *     MiIssueDllInitializeCall @ 0x1407D77CC (MiIssueDllInitializeCall.c)
 *     PnpInitializeBootStartDriver @ 0x140C5421C (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
