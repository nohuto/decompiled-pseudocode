/*
 * XREFs of ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x140010520
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140235DB8 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 * Callees:
 *     FVisCountable @ 0x1400105A0 (FVisCountable.c)
 *     ?DecCloakWindows@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140243EC0 (-DecCloakWindows@@YAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DecVisWindows(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  if ( (unsigned int)FVisCountable() )
  {
    v2 = *((_QWORD *)a1 + 2);
    --*(_DWORD *)(v2 + 936);
    v3 = *(_QWORD *)(v2 + 456);
    --*(_DWORD *)(v3 + 1008);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x60) != 0 )
      DecCloakWindows((struct tagPROCESSINFO *)v3);
    if ( *(_DWORD *)(v3 + 1008) <= *(_DWORD *)(v3 + 1012) )
      tagPROCESSINFO::UpdateProcessVisibility(v3, 1LL);
  }
}
