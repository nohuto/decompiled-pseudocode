/*
 * XREFs of ?IsPrimaryProfileRenderProcessingMode@CBtAudioResourceManager@@UEAA_NU_GUID@@@Z @ 0x1800DF640
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

bool __fastcall CBtAudioResourceManager::IsPrimaryProfileRenderProcessingMode(
        CBtAudioResourceManager *this,
        struct _GUID *a2)
{
  return memcmp_0(a2, &xmmword_180190D40, 0x10uLL) == 0;
}
