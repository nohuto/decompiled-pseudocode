/*
 * XREFs of ?IsPrimaryProfileRenderProcessingMode@CBtLeAudioResourceManager@@UEAA_NU_GUID@@@Z @ 0x1800EF170
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

bool __fastcall CBtLeAudioResourceManager::IsPrimaryProfileRenderProcessingMode(
        CBtLeAudioResourceManager *this,
        struct _GUID *a2)
{
  return memcmp_0(a2, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3, 0x10uLL) == 0;
}
