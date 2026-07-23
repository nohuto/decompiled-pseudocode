/*
 * XREFs of NtQuerySection @ 0x18015F860
 * Callers:
 *     RtlGetImageFileMachines @ 0x18002F2C0 (RtlGetImageFileMachines.c)
 *     PsspDumpObject_Section @ 0x180100720 (PsspDumpObject_Section.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T SectionInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 81;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
