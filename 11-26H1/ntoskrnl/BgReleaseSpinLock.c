/*
 * XREFs of BgReleaseSpinLock @ 0x140C4FB70
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1405C5690 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 */

__int64 BgReleaseSpinLock()
{
  return BgpFwReleaseLock();
}
