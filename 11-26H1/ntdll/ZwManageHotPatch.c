/*
 * XREFs of ZwManageHotPatch @ 0x180161270
 * Callers:
 *     LdrpLoadPatchedNtdll @ 0x1800CDADC (LdrpLoadPatchedNtdll.c)
 *     LdrpQueryCurrentPatch @ 0x1800CDC50 (LdrpQueryCurrentPatch.c)
 *     LdrpInitializeHotPatching @ 0x1800CE894 (LdrpInitializeHotPatching.c)
 *     LdrpMapDllPatchImage @ 0x180111AD0 (LdrpMapDllPatchImage.c)
 *     LdrpApplyPatchImageCommon @ 0x180123A60 (LdrpApplyPatchImageCommon.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BCEC (LdrpIsCurrentPatchLatest.c)
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
