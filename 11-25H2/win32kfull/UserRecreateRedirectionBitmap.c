/*
 * XREFs of UserRecreateRedirectionBitmap @ 0x140287A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB60 (--1CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB78 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400580E8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     UnsetRedirectedWindow @ 0x140058298 (UnsetRedirectedWindow.c)
 *     HintSpriteShape @ 0x140058390 (HintSpriteShape.c)
 *     DeleteOldRedirectionBitmap @ 0x14005DBBC (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14005DC60 (DeleteOrSetRedirectionBitmap.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1402877F4 (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 */

void __fastcall UserRecreateRedirectionBitmap(__int64 a1)
{
  struct tagWND *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  HSURF RedirectionBitmap; // rdi
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)v9);
  v2 = (struct tagWND *)ValidateHwnd(a1);
  CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v9);
  if ( v2 )
  {
    v4 = *((_QWORD *)v2 + 5);
    if ( (*(_BYTE *)(v4 + 27) & 0x20) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v4, v3);
      HintSpriteShape(*(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 48LL), v2, 0LL, 0);
      DeleteOldRedirectionBitmap((__int64)v2);
      RedirectionBitmap = (HSURF)GetRedirectionBitmap((__int64)v2, v6);
      if ( RedirectionBitmap )
      {
        UnselectRedirectionBitmapsInDCEs(v2, v7);
        SetRedirectionBitmap(v2, 0LL, 0);
        DeleteOrSetRedirectionBitmap((__int64)v2, RedirectionBitmap, 1);
        if ( (int)RecreateRedirectionBitmap(v2, 0, 0, 0, 0, 0LL) < 0 )
          UnsetRedirectedWindow(v2, 1LL);
      }
    }
  }
}
