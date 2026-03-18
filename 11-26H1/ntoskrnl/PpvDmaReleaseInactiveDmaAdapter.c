/*
 * XREFs of PpvDmaReleaseInactiveDmaAdapter @ 0x1405DCFC0
 * Callers:
 *     PiIommuUnblockDevice @ 0x14077916C (PiIommuUnblockDevice.c)
 * Callees:
 *     VfReleaseInactiveDmaAdapter @ 0x140C25B84 (VfReleaseInactiveDmaAdapter.c)
 */

__int64 PpvDmaReleaseInactiveDmaAdapter()
{
  __int64 result; // rax

  if ( PpvDmaVerifierEnabled )
    return VfReleaseInactiveDmaAdapter();
  return result;
}
