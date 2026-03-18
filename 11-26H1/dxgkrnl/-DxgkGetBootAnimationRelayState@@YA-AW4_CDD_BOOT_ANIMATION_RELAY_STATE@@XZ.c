/*
 * XREFs of ?DxgkGetBootAnimationRelayState@@YA?AW4_CDD_BOOT_ANIMATION_RELAY_STATE@@XZ @ 0x1403EF3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 DxgkGetBootAnimationRelayState()
{
  return *((unsigned int *)DXGGLOBAL::GetGlobal() + 401);
}
