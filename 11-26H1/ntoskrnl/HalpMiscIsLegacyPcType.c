/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x140584F1C
 * Callers:
 *     HalMakeBeep @ 0x14057EDA0 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x14057F824 (HalpPowerWriteResetCommand.c)
 *     HalpAcpiPostSleep @ 0x140BECAA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     <none>
 */

bool HalpMiscIsLegacyPcType()
{
  return !HalpDeviceBlockUnblockPushLock.WaitBlockFill6[104]
      || (HalpPlatformFlags & 1) != 0
      && (HalpPlatformFlags & 4) != 0
      && HalpVideoBiosPresent
      && (HalpPlatformFlags & 8) == 0;
}
