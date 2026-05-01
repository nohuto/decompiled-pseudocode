/*
 * XREFs of IsPolicyManager_GetPolicyPresent @ 0x1802D02E0
 * Callers:
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1801E3728 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1802D32A9 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPolicyManager_GetPolicyPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1808D98EC == 1 )
    return 1;
  if ( dword_1808D98EC == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1808D98EC = 2 - (v1 != 0);
  return result;
}
