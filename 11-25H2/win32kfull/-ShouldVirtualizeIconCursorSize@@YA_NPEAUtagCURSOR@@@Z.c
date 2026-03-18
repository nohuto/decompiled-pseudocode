/*
 * XREFs of ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x14007B174
 * Callers:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14007B0E8 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x140273994 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShouldVirtualizeIconCursorSize(struct tagCURSOR *a1, __int64 a2)
{
  char v2; // bl

  v2 = 1;
  if ( *((_WORD *)a1 + 37) != 1 )
    return *((_WORD *)a1 + 36) == *(_WORD *)(W32GetUserSessionState(a1, a2) + 41356);
  return v2;
}
