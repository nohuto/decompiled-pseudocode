/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_TEMPORARY_RESOURCE_LEGACY@@@Z @ 0x1400BDB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400FBCD4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::ReleaseTemporaryResource(VIDMM_LINEAR_POOL **this, PVOID *a2)
{
  VIDMM_LINEAR_POOL::Free(this[32], a2[6]);
}
