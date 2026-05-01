/*
 * XREFs of ?GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x18035EB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActionCenterExperienceManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CInsightsExperienceManager::GetTrustLevel((CInsightsExperienceManager *)(a1 - 80), a2);
}
