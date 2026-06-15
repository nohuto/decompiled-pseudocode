/*
 * XREFs of ?IgnoreDriverFormatChangeNotifications@CBtLeAudioResourceManager@@WCFA@EAA_NXZ @ 0x1800F7A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtLeAudioResourceManager::IgnoreDriverFormatChangeNotifications(__int64 a1)
{
  return CSpatialAudioTechHRTF::HasSupportedChannelMasks((CSpatialAudioTechHRTF *)(a1 - 592));
}
