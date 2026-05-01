/*
 * XREFs of ?GetTrustLevel@HolographicPositioner@@WMA@EAAJPEAW4TrustLevel@@@Z @ 0x180403C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CInsightsExperienceManager::GetTrustLevel((CInsightsExperienceManager *)(a1 - 192), a2);
}
