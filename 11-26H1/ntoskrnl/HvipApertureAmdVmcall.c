/*
 * XREFs of HvipApertureAmdVmcall @ 0x1407322A0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140637A48 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
