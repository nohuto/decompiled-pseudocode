/*
 * XREFs of ?Release@SearchAppExperienceManager@@WBA@EAAKXZ @ 0x18036D5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchAppExperienceManager::Release(__int64 a1)
{
  return CortanaSharedExperienceManager::Release(a1 - 16);
}
