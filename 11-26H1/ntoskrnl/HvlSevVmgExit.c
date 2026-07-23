/*
 * XREFs of HvlSevVmgExit @ 0x140727DC0
 * Callers:
 *     HvlpRequestProxyInterruptDoorbellGhcbNormal @ 0x1402F2D60 (HvlpRequestProxyInterruptDoorbellGhcbNormal.c)
 *     HvlpRequestProxyInterruptDoorbellGhcbEx @ 0x1402F2E4C (HvlpRequestProxyInterruptDoorbellGhcbEx.c)
 *     HvlpConfigureGhcbGuestOsId @ 0x1405C23C4 (HvlpConfigureGhcbGuestOsId.c)
 * Callees:
 *     <none>
 */

void HvlSevVmgExit()
{
  __asm { repne vmmcall }
}
