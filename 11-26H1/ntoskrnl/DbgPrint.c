/*
 * XREFs of DbgPrint @ 0x140396F60
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1403E305C (CcInsertIntoCleanSharedCacheMapList.c)
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     RtlpAllocateHeap @ 0x14052125C (RtlpAllocateHeap.c)
 *     HalpAcpiGetFacsMapping @ 0x14057978C (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x14057F640 (HalReturnToFirmware.c)
 *     x86BiosExecuteInterruptShadowed @ 0x140580BD8 (x86BiosExecuteInterruptShadowed.c)
 *     RtlpCoalesceFreeBlocks @ 0x14061B020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14061B414 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14061BB40 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14061BC88 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14061C484 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14061CF78 (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x14061FE70 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x140625F10 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1406261D8 (RtlpPopulateListIndex.c)
 *     HalpTimerWatchdogLogReset @ 0x140781B20 (HalpTimerWatchdogLogReset.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1407C31F0 (ObpShutdownCloseHandleProcedure.c)
 *     CmpPostApcRunDown @ 0x140850FE0 (CmpPostApcRunDown.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1408A9168 (RtlpMuiRegLoadRegistryInfo.c)
 *     IopQueryLegacyBusInformation @ 0x140910554 (IopQueryLegacyBusInformation.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1409DA6C4 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpQueryRegistryValues @ 0x140A10F94 (RtlpQueryRegistryValues.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     PnpGetDevicePropertyData @ 0x140A98540 (PnpGetDevicePropertyData.c)
 *     CmNotifyRunDown @ 0x140ABE29C (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x140AE45C0 (CmpPostApc.c)
 *     ExpSetPendingUILanguage @ 0x140B1E260 (ExpSetPendingUILanguage.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140B2F500 (PnpGetDeviceInstancePropertyData.c)
 *     RtlDestroyHeap @ 0x140B3BB10 (RtlDestroyHeap.c)
 *     RtlLCIDToCultureName @ 0x140B5CEE0 (RtlLCIDToCultureName.c)
 *     PopWriteHeaderPages @ 0x140BFC8B8 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140BFCEA4 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 *     HalpMapNvsArea @ 0x140C0A388 (HalpMapNvsArea.c)
 *     ViIsBTSSupported @ 0x140C31F0C (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140CAD7DC (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140D0A55C (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140397670 (vDbgPrintExWithPrefixInternalHelper.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  unsigned int v1; // ebx
  char v2; // cf
  int v3; // edi
  ULONG result; // eax
  va_list va; // [rsp+78h] [rbp+10h] BYREF

  va_start(va, Format);
  v1 = 128;
  v2 = 1;
  v3 = (int)Format;
  do
  {
    result = vDbgPrintExWithPrefixInternalHelper((int)&File, 101, 3, v3, va, 1, v1, v2);
    if ( result != -2147483643 )
      break;
    if ( v1 >= 0x200 )
      break;
    v1 += 128;
    v2 = v1 < 0x200;
  }
  while ( v1 <= 0x200 );
  return result;
}
