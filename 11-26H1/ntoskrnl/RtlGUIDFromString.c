/*
 * XREFs of RtlGUIDFromString @ 0x1409A1880
 * Callers:
 *     RtlQueryPackageIdentityEx @ 0x1404602F0 (RtlQueryPackageIdentityEx.c)
 *     RtlQueryPackageClaims @ 0x140460570 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1404EA890 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405DB2E4 (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14061F790 (RtlRaiseCustomSystemEventTrigger.c)
 *     SddlpUuidFromString @ 0x1407741A8 (SddlpUuidFromString.c)
 *     IoVolumeDeviceNameToGuid @ 0x140799540 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14079D4B0 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDcInitUpdateProperties @ 0x1407A7AFC (PiDcInitUpdateProperties.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1407A9510 (PiDevCfgConvertPropertyFromValue.c)
 *     WdipSemLoadNextContextProvider @ 0x14081F78C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x14081FA3C (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x14081FD4C (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140820244 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140820FAC (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x14083BBA0 (ExpParseSignatureName.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14089A3A0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     IoVolumeDeviceToGuid @ 0x140907B30 (IoVolumeDeviceToGuid.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140919888 (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140987D80 (PiDevCfgConfigureDeviceInterfaces.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140992EEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140994750 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1409A1650 (_CmGetCommonClassRegKeyPath.c)
 *     PnpIsValidGuidString @ 0x1409A25C0 (PnpIsValidGuidString.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1409A2AA8 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1409A4440 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1409A47F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 *     BiBindEfiEntryToBcdObject @ 0x1409CFBA0 (BiBindEfiEntryToBcdObject.c)
 *     BiGetObjectIdentifier @ 0x1409D3F80 (BiGetObjectIdentifier.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409D4220 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiBuildIdentifierList @ 0x1409D4E8C (BiBuildIdentifierList.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140A70B50 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A71014 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140A7F3D8 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140AD7C68 (EtwpEnableAutoLoggerProvider.c)
 *     PipGenerateContainerID @ 0x140B0F3DC (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140B37850 (PiDevCfgResolveVariableDeviceProperty.c)
 *     EtwStartAutoLogger @ 0x140B42448 (EtwStartAutoLogger.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B48EE0 (PiCreateDriverSwDeviceCallback.c)
 *     BcdEnumerateObjects @ 0x140B5C474 (BcdEnumerateObjects.c)
 *     _CmSplitDevicePanelId @ 0x140B5CB08 (_CmSplitDevicePanelId.c)
 *     BiConvertRegistryDataToElement @ 0x140B635D4 (BiConvertRegistryDataToElement.c)
 *     PopProcessWakeSourceWork @ 0x140C09180 (PopProcessWakeSourceWork.c)
 *     EmpInfParseGetGuidFromName @ 0x140CB5E44 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140CB625C (EmpParseEntryTypes.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140CC2E88 (PipResetDevice.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D02604 (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1409A2050 (ScanHexFormat.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  unsigned __int16 *p_Data2; // r8
  unsigned __int16 *p_Data3; // rax
  unsigned int Length; // edx
  wchar_t *Buffer; // rcx
  __int128 v8; // [rsp+70h] [rbp-28h] BYREF

  p_Data2 = &Guid->Data2;
  p_Data3 = &Guid->Data3;
  Length = GuidString->Length;
  Buffer = GuidString->Buffer;
  v8 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       Buffer,
                       Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       p_Data2,
                       p_Data3,
                       &v8,
                       (char *)&v8 + 2,
                       (char *)&v8 + 4,
                       (char *)&v8 + 6,
                       (char *)&v8 + 8,
                       (char *)&v8 + 10,
                       (char *)&v8 + 12,
                       (char *)&v8 + 14) == -1 )
    return -1073741811;
  Guid->Data4[0] = v8;
  Guid->Data4[1] = BYTE2(v8);
  Guid->Data4[2] = BYTE4(v8);
  Guid->Data4[3] = BYTE6(v8);
  Guid->Data4[4] = BYTE8(v8);
  Guid->Data4[5] = BYTE10(v8);
  Guid->Data4[6] = BYTE12(v8);
  Guid->Data4[7] = BYTE14(v8);
  return 0;
}
