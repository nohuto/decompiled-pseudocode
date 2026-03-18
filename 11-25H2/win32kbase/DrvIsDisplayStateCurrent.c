/*
 * XREFs of DrvIsDisplayStateCurrent @ 0x14015A540
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x14016F770 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsDisplayStateCurrent(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  __int64 SessionState; // rax
  unsigned int v5; // r9d
  __int64 v6; // r8
  __int64 v7; // rcx

  v3 = a1;
  SessionState = W32GetSessionState(a1);
  v5 = 0;
  v6 = *(_QWORD *)(SessionState + 88);
  if ( !v3 || *a2 == *(_DWORD *)(*(_QWORD *)(v6 + 1768) + 1573008LL) )
  {
    v7 = *(_QWORD *)(v6 + 1768);
    if ( a2[1] == *(_DWORD *)(v7 + 1573032) && a2[2] == *(_DWORD *)(v7 + 1573024) )
      return 1;
  }
  return v5;
}
