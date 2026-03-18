/*
 * XREFs of ?VidMmInitGlobals@@YAJXZ @ 0x140125A78
 * Callers:
 *     DriverEntry @ 0x14012F078 (DriverEntry.c)
 * Callees:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x140125A90 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 */

__int64 VidMmInitGlobals(void)
{
  return VIDMM_GLOBAL::InitGlobals();
}
