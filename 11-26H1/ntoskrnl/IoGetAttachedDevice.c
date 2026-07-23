/*
 * XREFs of IoGetAttachedDevice @ 0x1404472B0
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140446FF4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404EBA90 (IoAdjustStackSizeForRedirection.c)
 *     PipSendGuestAssignedNotification @ 0x1407B7B78 (PipSendGuestAssignedNotification.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     NtUnlockFile @ 0x1409810F0 (NtUnlockFile.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     FsRtlQueryOpen @ 0x140ABD4B8 (FsRtlQueryOpen.c)
 *     IopShutdownBaseFileSystems @ 0x140BF750C (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x140C41D90 (VfFilterAttach.c)
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
