/*
 * XREFs of PnpIsValidGuidString @ 0x140963020
 * Callers:
 *     _CmGetCommonClassRegKeyPath @ 0x1409620B0 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceName @ 0x140963098 (_CmGetDeviceInterfaceName.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1409AC150 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B7F8C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmValidateDeviceContainerName @ 0x140A3CE94 (_CmValidateDeviceContainerName.c)
 *     _CmValidateInstallerClassName @ 0x140AC4F40 (_CmValidateInstallerClassName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 */

bool __fastcall PnpIsValidGuidString(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  DestinationString = 0LL;
  Guid = 0LL;
  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
}
