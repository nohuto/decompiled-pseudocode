/*
 * XREFs of IsPolicyManager_GetPolicyPresent @ 0x1802D7B68
 * Callers:
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1801EDC24 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1802DAB39 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPolicyManager_GetPolicyPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180899264 == 1 )
    return 1;
  if ( dword_180899264 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_180899264 = 2 - (v1 != 0);
  return result;
}
