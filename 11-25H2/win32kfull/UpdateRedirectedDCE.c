/*
 * XREFs of UpdateRedirectedDCE @ 0x140059FD0
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x140058438 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1400587E0 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x140059EA8 (RedirectDCEs.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140058630 (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14005876C (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GetStyleWindow @ 0x14005A130 (GetStyleWindow.c)
 *     RevalidateDCE @ 0x14005A190 (RevalidateDCE.c)
 *     GreSelectRedirectionBitmap @ 0x14009A2A0 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x14009A6C0 (GreHintDCWnd.c)
 */

void __fastcall UpdateRedirectedDCE(tagDCE *this, int a2)
{
  HSURF RedirectionBitmap; // rsi
  __int64 StyleWindow; // rax
  __int64 v6; // rdx
  struct tagWND *v7; // rdi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagWND *v15; // rdx

  RedirectionBitmap = 0LL;
  StyleWindow = GetStyleWindow(*((_QWORD *)this + 10), 2848LL);
  v7 = (struct tagWND *)StyleWindow;
  if ( StyleWindow )
    RedirectionBitmap = (HSURF)GetRedirectionBitmap(StyleWindow, v6);
  v8 = GreSelectRedirectionBitmap(*((HDC *)this + 2), RedirectionBitmap);
  v9 = 1;
  if ( !v8 )
    GreSelectVisRgn(*((_QWORD *)this + 2), 0LL, 1LL);
  v10 = *((_DWORD *)this + 12);
  v11 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    v12 = v10 | 0x4000;
    v13 = 5LL;
  }
  else
  {
    v12 = v10 & 0xFFFFBFFF;
    v13 = 6LL;
  }
  *((_DWORD *)this + 12) = v12;
  GreGetBounds(v11, 0LL, v13);
  if ( *((struct tagWND **)this + 12) == v7 )
  {
    v9 = a2;
    if ( !v7 )
      goto LABEL_14;
    goto LABEL_12;
  }
  tagDCE::SetPwndRedirect(this, v7);
  GreHintDCWnd(*((HDC *)this + 2), 0);
  if ( v7 )
  {
    v14 = *((_QWORD *)v7 + 5);
    if ( (*(_BYTE *)(v14 + 26) & 8) != 0 )
      GreHintDCWnd(*((HDC *)this + 2), (*(_WORD *)(v14 + 42) & 0x2FFF) == 669);
LABEL_12:
    v15 = (struct tagWND *)*((_QWORD *)this + 10);
    if ( v15 == v7 )
      tagDCE::SetPwndClip(this, v15);
LABEL_14:
    if ( !v9 )
      return;
  }
  RevalidateDCE(this);
}
