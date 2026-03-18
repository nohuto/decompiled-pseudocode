/*
 * XREFs of ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140163388
 * Callers:
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x14016327C (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1401632E4 (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 *     NtUserQueryWindow @ 0x14019A8B0 (NtUserQueryWindow.c)
 * Callees:
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14002367C (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140046B68 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x14029454C (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
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
