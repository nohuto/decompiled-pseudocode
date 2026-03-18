/*
 * XREFs of IoGetAttachedDevice @ 0x14044F180
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14044EEC4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404F24B0 (IoAdjustStackSizeForRedirection.c)
 *     PipSendGuestAssignedNotification @ 0x1407B4B18 (PipSendGuestAssignedNotification.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     NtUnlockFile @ 0x1409B0030 (NtUnlockFile.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     FsRtlQueryOpen @ 0x140ABB7B4 (FsRtlQueryOpen.c)
 *     IopShutdownBaseFileSystems @ 0x140BF150C (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x140C3BD80 (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDevice(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  PDEVICE_OBJECT result; // rax

  AttachedDevice = DeviceObject->AttachedDevice;
  if ( !AttachedDevice )
    return DeviceObject;
  do
  {
    result = AttachedDevice;
    AttachedDevice = AttachedDevice->AttachedDevice;
  }
  while ( AttachedDevice );
  return result;
}
