/*
 * XREFs of ZwManageHotPatch @ 0x180161170
 * Callers:
 *     LdrpLoadPatchedNtdll @ 0x1800CB24C (LdrpLoadPatchedNtdll.c)
 *     LdrpQueryCurrentPatch @ 0x1800CB3C0 (LdrpQueryCurrentPatch.c)
 *     LdrpInitializeHotPatching @ 0x1800CC004 (LdrpInitializeHotPatching.c)
 *     LdrpMapDllPatchImage @ 0x180111640 (LdrpMapDllPatchImage.c)
 *     LdrpApplyPatchImageCommon @ 0x1801237CC (LdrpApplyPatchImageCommon.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BBAC (LdrpIsCurrentPatchLatest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManageHotPatch()
{
  __int64 result; // rax

  result = 282LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
