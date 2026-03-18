/*
 * XREFs of ?SetGlobalCursorLevel@@YAXH@Z @ 0x140174100
 * Callers:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1400DF460 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1401C5720 (-MKShowMouseCursor@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SetGlobalCursorLevel(int a1, int a2, int a3)
{
  int v4; // edx
  __int64 *j; // rcx
  int v6; // r8d
  __int64 i; // rdx
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 k; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19176) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)j, v4, v6) + 19176) + 40LL) + 16LL);
          i;
          i = *(_QWORD *)(i + 32) )
    {
      for ( j = *(__int64 **)(i + 176); j != (__int64 *)(i + 176); j = (__int64 *)*j )
      {
        v11 = *(j - 38);
        *((_DWORD *)j + 4) = a1;
        *(_DWORD *)(v11 + 432) = a1;
      }
    }
  }
  UserGdiSessionState = W32GetUserGdiSessionState(j);
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
  if ( ProcessWin32Process )
    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
  for ( k = *(_QWORD *)(ProcessWin32Process + 328); k; k = *(_QWORD *)(k + 696) )
  {
    v12 = *(_QWORD *)(k + 464);
    *(_DWORD *)(k + 784) = a1;
    *(_DWORD *)(v12 + 432) = a1;
  }
}
