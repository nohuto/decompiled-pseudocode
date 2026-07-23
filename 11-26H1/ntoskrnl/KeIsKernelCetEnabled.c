/*
 * XREFs of KeIsKernelCetEnabled @ 0x14047D230
 * Callers:
 *     VslStartSecureProcessor @ 0x1407957D4 (VslStartSecureProcessor.c)
 *     PiIsDriverBlocked @ 0x140A3814C (PiIsDriverBlocked.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetEnabled()
{
  return (_BYTE)KiKernelCetEnabled != 0;
}
