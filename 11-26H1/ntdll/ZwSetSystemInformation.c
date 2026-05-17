/*
 * XREFs of ZwSetSystemInformation @ 0x1801626D0
 * Callers:
 *     RtlSetFeatureConfigurations @ 0x18010EA40 (RtlSetFeatureConfigurations.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x1801119C0 (RtlpFcUpdateUsageSubscriptions.c)
 *     RtlOverwriteFeatureConfigurationBuffer @ 0x180148AB0 (RtlOverwriteFeatureConfigurationBuffer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetSystemInformation()
{
  __int64 result; // rax

  result = 445LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
