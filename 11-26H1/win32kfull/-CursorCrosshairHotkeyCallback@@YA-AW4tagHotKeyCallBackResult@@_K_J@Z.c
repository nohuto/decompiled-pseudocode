/*
 * XREFs of ?CursorCrosshairHotkeyCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x1402A8F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CursorCrosshairHotkeyCallback(__int64 a1, __int64 a2)
{
  _BOOL8 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  BOOL v10; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19176) + 40LL) )
  {
    v10 = 0;
    if ( (unsigned int)xxxSystemParametersInfo(8244LL, 0LL, &v10, 0LL) )
    {
      v2 = !v10;
      v10 = !v10;
      if ( (unsigned int)xxxSystemParametersInfo(8245LL, 0LL, v2, 2LL) )
      {
        v3 = UPDWORDPointer(8245LL);
        v4 = *(_QWORD *)(v3 + 8);
        v5 = *(_DWORD *)(v3 + 4);
        UserSessionState = W32GetUserSessionState(v7, v6);
        FastWriteProfileValue(*(_QWORD *)(*(_QWORD *)(UserSessionState + 19176) + 40LL) + 168LL, v5, v4, 4LL, &v10, 4);
      }
    }
  }
  return 0LL;
}
