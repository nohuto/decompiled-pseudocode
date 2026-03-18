/*
 * XREFs of ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14004BB78
 * Callers:
 *     TrackLayeredZorder @ 0x14004BACC (TrackLayeredZorder.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x14004BFA8 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 * Callees:
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x14004BF48 (IsMessageParentWindow.c)
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x14004BF68 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetNextLayeredWindow(struct tagWND *a1)
{
  struct tagWND *NextLayeredWindowSubtree; // r10
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // r9

  NextLayeredWindowSubtree = 0LL;
  while ( a1 && !(unsigned int)IsDesktopWindow(a1) && !(unsigned int)IsMessageParentWindow() )
  {
    if ( v3 != v4 && (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 26LL) & 8) != 0 )
      return (struct tagWND *)v3;
    NextLayeredWindowSubtree = GetNextLayeredWindowSubtree(*(struct tagWND **)(v3 + 88));
    if ( NextLayeredWindowSubtree )
      return NextLayeredWindowSubtree;
    a1 = *(struct tagWND **)(v5 + 104);
  }
  return NextLayeredWindowSubtree;
}
