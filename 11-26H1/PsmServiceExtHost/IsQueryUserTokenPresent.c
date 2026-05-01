/*
 * XREFs of IsQueryUserTokenPresent @ 0x18006FB1C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180070134 (ApiSetQueryApiSetPresence_0.c)
 */

char IsQueryUserTokenPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800E2110 == 1 )
    return 1;
  if ( dword_1800E2110 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800E2110 = 2 - (v1 != 0);
  return result;
}
