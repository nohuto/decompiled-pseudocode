/*
 * XREFs of ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x14029B338
 * Callers:
 *     EditionGetMouseWheelRoutingMode @ 0x14020A250 (EditionGetMouseWheelRoutingMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputMouseRequestedByForeground(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax

  v4 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18928);
    if ( *(_QWORD *)(v6 + 104) )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v6, v5) + 16308) )
      {
        UserSessionState = W32GetUserSessionState(v8, v7);
        return (unsigned int)IsDesktopApp(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 18928) + 104LL) + 456LL)) != 0;
      }
    }
  }
  return v4;
}
