/*
 * XREFs of ZwQueryAttributesFile @ 0x18015F6E0
 * Callers:
 *     LdrpGetNtPathFromDosPath @ 0x180084F70 (LdrpGetNtPathFromDosPath.c)
 *     LdrAddDllDirectory @ 0x18009A310 (LdrAddDllDirectory.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A5FB0 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A6100 (RtlDosSearchPath_Ustr.c)
 *     LdrpIsReparsePoint @ 0x1800C5E78 (LdrpIsReparsePoint.c)
 *     LdrpResValidateFilePath @ 0x1800D92B8 (LdrpResValidateFilePath.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryAttributesFile()
{
  __int64 result; // rax

  result = 61LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
