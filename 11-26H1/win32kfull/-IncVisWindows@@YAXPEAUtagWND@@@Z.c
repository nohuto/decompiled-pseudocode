/*
 * XREFs of ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x140295F3C
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140235DB8 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 * Callees:
 *     FVisCountable @ 0x1400105A0 (FVisCountable.c)
 *     ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x14015BB1C (-IsForegroundWindow@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall IncVisWindows(struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int *v5; // rdx
  unsigned int v6; // r9d

  if ( (unsigned int)FVisCountable((__int64)a1) )
  {
    v2 = *((_QWORD *)a1 + 2);
    ++*(_DWORD *)(v2 + 936);
    if ( (tagTHREADINFO::GetForegroundActivate(v2) & 0x20) != 0 && IsForegroundWindow(a1, v3) )
      tagTHREADINFO::ClearForegroundActivate(v2, 32LL);
    v4 = *(_QWORD *)(v2 + 456);
    v5 = (unsigned int *)(v4 + 1012);
    v6 = *(_DWORD *)(v4 + 1008) + 1;
    *(_DWORD *)(v4 + 1008) = v6;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x60) != 0 )
      ++*v5;
    if ( v6 > *v5 )
      tagPROCESSINFO::UpdateProcessVisibility(v4, 0LL);
    *(_QWORD *)(v2 + 1360) |= 0x100000000uLL;
    EtwTraceProcessWindowInfo(v2);
  }
}
