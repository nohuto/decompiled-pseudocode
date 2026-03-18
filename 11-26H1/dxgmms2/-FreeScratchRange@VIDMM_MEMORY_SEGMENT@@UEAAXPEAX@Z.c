/*
 * XREFs of ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1400BE670
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400FBCD4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::FreeScratchRange(VIDMM_LINEAR_POOL **this, void *a2)
{
  VIDMM_LINEAR_POOL::Free(this[32], a2);
}
