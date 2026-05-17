/*
 * XREFs of ZwQueryVirtualMemory @ 0x18015F3A0
 * Callers:
 *     RtlpWalkFrameChain @ 0x180010544 (RtlpWalkFrameChain.c)
 *     RtlFlushSecureMemoryCache @ 0x180017520 (RtlFlushSecureMemoryCache.c)
 *     RtlpFreeUserBlockToHeap @ 0x180017EA0 (RtlpFreeUserBlockToHeap.c)
 *     RtlpFreeUserBlock @ 0x1800181A0 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x1800185E0 (RtlpFreeNTHeapInternal.c)
 *     RtlpCommitBlock @ 0x1800274E0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180027970 (RtlpFindAndCommitPages.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetImageSize @ 0x1800317E0 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1800318E0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpProtectHeap @ 0x18007F550 (RtlpProtectHeap.c)
 *     RtlpGetHeapProtection @ 0x18007F750 (RtlpGetHeapProtection.c)
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x18007FBF0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     RtlpHpHeapValidateProtection @ 0x18008B8C0 (RtlpHpHeapValidateProtection.c)
 *     LdrpResGetMappingSize @ 0x1800A7DC0 (LdrpResGetMappingSize.c)
 *     LdrpResValdiateMappedAddress @ 0x1800AB9F0 (LdrpResValdiateMappedAddress.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800C4B70 (RtlpScanProcessVirtualMemory.c)
 *     RtlpGetTargetRvaFlag @ 0x1800C71F4 (RtlpGetTargetRvaFlag.c)
 *     LdrpTouchThreadStack @ 0x1800CED2C (LdrpTouchThreadStack.c)
 *     LdrpProtectAndRelocateImage @ 0x1800D8074 (LdrpProtectAndRelocateImage.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800DC0E0 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800E6C70 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpCaptureCriticalThunks @ 0x1800E85C4 (LdrpCaptureCriticalThunks.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801059D8 (PsspCaptureAuxiliaryPages.c)
 *     LdrpCheckPagesForTampering @ 0x180108054 (LdrpCheckPagesForTampering.c)
 *     RtlpHpSegProtect @ 0x18010E8A8 (RtlpHpSegProtect.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18011041C (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     LdrIsEnclaveAddress @ 0x180110A04 (LdrIsEnclaveAddress.c)
 *     RtlDebugCreateHeap @ 0x180113EEC (RtlDebugCreateHeap.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118DB0 (LdrpInitializeNtdllDataTableEntry.c)
 *     RtlpHpLargeAllocationProtect @ 0x18011FA84 (RtlpHpLargeAllocationProtect.c)
 *     RtlResetStackOverflow @ 0x18013AFA8 (RtlResetStackOverflow.c)
 *     RtlpIsHeapAccessibleInClone @ 0x1801453DC (RtlpIsHeapAccessibleInClone.c)
 *     RtlGetNonVolatileToken @ 0x1801473B0 (RtlGetNonVolatileToken.c)
 *     RtlpHpHeapProtect @ 0x1801580D0 (RtlpHpHeapProtect.c)
 *     PsspQueryVmBulkMode @ 0x180159930 (PsspQueryVmBulkMode.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryVirtualMemory()
{
  __int64 result; // rax

  result = 35LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
