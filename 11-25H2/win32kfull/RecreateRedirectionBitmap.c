/*
 * XREFs of RecreateRedirectionBitmap @ 0x140057DF8
 * Callers:
 *     UpdateWindowMonitor @ 0x140033EB0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x14009D200 (NtUserHwndQueryRedirectionInfo.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z @ 0x140287508 (-RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x140287A60 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     GetRedirectionFlags @ 0x140053D08 (GetRedirectionFlags.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140057650 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1400579A0 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x140057C3C (GreNotifyDirtySprite.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400580E8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x140058390 (HintSpriteShape.c)
 *     ChangeRedirectionParentInDCEs @ 0x140058438 (ChangeRedirectionParentInDCEs.c)
 *     CreateOrGetRedirectionBitmap @ 0x14005D1D0 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14005DC60 (DeleteOrSetRedirectionBitmap.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(struct tagWND *a1, LONG a2, int a3, int a4, int a5, HSURF *a6)
{
  int v8; // eax
  int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  HSURF RedirectionBitmap; // rsi
  int v13; // ebx
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  struct _POINTL v20; // [rsp+40h] [rbp-89h]
  int v21; // [rsp+48h] [rbp-81h]
  int v22; // [rsp+4Ch] [rbp-7Dh]
  unsigned int v23; // [rsp+50h] [rbp-79h]
  struct _POINTL v24; // [rsp+58h] [rbp-71h]
  struct tagBITMAP v25; // [rsp+60h] [rbp-69h] BYREF
  struct tagBITMAP v26; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v27[32]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-9h]

  v22 = a3;
  v20.x = a2;
  v24 = 0LL;
  memset(&v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  v9 = v8;
  v21 = 0;
  v23 = 0;
  RedirectionBitmap = (HSURF)GetRedirectionBitmap(v11, v10);
  SURFREF::SURFREF((SURFREF *)v27, RedirectionBitmap);
  if ( v28 )
    v13 = *(_DWORD *)(v28 + 112) & 0x800000;
  else
    v13 = 0;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v27);
  if ( v13 && a4 && !v9 )
  {
    if ( a6 )
      *a6 = 0LL;
    return 0LL;
  }
  v14 = CreateOrGetRedirectionBitmap(a1);
  if ( v14 < 0 )
    goto LABEL_21;
  if ( !(unsigned int)SetRedirectionBitmap(a1, *(HBITMAP *)&v24, 0) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))DeleteOrSetRedirectionBitmap)(a1, v24, 1LL);
    v14 = -1073741801;
LABEL_21:
    SetRedirectionBitmap(a1, 0LL, 0);
    v23 = 1;
  }
  if ( (GetRedirectionFlags((__int64)a1, v15) & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v17, v16);
    HintSpriteShape(*(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 48LL), a1);
  }
  ChangeRedirectionParentInDCEs(a1, v23);
  if ( a6 )
  {
    *a6 = RedirectionBitmap;
  }
  else if ( RedirectionBitmap )
  {
    DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 1LL);
  }
  return (unsigned int)v14;
}
