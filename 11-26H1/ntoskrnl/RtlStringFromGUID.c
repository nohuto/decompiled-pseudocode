/*
 * XREFs of RtlStringFromGUID @ 0x140A3DEC0
 * Callers:
 *     PiInitFirmwareResources @ 0x140CC1048 (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140CC1BEC (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140CDE1B0 (SepSecureBootSetRegistryKey.c)
 *     BapdpRegisterFwUpdateResults @ 0x140CE34AC (BapdpRegisterFwUpdateResults.c)
 *     VhdInitialize @ 0x140D02894 (VhdInitialize.c)
 *     IopMountCimfsLayer @ 0x140D0336C (IopMountCimfsLayer.c)
 *     RamdiskCreateSymbolicLink @ 0x140D03C90 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  char v2; // r8

  v2 = 1;
  return RtlStringFromGUIDEx(Guid, GuidString, v2);
}
