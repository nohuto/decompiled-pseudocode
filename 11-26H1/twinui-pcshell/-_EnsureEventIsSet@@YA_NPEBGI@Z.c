/*
 * XREFs of ?_EnsureEventIsSet@@YA_NPEBGI@Z @ 0x180684D8C
 * Callers:
 *     ?StartAndDisplayUserIhmProcess@@YA_N_NI@Z @ 0x180684CA0 (-StartAndDisplayUserIhmProcess@@YA_N_NI@Z.c)
 * Callees:
 *     ?StartTextInputManagementService@@YA_NXZ @ 0x180684CC4 (-StartTextInputManagementService@@YA_NXZ.c)
 *     ?_SetSessionEvent@@YA_NPEBG@Z @ 0x180684E8C (-_SetSessionEvent@@YA_NPEBG@Z.c)
 */

char __fastcall _EnsureEventIsSet(LPCWSTR lpName)
{
  char v2; // bl
  int i; // edi

  v2 = 0;
  if ( _SetSessionEvent(lpName) )
    return 1;
  if ( !StartTextInputManagementService() )
    return v2;
  if ( _SetSessionEvent(lpName) )
    return 1;
  for ( i = 0; i < 50; ++i )
  {
    if ( _SetSessionEvent(lpName) )
      return 1;
    Sleep(0x64u);
  }
  return v2;
}
