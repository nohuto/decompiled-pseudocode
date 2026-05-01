/*
 * XREFs of ?GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x180106A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::GetShowInSwitchers(CWin32ApplicationView *this, int *a2)
{
  HWND Window; // rax
  HWND v5; // rdi
  HWND v6; // rbx
  HWND LastActivePopup; // rax
  HWND v8; // rbx
  HWND v10; // rax

  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 72LL))(*((_QWORD *)this + 27)) )
    goto LABEL_9;
  Window = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  v5 = Window;
  do
  {
    v6 = Window;
    Window = GetWindow(Window, 4u);
  }
  while ( Window );
  LastActivePopup = GetLastActivePopup(v6);
  v8 = LastActivePopup;
  if ( !LastActivePopup )
    goto LABEL_9;
  if ( LastActivePopup != v5 && IsWindowVisible(LastActivePopup) && IsWindowEnabled(v8) )
  {
    v10 = GetWindow(v8, 4u);
    if ( v10 )
    {
      while ( v10 != v5 )
      {
        v10 = GetWindow(v10, 4u);
        if ( !v10 )
          goto LABEL_16;
      }
      goto LABEL_14;
    }
LABEL_16:
    if ( v10 == v5 )
    {
LABEL_14:
      v5 = v8;
      goto LABEL_7;
    }
  }
  if ( !v5 )
  {
LABEL_9:
    *a2 = 0;
    return 0LL;
  }
LABEL_7:
  GhostWindowFromHungWindow(v5);
  *a2 = 1;
  return 0LL;
}
