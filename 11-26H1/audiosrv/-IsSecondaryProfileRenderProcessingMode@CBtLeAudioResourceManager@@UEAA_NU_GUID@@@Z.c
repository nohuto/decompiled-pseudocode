/*
 * XREFs of ?IsSecondaryProfileRenderProcessingMode@CBtLeAudioResourceManager@@UEAA_NU_GUID@@@Z @ 0x1800EF1A0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

bool __fastcall CBtLeAudioResourceManager::IsSecondaryProfileRenderProcessingMode(
        CBtLeAudioResourceManager *this,
        struct _GUID *a2)
{
  return memcmp_0(a2, &GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7, 0x10uLL) == 0;
}
