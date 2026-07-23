/*
 * XREFs of DbgPrint @ 0x140398CE0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1403E624C (CcInsertIntoCleanSharedCacheMapList.c)
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     RtlpAllocateHeap @ 0x1405238C8 (RtlpAllocateHeap.c)
 *     HalpAcpiGetFacsMapping @ 0x14057BCBC (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x140581B60 (HalReturnToFirmware.c)
 *     x86BiosExecuteInterruptShadowed @ 0x1405830F8 (x86BiosExecuteInterruptShadowed.c)
 *     RtlpCoalesceFreeBlocks @ 0x14061E070 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14061E464 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14061EB90 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14061ECD8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14061F4D4 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14061FFC8 (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140622EC0 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x140628F60 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x140629228 (RtlpPopulateListIndex.c)
 *     HalpTimerWatchdogLogReset @ 0x140784620 (HalpTimerWatchdogLogReset.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1407C6250 (ObpShutdownCloseHandleProcedure.c)
 *     CmpPostApcRunDown @ 0x1408572F0 (CmpPostApcRunDown.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1408AF5D8 (RtlpMuiRegLoadRegistryInfo.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x14094BC20 (CmNotifyRunDown.c)
 *     IopQueryLegacyBusInformation @ 0x1409B2634 (IopQueryLegacyBusInformation.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140A17914 (PnpGetDeviceInterfacePropertyData.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     PnpGetDevicePropertyData @ 0x140A9C6C0 (PnpGetDevicePropertyData.c)
 *     CmpPostApc @ 0x140AE20D0 (CmpPostApc.c)
 *     ExpSetPendingUILanguage @ 0x140B202E0 (ExpSetPendingUILanguage.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140B312E0 (PnpGetDeviceInstancePropertyData.c)
 *     RtlDestroyHeap @ 0x140B3DD90 (RtlDestroyHeap.c)
 *     RtlLCIDToCultureName @ 0x140B60060 (RtlLCIDToCultureName.c)
 *     PopWriteHeaderPages @ 0x140C028B8 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140C02EA4 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 *     HalpMapNvsArea @ 0x140C10598 (HalpMapNvsArea.c)
 *     ViIsBTSSupported @ 0x140C37F1C (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140CB381C (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140D1082C (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403993F0 (vDbgPrintExWithPrefixInternalHelper.c)
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
