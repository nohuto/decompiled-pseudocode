/*
 * XREFs of CmIsStateSeparationDevModeEnabled @ 0x14084E488
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationDevModeEnabled()
{
  return HIDWORD(WheapPfaLock.ThreadLock) != 0;
}
