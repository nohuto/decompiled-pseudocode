/*
 * XREFs of ?Release@SearchAppExperienceManager@@W7EAAKXZ @ 0x18036D5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchAppExperienceManager::Release(__int64 a1)
{
  return CortanaSharedExperienceManager::Release(a1 - 8);
}
