/*
 * XREFs of TrackLayeredZorder @ 0x14004BACC
 * Callers:
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     LinkWindow @ 0x1402B6200 (LinkWindow.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14004BB78 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x14004BFA8 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     GreZorderSprite @ 0x14008FC58 (GreZorderSprite.c)
 */

void __fastcall TrackLayeredZorder(struct tagWND *a1)
{
  __int64 v2; // rcx
  HWND v3; // rsi
  struct tagWND *NextLayeredWindow; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  HWND v7; // rbx
  __int64 UserSessionState; // rax

  v3 = 0LL;
  if ( (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2) )
    NextLayeredWindow = (struct tagWND *)*((_QWORD *)a1 + 14);
  else
    NextLayeredWindow = GetNextLayeredWindow(a1);
  IsWindowDesktopComposed(a1);
  if ( NextLayeredWindow )
    v3 = *(HWND *)NextLayeredWindow;
  v7 = *(HWND *)a1;
  UserSessionState = W32GetUserSessionState(v6, v5);
  GreZorderSprite(*(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 48LL), v7, v3);
  ReorderChildrenSpriteList(a1, a1);
}
