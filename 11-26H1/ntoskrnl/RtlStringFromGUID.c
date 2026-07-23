/*
 * XREFs of RtlStringFromGUID @ 0x1409F98E0
 * Callers:
 *     PiInitFirmwareResources @ 0x140CC7118 (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140CC7CBC (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140CE4548 (SepSecureBootSetRegistryKey.c)
 *     BapdpRegisterFwUpdateResults @ 0x140CE984C (BapdpRegisterFwUpdateResults.c)
 *     VhdInitialize @ 0x140D08C34 (VhdInitialize.c)
 *     IopMountCimfsLayer @ 0x140D0970C (IopMountCimfsLayer.c)
 *     RamdiskCreateSymbolicLink @ 0x140D09F60 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
