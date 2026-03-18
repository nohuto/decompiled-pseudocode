/*
 * XREFs of FVisCountable @ 0x140058720
 * Callers:
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x1400586A4 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x14005A898 (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14025C124 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall FVisCountable(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // eax
  __int64 v3; // r9

  v1 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v1 + 19) < 0 )
    return 0LL;
  if ( (*(_WORD *)(v1 + 42) & 0x2FFF) == 0x29D )
    return 1LL;
  v2 = IsTopLevelWindow(a1);
  if ( !v2 )
    return 0LL;
  LOBYTE(v2) = ~*(_BYTE *)(v3 + 31);
  return (v2 >> 5) & 1;
}
