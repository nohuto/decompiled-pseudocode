/*
 * XREFs of RtlCreateUnicodeString @ 0x140A70410
 * Callers:
 *     DifRtlCreateUnicodeStringWrapper @ 0x1406956D0 (DifRtlCreateUnicodeStringWrapper.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AA688 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbCreateNode @ 0x1407B502C (PiDrvDbCreateNode.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1407B78DC (PiDrvDbResolveNodeFilePaths.c)
 *     EtwpSavePersistedLogger @ 0x14082E8E4 (EtwpSavePersistedLogger.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14085294C (CmpCreateHwProfileFriendlyName.c)
 *     AslPathWildcardFindFirst @ 0x140889920 (AslPathWildcardFindFirst.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14089E93C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x14089F658 (DrvDbCreateDatabaseNode.c)
 *     RtlConvertSidToUnicodeString @ 0x140925970 (RtlConvertSidToUnicodeString.c)
 *     EtwpRealtimeCreateLogfile @ 0x140A146BC (EtwpRealtimeCreateLogfile.c)
 *     PiGetDefaultMessageString @ 0x140A26864 (PiGetDefaultMessageString.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x140A70314 (EtwpCaptureString.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140A70B50 (PiDevCfgQueryDeviceMigrationNode.c)
 *     EtwpQueryRegistryCallback @ 0x140A71AD0 (EtwpQueryRegistryCallback.c)
 *     PiDevCfgResolveVariable @ 0x140A71BD0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryDriverNode @ 0x140AD009C (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AD1378 (PiDevCfgLogDeviceConfigured.c)
 *     _PnpCtxCreateNode @ 0x140AE7B14 (_PnpCtxCreateNode.c)
 *     PipGenerateContainerID @ 0x140B0F3DC (PipGenerateContainerID.c)
 *     EtwStartAutoLogger @ 0x140B42448 (EtwStartAutoLogger.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B48EE0 (PiCreateDriverSwDeviceCallback.c)
 *     IopFormatBootDevice @ 0x140CBD110 (IopFormatBootDevice.c)
 *     PipInitDeviceOverrideCache @ 0x140CC2194 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140D04CDC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     wcslen @ 0x1405380A0 (wcslen.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned int v4; // ebx
  wchar_t *Pool2; // rax

  v4 = 2 * wcslen(SourceString) + 2;
  if ( v4 > 0xFFFE )
    return 0;
  if ( !v4 )
    return 0;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  DestinationString->Buffer = Pool2;
  if ( !Pool2 )
    return 0;
  DestinationString->MaximumLength = v4;
  memmove(Pool2, SourceString, v4);
  DestinationString->Length = v4 - 2;
  return 1;
}
