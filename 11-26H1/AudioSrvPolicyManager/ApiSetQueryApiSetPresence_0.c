/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800314B4
 * Callers:
 *     IsWinStationIsSessionRemoteablePresent @ 0x180031338 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x180031460 (IsWTSQuerySessionInformationWPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
