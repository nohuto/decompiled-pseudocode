/*
 * XREFs of CmIsStateSeparationDevModeEnabled @ 0x140854798
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationDevModeEnabled()
{
  return LODWORD(WheapPfaLock.KernelStack) != 0;
}
