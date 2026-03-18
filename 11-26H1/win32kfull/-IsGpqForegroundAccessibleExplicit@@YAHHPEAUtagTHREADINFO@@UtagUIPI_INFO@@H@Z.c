/*
 * XREFs of ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x140173750
 * Callers:
 *     EditionKeyEventLLHook @ 0x140172CB0 (EditionKeyEventLLHook.c)
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x140173660 (EditionIsGpqForegroundAccessibleExplicit.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1401736D0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     ?IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z @ 0x140294BF0 (-IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGpqForegroundAccessibleExplicit(__int64 a1, __int64 a2, UIPrivilegeIsolation *a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 UserSessionState; // rax
  const struct tagUIPI_INFO *v12; // r8

  v4 = 0;
  if ( !(_DWORD)a1 )
    return 1;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) )
    return 1;
  if ( a4 )
    return 1;
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 456)) )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18928);
    v10 = *(_QWORD *)(a2 + 464);
    if ( v9 == v10 && (*(_DWORD *)(v10 + 436) & 0x2000000) != 0 )
    {
      v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18928);
      if ( *(_QWORD *)(v9 + 120) )
      {
        v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18928);
        v8 = *(_QWORD *)(*(_QWORD *)(v9 + 120) + 16LL);
        if ( v8 )
        {
          if ( *(_QWORD *)(v8 + 456) == *(_QWORD *)(a2 + 456) )
            return 1;
        }
      }
    }
  }
  UserSessionState = W32GetUserSessionState(v9, v8);
  if ( UIPrivilegeIsolation::CheckAccess(
         a3,
         (const struct tagUIPI_INFO *)(*(_QWORD *)(UserSessionState + 18928) + 472LL),
         v12) )
  {
    return 1;
  }
  return v4;
}
