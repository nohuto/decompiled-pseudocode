/*
 * XREFs of ?MKShowMouseCursor@@YAXXZ @ 0x1401A18D0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A57B0 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x140137790 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

void __fastcall MKShowMouseCursor(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx

  v3 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 68448);
  if ( (v3 & 1) == 0 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    *(_DWORD *)(UserSessionState + 68448) |= 1u;
    v7 = W32GetUserSessionState(v6, v5);
    *(_DWORD *)(v7 + 66800) |= 0x1000u;
    v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872);
    *(_DWORD *)(v10 + 1972) = 1;
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v11) + 19872) + 2068LL) = 2;
    SetGlobalCursorLevel(0LL, v12);
  }
}
