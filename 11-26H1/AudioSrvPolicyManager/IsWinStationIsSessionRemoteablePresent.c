/*
 * XREFs of IsWinStationIsSessionRemoteablePresent @ 0x180031338
 * Callers:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18000CE08 (-GetTsAudioProtocol@@YAIK@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800314B4 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWinStationIsSessionRemoteablePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800685E8 == 1 )
    return 1;
  if ( dword_1800685E8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800685E8 = 2 - (v1 != 0);
  return result;
}
