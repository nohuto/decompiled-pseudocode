/*
 * XREFs of VfDriverInitStarting @ 0x140C2682C
 * Callers:
 *     MiIssueDllInitializeCall @ 0x14087B6CC (MiIssueDllInitializeCall.c)
 *     PnpInitializeBootStartDriver @ 0x140D0EFCC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
