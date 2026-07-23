/*
 * XREFs of ZwQueryVirtualMemory @ 0x18015F2A0
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x180002600 (RtlFlushSecureMemoryCache.c)
 *     RtlpFreeUserBlockToHeap @ 0x180002F80 (RtlpFreeUserBlockToHeap.c)
 *     RtlpFreeUserBlock @ 0x180003280 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180012A40 (RtlpFindAndCommitPages.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetImageSize @ 0x18001C940 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001CA40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     RtlpWalkFrameChain @ 0x18005BC74 (RtlpWalkFrameChain.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18006D540 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpHeapValidateProtection @ 0x18006ED00 (RtlpHpHeapValidateProtection.c)
 *     RtlpProtectHeap @ 0x1800768F0 (RtlpProtectHeap.c)
 *     RtlpGetHeapProtection @ 0x180076AF0 (RtlpGetHeapProtection.c)
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x180076F90 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpResGetMappingSize @ 0x1800A6EF0 (LdrpResGetMappingSize.c)
 *     LdrpResValdiateMappedAddress @ 0x1800AAB20 (LdrpResValdiateMappedAddress.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800C2330 (RtlpScanProcessVirtualMemory.c)
 *     RtlpGetTargetRvaFlag @ 0x1800C49B4 (RtlpGetTargetRvaFlag.c)
 *     LdrpTouchThreadStack @ 0x1800CC49C (LdrpTouchThreadStack.c)
 *     LdrpProtectAndRelocateImage @ 0x1800D5034 (LdrpProtectAndRelocateImage.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800D9050 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800E56D0 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpCaptureCriticalThunks @ 0x1800E77D4 (LdrpCaptureCriticalThunks.c)
 *     PsspCaptureAuxiliaryPages @ 0x180105228 (PsspCaptureAuxiliaryPages.c)
 *     LdrpCheckPagesForTampering @ 0x180107A54 (LdrpCheckPagesForTampering.c)
 *     RtlpHpSegProtect @ 0x18010E3F8 (RtlpHpSegProtect.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010FFAC (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     LdrIsEnclaveAddress @ 0x180110594 (LdrIsEnclaveAddress.c)
 *     RtlDebugCreateHeap @ 0x1801136E8 (RtlDebugCreateHeap.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118B60 (LdrpInitializeNtdllDataTableEntry.c)
 *     RtlpHpLargeAllocationProtect @ 0x18011F834 (RtlpHpLargeAllocationProtect.c)
 *     RtlResetStackOverflow @ 0x18013AD18 (RtlResetStackOverflow.c)
 *     RtlpIsHeapAccessibleInClone @ 0x18014528C (RtlpIsHeapAccessibleInClone.c)
 *     RtlGetNonVolatileToken @ 0x180147260 (RtlGetNonVolatileToken.c)
 *     RtlpHpHeapProtect @ 0x180157FA0 (RtlpHpHeapProtect.c)
 *     PsspQueryVmBulkMode @ 0x180159800 (PsspQueryVmBulkMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 35;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
