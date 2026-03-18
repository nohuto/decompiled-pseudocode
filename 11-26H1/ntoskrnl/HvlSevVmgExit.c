/*
 * XREFs of HvlSevVmgExit @ 0x1407231F0
 * Callers:
 *     HvlpRequestProxyInterruptDoorbellGhcbNormal @ 0x1403E5E7C (HvlpRequestProxyInterruptDoorbellGhcbNormal.c)
 *     HvlpRequestProxyInterruptDoorbellGhcbEx @ 0x1403E5F68 (HvlpRequestProxyInterruptDoorbellGhcbEx.c)
 *     HvlpConfigureGhcbGuestOsId @ 0x1405BFB54 (HvlpConfigureGhcbGuestOsId.c)
 * Callees:
 *     <none>
 */

void HvlSevVmgExit()
{
  __asm { repne vmmcall }
}
