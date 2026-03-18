/*
 * XREFs of ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x140165D68
 * Callers:
 *     ?IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z @ 0x140060AEC (-IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z.c)
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x140165D20 (EditionIsGpqForegroundAccessibleExplicit.c)
 *     EditionKeyEventLLHook @ 0x14024FFF0 (EditionKeyEventLLHook.c)
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
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
    return 1;
  if ( a4 )
    return 1;
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 464)) )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18888);
    v10 = *(_QWORD *)(a2 + 472);
    if ( v9 == v10 && (*(_DWORD *)(v10 + 412) & 0x2000000) != 0 )
    {
      v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18888);
      if ( *(_QWORD *)(v9 + 120) )
      {
        v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18888);
        v8 = *(_QWORD *)(*(_QWORD *)(v9 + 120) + 16LL);
        if ( v8 )
        {
          if ( *(_QWORD *)(v8 + 464) == *(_QWORD *)(a2 + 464) )
            return 1;
        }
      }
    }
  }
  UserSessionState = W32GetUserSessionState(v9, v8);
  if ( UIPrivilegeIsolation::CheckAccess(
         a3,
         (const struct tagUIPI_INFO *)(*(_QWORD *)(UserSessionState + 18888) + 448LL),
         v12) )
  {
    return 1;
  }
  return v4;
}
