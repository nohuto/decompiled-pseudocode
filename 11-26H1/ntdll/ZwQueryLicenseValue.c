/*
 * XREFs of ZwQueryLicenseValue @ 0x180161B50
 * Callers:
 *     RtlpGetPolicyValueForSystemCapability @ 0x180057510 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800623B0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     SwitchedRtlGetVersion @ 0x180062FA0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800638F0 (RtlGetVersion.c)
 *     RtlGetProductInfo @ 0x1800DC180 (RtlGetProductInfo.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x180148688 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     RtlpGetWindowsPolicy @ 0x18014D1B4 (RtlpGetWindowsPolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryLicenseValue()
{
  __int64 result; // rax

  result = 353LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
