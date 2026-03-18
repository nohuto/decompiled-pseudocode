/*
 * XREFs of IoGetConfigurationInformation @ 0x14077EB70
 * Callers:
 *     DifIoGetConfigurationInformationWrapper @ 0x14065C130 (DifIoGetConfigurationInformationWrapper.c)
 *     IopCreateArcNamesCd @ 0x140CBC66C (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140CBCBA4 (IopCreateArcNamesDisk.c)
 *     IopGetBootDiskInformation @ 0x140CBE678 (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140D02F00 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_140FD5818;
}
