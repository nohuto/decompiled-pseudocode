/*
 * XREFs of DxgkCddEngIsRemoteConnection @ 0x1400EBE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddEngIsRemoteConnection(_DWORD *a1, _QWORD *a2, BOOL *a3)
{
  unsigned int v5; // ebx
  BOOL v6; // eax
  __int64 UserSessionState; // rax

  if ( a1 )
    *a1 = *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)a3) + 68748);
  if ( a2 )
  {
    a1 = *(_DWORD **)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)a3) + 68688);
    *a2 = a1;
  }
  v5 = 0;
  if ( a3 )
  {
    v6 = 0;
    if ( *(_WORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)a3) + 68744) )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)a3);
      LODWORD(a1) = 0xFFFF;
      if ( *(_WORD *)(UserSessionState + 68744) != 0xFFFF )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(0xFFFF, (_DWORD)a2, (_DWORD)a3) + 68696) )
          v6 = 1;
      }
    }
    *a3 = v6;
  }
  LOBYTE(v5) = *(_WORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)a3) + 68744) != 0;
  return v5;
}
