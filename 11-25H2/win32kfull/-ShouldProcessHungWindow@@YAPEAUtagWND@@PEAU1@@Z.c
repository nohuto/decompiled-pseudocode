/*
 * XREFs of ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14014BE9C
 * Callers:
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x14014BC38 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x14014BDF8 (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 *     NtUserQueryWindow @ 0x14024BE50 (NtUserQueryWindow.c)
 * Callees:
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14001F054 (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x14014BC9C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x14014C01C (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall ShouldProcessHungWindow(struct tagWND *a1)
{
  const struct tagTHREADINFO **TopLevelWindow; // rax
  __int64 v2; // rbx
  const struct tagWND *v3; // rdi
  __int64 v5; // rdx

  TopLevelWindow = (const struct tagTHREADINFO **)GetTopLevelWindow((__int64)a1);
  v2 = 0LL;
  v3 = (const struct tagWND *)TopLevelWindow;
  if ( !TopLevelWindow || !IsHungWindow(TopLevelWindow) || !_ShouldGhostWindow(v3) || GetGhostProp(v3, v5) )
    return 0LL;
  if ( !IsWindowCloaked(v3) )
    return v3;
  return (struct tagWND *)v2;
}
