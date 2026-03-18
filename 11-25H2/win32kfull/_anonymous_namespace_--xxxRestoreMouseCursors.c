/*
 * XREFs of _anonymous_namespace_::xxxRestoreMouseCursors @ 0x140125C04
 * Callers:
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x14005ECC0 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 * Callees:
 *     SetPointerMetaVisibility @ 0x1401229B0 (SetPointerMetaVisibility.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x140124264 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 */

char anonymous_namespace_::xxxRestoreMouseCursors()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax

  EtwTraceContactVisualizationInfo(3LL);
  v2 = *(_QWORD *)(W32GetUserSessionState(v1, v0) + 36312);
  *(_DWORD *)(v2 + 88) = 0;
  v4 = 0LL;
  v5 = *(_QWORD *)(W32GetUserSessionState(v2, v3) + 36312);
  *(_DWORD *)(v5 + 92) = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v6) + 63520) )
    v4 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63520) + 200LL;
  if ( *(_QWORD *)(v4 + 8) )
  {
    xxxUpdateSystemCursorFromRegistry(v4, 0LL, 4u);
    xxxUpdateSystemCursorFromRegistry(v4, 2LL, 4u);
    xxxUpdateSystemCursorFromRegistry(v4, 11LL, 4u);
    xxxUpdateSystemCursorFromRegistry(v4, 12LL, 4u);
  }
  UserSessionState = W32GetUserSessionState(v8, v7);
  if ( *(_DWORD *)(UserSessionState + 36340) != 1 )
    LOBYTE(UserSessionState) = SetPointerMetaVisibility(1LL);
  return UserSessionState;
}
