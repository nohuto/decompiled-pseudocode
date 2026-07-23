/*
 * XREFs of RtlCreateUnicodeString @ 0x140A478B0
 * Callers:
 *     DifRtlCreateUnicodeStringWrapper @ 0x1406992B0 (DifRtlCreateUnicodeStringWrapper.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079722C (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AD478 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbCreateNode @ 0x1407B808C (PiDrvDbCreateNode.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1407BA93C (PiDrvDbResolveNodeFilePaths.c)
 *     EtwpSavePersistedLogger @ 0x140834B24 (EtwpSavePersistedLogger.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140858C5C (CmpCreateHwProfileFriendlyName.c)
 *     AslPathWildcardFindFirst @ 0x14088FD1C (AslPathWildcardFindFirst.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408A4D3C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x1408A5A58 (DrvDbCreateDatabaseNode.c)
 *     RtlConvertSidToUnicodeString @ 0x140901480 (RtlConvertSidToUnicodeString.c)
 *     EtwpCaptureString @ 0x14097A9F8 (EtwpCaptureString.c)
 *     EtwpRealtimeCreateLogfile @ 0x140A138AC (EtwpRealtimeCreateLogfile.c)
 *     PiGetDefaultMessageString @ 0x140A39904 (PiGetDefaultMessageString.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140A47478 (PiDevCfgQueryDeviceMigrationNode.c)
 *     EtwpQueryRegistryCallback @ 0x140A47FA0 (EtwpQueryRegistryCallback.c)
 *     PiDevCfgResolveVariable @ 0x140A480A0 (PiDevCfgResolveVariable.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     _PnpCtxCreateNode @ 0x140AE59C4 (_PnpCtxCreateNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PipGenerateContainerID @ 0x140B10C0C (PipGenerateContainerID.c)
 *     EtwStartAutoLogger @ 0x140B44338 (EtwStartAutoLogger.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 *     PiDevCfgQueryDriverNode @ 0x140B72708 (PiDevCfgQueryDriverNode.c)
 *     IopFormatBootDevice @ 0x140CC3180 (IopFormatBootDevice.c)
 *     PipInitDeviceOverrideCache @ 0x140CC8264 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140D0AFAC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
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
