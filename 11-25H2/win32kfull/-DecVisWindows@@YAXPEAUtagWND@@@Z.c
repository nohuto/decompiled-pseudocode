/*
 * XREFs of ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x1400586A4
 * Callers:
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x14020AB98 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 * Callees:
 *     FVisCountable @ 0x140058720 (FVisCountable.c)
 *     ?DecCloakWindows@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1402D3BD8 (-DecCloakWindows@@YAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DecVisWindows(struct tagWND *a1)
{
  __int64 v2; // rax
  struct tagPROCESSINFO *v3; // rbx

  if ( (unsigned int)FVisCountable() )
  {
    v2 = *((_QWORD *)a1 + 2);
    --*(_DWORD *)(v2 + 948);
    v3 = *(struct tagPROCESSINFO **)(v2 + 464);
    --*((_DWORD *)v3 + 252);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x60) != 0 )
      DecCloakWindows(v3);
    if ( *((_DWORD *)v3 + 252) <= *((_DWORD *)v3 + 253) )
      tagPROCESSINFO::UpdateProcessVisibility(v3, 1LL);
  }
}
