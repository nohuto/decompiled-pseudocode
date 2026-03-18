/*
 * XREFs of ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1402F0210
 * Callers:
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1402417DC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     GreProtectSpriteContent @ 0x140266204 (GreProtectSpriteContent.c)
 *     ChangeWindowBitmapOwner @ 0x1402A4358 (ChangeWindowBitmapOwner.c)
 */

__int64 __fastcall ProtectWindowBitmap(struct tagWND *a1, char a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // eax
  Gre::Base *v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax

  v4 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v5 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 56LL);
  else
    v5 = 0LL;
  v6 = ChangeWindowBitmapOwner((__int64)a1, v5);
  if ( v6 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    {
      v7 = IsWindowDesktopComposed(a1);
      v8 = *(Gre::Base **)a1;
      v9 = v7;
      UserSessionState = W32GetUserSessionState(v11, v10);
      v6 = GreProtectSpriteContent(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL), v8, v9, a2);
      if ( !v6 )
      {
        if ( v4 )
          ChangeWindowBitmapOwner((__int64)a1, 0LL);
      }
    }
  }
  return v6;
}
