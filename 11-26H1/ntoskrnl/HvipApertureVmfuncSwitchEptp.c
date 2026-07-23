/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x140736E50
 * Callers:
 *     HviEnterKernelAperture @ 0x14063A88C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14063A964 (HviLeaveKernelAperture.c)
 * Callees:
 *     <none>
 */

__int64 HvipApertureVmfuncSwitchEptp()
{
  __int64 result; // rax

  result = 0LL;
  __asm { vmfunc }
  return result;
}
