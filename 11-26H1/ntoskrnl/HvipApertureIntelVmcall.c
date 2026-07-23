/*
 * XREFs of HvipApertureIntelVmcall @ 0x140736E60
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14063AA4C (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
