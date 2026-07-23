/*
 * XREFs of IoGetConfigurationInformation @ 0x140781670
 * Callers:
 *     DifIoGetConfigurationInformationWrapper @ 0x14065FD10 (DifIoGetConfigurationInformationWrapper.c)
 *     IopCreateArcNamesCd @ 0x140CC26E4 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140CC2C1C (IopCreateArcNamesDisk.c)
 *     IopGetBootDiskInformation @ 0x140CC4748 (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140D092A0 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_140FD6828;
}
