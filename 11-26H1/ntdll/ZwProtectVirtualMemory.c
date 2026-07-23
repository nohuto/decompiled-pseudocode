/*
 * XREFs of ZwProtectVirtualMemory @ 0x18015F840
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180002680 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x180002F80 (RtlpFreeUserBlockToHeap.c)
 *     RtlpFreeUserBlock @ 0x180003280 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180007FA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpProtectHeap @ 0x1800768F0 (RtlpProtectHeap.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800773A0 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x180077BE0 (LdrInitSecurityCookie.c)
 *     LdrpChangeMrdataProtection @ 0x180078DF0 (LdrpChangeMrdataProtection.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800C3A94 (LdrpWriteBackProtectedDelayLoad.c)
 *     AVrfpSnapDllImports @ 0x1800C4600 (AVrfpSnapDllImports.c)
 *     LdrpSetProtection @ 0x1800D51F8 (LdrpSetProtection.c)
 *     LdrpCorFixupImage @ 0x1801002AC (LdrpCorFixupImage.c)
 *     RtlpHpEnvProtectVA @ 0x180101AC8 (RtlpHpEnvProtectVA.c)
 *     RtlpHpSegProtect @ 0x18010E3F8 (RtlpHpSegProtect.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     LdrpCfgProcessLoadConfig @ 0x1801197F0 (LdrpCfgProcessLoadConfig.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 *     RtlpHpLargeAllocationProtect @ 0x18011F834 (RtlpHpLargeAllocationProtect.c)
 *     RtlResetStackOverflow @ 0x18013AD18 (RtlResetStackOverflow.c)
 *     RtlpProtectBlock @ 0x1801507DC (RtlpProtectBlock.c)
 *     RtlpHpHeapProtect @ 0x180157FA0 (RtlpHpHeapProtect.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  NTSTATUS result; // eax

  result = 80;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
