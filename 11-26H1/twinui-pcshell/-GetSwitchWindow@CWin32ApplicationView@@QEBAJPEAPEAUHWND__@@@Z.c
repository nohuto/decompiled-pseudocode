/*
 * XREFs of ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x18010DF24
 * Callers:
 *     ?SwitchTo@CWin32ApplicationView@@UEAAJXZ @ 0x18010DEC0 (-SwitchTo@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z @ 0x1803087E0 (-GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?SetFocus@CWin32ApplicationView@@UEAAJXZ @ 0x18030BB00 (-SetFocus@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::GetSwitchWindow(CWin32ApplicationView *this, HWND *a2)
{
  HWND Window; // rax
  HWND v4; // rdi
  HWND v5; // rbx
  HWND LastActivePopup; // rax
  HWND v7; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  HWND i; // rcx
  HWND v11; // rax

  *a2 = 0LL;
  Window = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  v4 = Window;
  do
  {
    v5 = Window;
    Window = GetWindow(Window, 4u);
  }
  while ( Window );
  LastActivePopup = GetLastActivePopup(v5);
  v7 = LastActivePopup;
  if ( !LastActivePopup )
    return 2147943800LL;
  if ( LastActivePopup != v4 && IsWindowVisible(LastActivePopup) && IsWindowEnabled(v7) )
  {
    for ( i = v7; ; i = v11 )
    {
      v11 = GetWindow(i, 4u);
      if ( !v11 )
        break;
      if ( v11 == v4 )
        goto LABEL_14;
    }
    if ( !v4 )
    {
LABEL_14:
      v4 = v7;
      goto LABEL_6;
    }
  }
  v7 = v4;
  if ( !v4 )
    return 2147943800LL;
LABEL_6:
  v8 = GhostWindowFromHungWindow(v4);
  if ( v8 )
    v7 = (HWND)v8;
  result = 0LL;
  *a2 = v7;
  return result;
}
