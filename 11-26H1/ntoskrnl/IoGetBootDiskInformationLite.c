/*
 * XREFs of IoGetBootDiskInformationLite @ 0x140796450
 * Callers:
 *     <none>
 * Callees:
 *     IopGetBootDiskInformationLite @ 0x140CBEB30 (IopGetBootDiskInformationLite.c)
 */

NTSTATUS __stdcall IoGetBootDiskInformationLite(PBOOTDISK_INFORMATION_LITE *BootDiskInformation)
{
  if ( (unsigned int)InitializationPhase < 2 )
    return IopGetBootDiskInformationLite(BootDiskInformation);
  else
    return -1073741431;
}
