/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x140732280
 * Callers:
 *     HviEnterKernelAperture @ 0x140637888 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140637960 (HviLeaveKernelAperture.c)
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
