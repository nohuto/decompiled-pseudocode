/*
 * XREFs of ?MKShowMouseCursor@@YAXXZ @ 0x1401C5720
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400DFA30 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x140174100 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

void __fastcall MKShowMouseCursor(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  int v18; // r8d

  v4 = *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 68440);
  if ( (v4 & 1) == 0 )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    *(_DWORD *)(UserSessionState + 68440) |= 1u;
    v10 = W32GetUserSessionState(v8, v7, v9);
    *(_DWORD *)(v10 + 66792) |= 0x1000u;
    v14 = *(_QWORD *)(W32GetUserSessionState(v12, v11, v13) + 19904);
    *(_DWORD *)(v14 + 1972) = 1;
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v15, v16) + 19904) + 2068LL) = 2;
    SetGlobalCursorLevel(0, v17, v18);
  }
}
