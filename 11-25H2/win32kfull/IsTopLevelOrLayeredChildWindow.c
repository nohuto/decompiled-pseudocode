/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x140034FB4
 * Callers:
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x140034DBC (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x140034EE0 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     NtUserUpdateLayeredWindow @ 0x140051B10 (NtUserUpdateLayeredWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserGetWindowCompositionAttribute @ 0x140298E30 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // r9
  __int64 DesktopWindow; // rax
  __int64 v4; // rdx
  unsigned int v5; // r10d

  v1 = a1;
  if ( *(_QWORD *)(a1 + 104) )
  {
    DesktopWindow = GetDesktopWindow(a1);
    if ( v4 == DesktopWindow )
      return 1LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) == 0 )
    return 0LL;
  do
  {
    if ( (unsigned int)IsTopLevelWindow(v1) )
      break;
    v1 = *(_QWORD *)(v1 + 104);
  }
  while ( v1 );
  LOBYTE(v5) = v1 != 0;
  return v5;
}
