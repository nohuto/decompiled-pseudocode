/*
 * XREFs of ZwQueryAttributesFile @ 0x18015F5E0
 * Callers:
 *     LdrpGetNtPathFromDosPath @ 0x18007C310 (LdrpGetNtPathFromDosPath.c)
 *     LdrAddDllDirectory @ 0x180099440 (LdrAddDllDirectory.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A50E0 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A5230 (RtlDosSearchPath_Ustr.c)
 *     LdrpIsReparsePoint @ 0x1800C3638 (LdrpIsReparsePoint.c)
 *     LdrpResValidateFilePath @ 0x1800D6278 (LdrpResValidateFilePath.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  NTSTATUS result; // eax

  result = 61;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
