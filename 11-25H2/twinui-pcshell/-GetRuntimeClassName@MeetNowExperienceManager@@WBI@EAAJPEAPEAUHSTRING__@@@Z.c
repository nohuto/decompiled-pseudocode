/*
 * XREFs of ?GetRuntimeClassName@MeetNowExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1803B9800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall MeetNowExperienceManager::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return CNetworkExperienceManager::GetRuntimeClassName((CNetworkExperienceManager *)(a1 - 24), a2);
}
