/*
 * XREFs of BgReleaseSpinLock @ 0x140C55B70
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1405C7F00 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 */

__int64 BgReleaseSpinLock()
{
  return BgpFwReleaseLock();
}
