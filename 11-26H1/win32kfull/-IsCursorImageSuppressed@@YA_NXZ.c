/*
 * XREFs of ?IsCursorImageSuppressed@@YA_NXZ @ 0x1401B4954
 * Callers:
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1401B48A8 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 * Callees:
 *     UsingPenCursors @ 0x1401B49C0 (UsingPenCursors.c)
 */

char __fastcall IsCursorImageSuppressed(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // bl

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_DWORD *)(UserSessionState + 36372) == 1
    || *(_DWORD *)(UserSessionState + 36372) == 2
    || *(_DWORD *)(UserSessionState + 36372) == 3
    || (unsigned int)(*(_DWORD *)(UserSessionState + 36372) - 5) <= 1 )
  {
    return 1;
  }
  v6 = 0;
  if ( (unsigned int)UsingPenCursors() )
    return *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 36344) + 80LL) == 0;
  return v6;
}
