/*
 * XREFs of ZwSetSystemInformation @ 0x1801625D0
 * Callers:
 *     RtlSetFeatureConfigurations @ 0x18010E590 (RtlSetFeatureConfigurations.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x180111530 (RtlpFcUpdateUsageSubscriptions.c)
 *     RtlOverwriteFeatureConfigurationBuffer @ 0x180148960 (RtlOverwriteFeatureConfigurationBuffer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  NTSTATUS result; // eax

  result = 445;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
