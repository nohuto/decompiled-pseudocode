/*
 * XREFs of ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x140275D18
 * Callers:
 *     EditionGetMouseWheelRoutingMode @ 0x1401DD220 (EditionGetMouseWheelRoutingMode.c)
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
  __int64 v10; // rdx

  v4 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18888);
    if ( *(_QWORD *)(v6 + 104) )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v6, v5) + 16316) )
      {
        UserSessionState = W32GetUserSessionState(v8, v7);
        return (unsigned int)IsDesktopApp(
                               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 18888) + 104LL) + 464LL),
                               v10) != 0;
      }
    }
  }
  return v4;
}
