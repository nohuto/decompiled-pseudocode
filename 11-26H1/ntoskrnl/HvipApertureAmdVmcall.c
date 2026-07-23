/*
 * XREFs of HvipApertureAmdVmcall @ 0x140736E70
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14063AA4C (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
