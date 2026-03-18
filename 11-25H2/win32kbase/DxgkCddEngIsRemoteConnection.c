/*
 * XREFs of DxgkCddEngIsRemoteConnection @ 0x1400BA5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddEngIsRemoteConnection(__int64 a1, __int64 *a2, BOOL *a3)
{
  unsigned int v5; // ebx
  BOOL v6; // eax
  __int64 UserSessionState; // rax

  if ( a1 )
    *(_DWORD *)a1 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68756);
  if ( a2 )
  {
    a1 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 68696);
    *a2 = a1;
  }
  v5 = 0;
  if ( a3 )
  {
    v6 = 0;
    if ( *(_WORD *)(W32GetUserSessionState(a1, a2) + 68752) )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      a1 = 0xFFFFLL;
      if ( *(_WORD *)(UserSessionState + 68752) != 0xFFFF )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(0xFFFFLL, a2) + 68704) )
          v6 = 1;
      }
    }
    *a3 = v6;
  }
  LOBYTE(v5) = *(_WORD *)(W32GetUserSessionState(a1, a2) + 68752) != 0;
  return v5;
}
