/*
 * XREFs of ?RemoveSasKey@@YA_NII@Z @ 0x1402A78C8
 * Callers:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x14018D620 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall RemoveSasKey(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // ebp
  __int64 i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2;
  v3 = a1;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 8 * i + 14012) == v3
      && *(_DWORD *)(W32GetUserSessionState(a1, a2) + 8 * i + 14008) == v2 )
    {
      *(_DWORD *)(W32GetUserSessionState(a1, a2) + 14020) = 0;
      *(_DWORD *)(W32GetUserSessionState(v6, v5) + 14016) = 0;
      return 1;
    }
  }
  return 0;
}
