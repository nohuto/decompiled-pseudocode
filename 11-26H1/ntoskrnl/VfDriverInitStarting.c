/*
 * XREFs of VfDriverInitStarting @ 0x140C20820
 * Callers:
 *     MiIssueDllInitializeCall @ 0x1408752E8 (MiIssueDllInitializeCall.c)
 *     PnpInitializeBootStartDriver @ 0x140D08CFC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
