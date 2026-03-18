/*
 * XREFs of KeIsKernelCetEnabled @ 0x140483900
 * Callers:
 *     VslStartSecureProcessor @ 0x140792CA4 (VslStartSecureProcessor.c)
 *     PiIsDriverBlocked @ 0x140A250AC (PiIsDriverBlocked.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetEnabled()
{
  return (_BYTE)KiKernelCetEnabled != 0;
}
