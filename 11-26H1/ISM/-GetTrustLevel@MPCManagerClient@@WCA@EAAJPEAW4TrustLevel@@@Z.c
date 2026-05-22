/*
 * XREFs of ?GetTrustLevel@MPCManagerClient@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1801668D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return Windows::Internal::Input::MPCManager::ServerConnectionArgs::GetTrustLevel(
           (Windows::Internal::Input::MPCManager::ServerConnectionArgs *)(a1 - 32),
           a2);
}
