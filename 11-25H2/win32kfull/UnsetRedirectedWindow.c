/*
 * XREFs of UnsetRedirectedWindow @ 0x140058298
 * Callers:
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     CleanupWindowRedirection @ 0x14005AA34 (CleanupWindowRedirection.c)
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 *     xxxPrintWindow @ 0x140241E1C (xxxPrintWindow.c)
 *     UserRecreateRedirectionBitmap @ 0x140287A60 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400580E8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x140058390 (HintSpriteShape.c)
 *     UnredirectDCEs @ 0x1400587E0 (UnredirectDCEs.c)
 *     DeleteOldRedirectionBitmap @ 0x14005DBBC (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14005DC60 (DeleteOrSetRedirectionBitmap.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // esi
  __int64 UserSessionState; // rax
  __int64 Prop; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 RedirectionBitmap; // rbx

  v2 = a2;
  v4 = 1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41358), 1u);
  v7 = (unsigned int)~v2;
  *(_DWORD *)(Prop + 32) &= v7;
  if ( (v2 & 1) != 0 )
  {
    v8 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v8 + 26) & 0x20) == 0 )
    {
      v9 = W32GetUserSessionState(v8, v7);
      v4 = HintSpriteShape(*(HDEV *)(*(_QWORD *)(v9 + 56968) + 48LL), a1);
    }
  }
  if ( !*(_DWORD *)(Prop + 32) )
  {
    SetOrClrWF(0, a1, 0xB20u, 1);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = GetRedirectionBitmap((__int64)a1, v11);
    UnredirectDCEs(a1);
    if ( RedirectionBitmap )
    {
      v4 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 0LL);
    }
  }
  return v4;
}
