/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x14058743C
 * Callers:
 *     HalMakeBeep @ 0x1405812C0 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x140581D44 (HalpPowerWriteResetCommand.c)
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     <none>
 */

bool HalpMiscIsLegacyPcType()
{
  return !HalpDeviceBlockUnblockPushLock.WaitBlockFill6[72]
      || (HalpPlatformFlags & 1) != 0
      && (HalpPlatformFlags & 4) != 0
      && HalpVideoBiosPresent
      && (HalpPlatformFlags & 8) == 0;
}
