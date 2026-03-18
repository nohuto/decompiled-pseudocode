/*
 * XREFs of HvipApertureIntelVmcall @ 0x140732290
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140637A48 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
