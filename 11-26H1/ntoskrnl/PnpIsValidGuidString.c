/*
 * XREFs of PnpIsValidGuidString @ 0x1409A25C0
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x140909B98 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1409A1650 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceName @ 0x1409A2638 (_CmGetDeviceInterfaceName.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     _CmValidateDeviceContainerName @ 0x140A29DF4 (_CmValidateDeviceContainerName.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140A8B16C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmValidateInstallerClassName @ 0x140AC32D0 (_CmValidateInstallerClassName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
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
