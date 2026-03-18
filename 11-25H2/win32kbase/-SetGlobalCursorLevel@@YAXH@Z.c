/*
 * XREFs of ?SetGlobalCursorLevel@@YAXH@Z @ 0x140137790
 * Callers:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1400A6E40 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1401A18D0 (-MKShowMouseCursor@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SetGlobalCursorLevel(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 *j; // rcx
  __int64 i; // rdx
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 k; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(j, v3) + 19144) + 40LL) + 16LL);
          i;
          i = *(_QWORD *)(i + 32) )
    {
      for ( j = *(__int64 **)(i + 176); j != (__int64 *)(i + 176); j = (__int64 *)*j )
      {
        v9 = *(j - 38);
        *((_DWORD *)j + 4) = v2;
        *(_DWORD *)(v9 + 408) = v2;
      }
    }
  }
  UserGdiSessionState = W32GetUserGdiSessionState(j);
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
  if ( ProcessWin32Process )
    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
  for ( k = *(_QWORD *)(ProcessWin32Process + 320); k; k = *(_QWORD *)(k + 704) )
  {
    v10 = *(_QWORD *)(k + 472);
    *(_DWORD *)(k + 792) = v2;
    *(_DWORD *)(v10 + 408) = v2;
  }
}
