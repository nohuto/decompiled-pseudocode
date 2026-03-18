/*
 * XREFs of BgAcquireSpinLock @ 0x140C4F8F8
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1405C5690 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
