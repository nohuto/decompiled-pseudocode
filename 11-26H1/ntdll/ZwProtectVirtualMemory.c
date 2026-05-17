/*
 * XREFs of ZwProtectVirtualMemory @ 0x18015F940
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x1800175A0 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x180017EA0 (RtlpFreeUserBlockToHeap.c)
 *     RtlpFreeUserBlock @ 0x1800181A0 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x1800185E0 (RtlpFreeNTHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18001CED0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpProtectHeap @ 0x18007F550 (RtlpProtectHeap.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180080000 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x180080840 (LdrInitSecurityCookie.c)
 *     LdrpChangeMrdataProtection @ 0x180081A50 (LdrpChangeMrdataProtection.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800C62D4 (LdrpWriteBackProtectedDelayLoad.c)
 *     AVrfpSnapDllImports @ 0x1800C6E40 (AVrfpSnapDllImports.c)
 *     LdrpSetProtection @ 0x1800D8238 (LdrpSetProtection.c)
 *     LdrpCorFixupImage @ 0x180100B5C (LdrpCorFixupImage.c)
 *     RtlpHpEnvProtectVA @ 0x180102378 (RtlpHpEnvProtectVA.c)
 *     RtlpHpSegProtect @ 0x18010E8A8 (RtlpHpSegProtect.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpCfgProcessLoadConfig @ 0x180119A40 (LdrpCfgProcessLoadConfig.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 *     RtlpHpLargeAllocationProtect @ 0x18011FA84 (RtlpHpLargeAllocationProtect.c)
 *     RtlResetStackOverflow @ 0x18013AFA8 (RtlResetStackOverflow.c)
 *     RtlpProtectBlock @ 0x18015092C (RtlpProtectBlock.c)
 *     RtlpHpHeapProtect @ 0x1801580D0 (RtlpHpHeapProtect.c)
 * Callees:
 *     <none>
 */

__int64 ZwProtectVirtualMemory()
{
  __int64 result; // rax

  result = 80LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
