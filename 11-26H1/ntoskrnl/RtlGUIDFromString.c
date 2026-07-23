/*
 * XREFs of RtlGUIDFromString @ 0x1409622E0
 * Callers:
 *     RtlQueryPackageIdentityEx @ 0x140459830 (RtlQueryPackageIdentityEx.c)
 *     RtlQueryPackageClaims @ 0x140459AB0 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1404E3C40 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405DDB94 (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1406227E0 (RtlRaiseCustomSystemEventTrigger.c)
 *     SddlpUuidFromString @ 0x1407771A8 (SddlpUuidFromString.c)
 *     IoVolumeDeviceNameToGuid @ 0x14079C070 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14079FFF0 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDcInitUpdateProperties @ 0x1407AA6AC (PiDcInitUpdateProperties.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1407AC130 (PiDevCfgConvertPropertyFromValue.c)
 *     WdipSemLoadNextContextProvider @ 0x14082599C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x140825C4C (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140825F5C (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140826454 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408271BC (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x140841DE0 (ExpParseSignatureName.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1408A07A0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409551B0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1409620B0 (_CmGetCommonClassRegKeyPath.c)
 *     PnpIsValidGuidString @ 0x140963020 (PnpIsValidGuidString.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140963508 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140964EA0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140965250 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409742E8 (_PnpGetGenericStorePropertyKeys.c)
 *     BiBindEfiEntryToBcdObject @ 0x1409A0B80 (BiBindEfiEntryToBcdObject.c)
 *     BiGetObjectIdentifier @ 0x1409A4F60 (BiGetObjectIdentifier.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409A5200 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     IoVolumeDeviceToGuid @ 0x140A2FC90 (IoVolumeDeviceToGuid.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140A47478 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A47C2C (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140A85248 (PiDmObjectUpdateCachedCmProperty.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140AD4710 (EtwpEnableAutoLoggerProvider.c)
 *     PipGenerateContainerID @ 0x140B10C0C (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140B39A60 (PiDevCfgResolveVariableDeviceProperty.c)
 *     EtwStartAutoLogger @ 0x140B44338 (EtwStartAutoLogger.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 *     _CmSplitDevicePanelId @ 0x140B5FC88 (_CmSplitDevicePanelId.c)
 *     BiConvertRegistryDataToElement @ 0x140B66674 (BiConvertRegistryDataToElement.c)
 *     BcdEnumerateObjects @ 0x140B6FB7C (BcdEnumerateObjects.c)
 *     PopProcessWakeSourceWork @ 0x140C0F390 (PopProcessWakeSourceWork.c)
 *     EmpInfParseGetGuidFromName @ 0x140CBBE84 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140CBC29C (EmpParseEntryTypes.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140CC8F58 (PipResetDevice.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D089A4 (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x140962AB0 (ScanHexFormat.c)
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
