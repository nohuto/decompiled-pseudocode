/*
 * XREFs of PpvDmaReleaseInactiveDmaAdapter @ 0x1405DF928
 * Callers:
 *     PiIommuUnblockDevice @ 0x14077C00C (PiIommuUnblockDevice.c)
 * Callees:
 *     VfReleaseInactiveDmaAdapter @ 0x140C2BB94 (VfReleaseInactiveDmaAdapter.c)
 */

__int64 PpvDmaReleaseInactiveDmaAdapter()
{
  __int64 result; // rax

  if ( PpvDmaVerifierEnabled )
    return VfReleaseInactiveDmaAdapter();
  return result;
}
