/*
 * XREFs of ZwQueryLicenseValue @ 0x180161A50
 * Callers:
 *     RtlpGetPolicyValueForSystemCapability @ 0x180041A90 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180082800 (RtlpGetDeviceFamilyInfoEnum.c)
 *     SwitchedRtlGetVersion @ 0x1800833F0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x180083D40 (RtlGetVersion.c)
 *     RtlGetProductInfo @ 0x1800D90F0 (RtlGetProductInfo.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x180148538 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     RtlpGetWindowsPolicy @ 0x18014D064 (RtlpGetWindowsPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  NTSTATUS result; // eax

  result = 353;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
