/*
 * XREFs of ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x14004BFA8
 * Callers:
 *     TrackLayeredZorder @ 0x14004BACC (TrackLayeredZorder.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14004BB78 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GreZorderSprite @ 0x14008FC58 (GreZorderSprite.c)
 */

void __fastcall ReorderChildrenSpriteList(struct tagWND *a1, struct tagWND *a2)
{
  struct tagWND *v2; // rax
  struct tagWND *v4; // rdi
  bool i; // zf
  struct tagWND *NextLayeredWindow; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  HWND v9; // rbp
  HWND v10; // rbx
  __int64 UserSessionState; // rax

  v2 = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( v2 )
  {
    do
    {
      v4 = v2;
      v2 = (struct tagWND *)*((_QWORD *)v2 + 14);
    }
    while ( v2 );
    if ( v4 != a1 )
    {
      for ( i = (*(_BYTE *)(*((_QWORD *)v4 + 5) + 26LL) & 8) == 0; ; i = NextLayeredWindow == 0LL )
      {
        if ( !i )
        {
          IsWindowDesktopComposed(v4);
          if ( a2 )
            v9 = *(HWND *)a2;
          else
            v9 = 0LL;
          v10 = *(HWND *)v4;
          UserSessionState = W32GetUserSessionState(v8, v7);
          GreZorderSprite(*(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 48LL), v10, v9);
        }
        NextLayeredWindow = GetNextLayeredWindow(v4);
        v4 = NextLayeredWindow;
        if ( !NextLayeredWindow || NextLayeredWindow == a2 )
          break;
      }
    }
  }
}
