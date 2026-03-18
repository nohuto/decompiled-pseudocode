/*
 * XREFs of ?VidMmDeInitGlobals@@YAXXZ @ 0x1400A2D3C
 * Callers:
 *     DriverUnload @ 0x14004D040 (DriverUnload.c)
 *     DriverEntry @ 0x14012F078 (DriverEntry.c)
 * Callees:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x14009D490 (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 */

void VidMmDeInitGlobals(void)
{
  VIDMM_GLOBAL::DeInitGlobals();
}
