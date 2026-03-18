/*
 * XREFs of ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400A1D34
 * Callers:
 *     VidMmNotifyShutdown @ 0x14004D740 (VidMmNotifyShutdown.c)
 * Callees:
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009BA24 (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyShutdown(struct DXGADAPTER **this)
{
  VIDMM_GLOBAL::LogTeardownTelemetry(this);
}
