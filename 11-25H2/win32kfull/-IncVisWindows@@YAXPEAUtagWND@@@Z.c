/*
 * XREFs of ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x14005A898
 * Callers:
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x14020AB98 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 * Callees:
 *     FVisCountable @ 0x140058720 (FVisCountable.c)
 *     ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x1401EF48C (-IsForegroundWindow@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall IncVisWindows(struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  unsigned int *v4; // rdx
  unsigned int v5; // r9d

  if ( (unsigned int)FVisCountable((__int64)a1) )
  {
    v2 = *((_QWORD *)a1 + 2);
    ++*(_DWORD *)(v2 + 948);
    if ( (tagTHREADINFO::GetForegroundActivate(v2) & 0x20) != 0 && IsForegroundWindow(a1) )
      tagTHREADINFO::ClearForegroundActivate(v2, 32LL);
    v3 = *(_QWORD *)(v2 + 464);
    v4 = (unsigned int *)(v3 + 1012);
    v5 = *(_DWORD *)(v3 + 1008) + 1;
    *(_DWORD *)(v3 + 1008) = v5;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x60) != 0 )
      ++*v4;
    if ( v5 > *v4 )
      tagPROCESSINFO::UpdateProcessVisibility(v3, 0LL);
    *(_QWORD *)(v2 + 1360) |= 0x100000000uLL;
    EtwTraceProcessWindowInfo(v2);
  }
}
