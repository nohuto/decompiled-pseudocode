/*
 * XREFs of ?OnMinSizePreferencesUpdated@CWinRTApplicationView@@UEAAJPEAUHWND__@@@Z @ 0x1801FD3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWinRTApplicationView::OnMinSizePreferencesUpdated(CWinRTApplicationView *this, HWND a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 312LL))(*((_QWORD *)this + 26));
  v5 = v4;
  if ( !v4 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 6);
    *((_DWORD *)this + 58) = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.X");
    *((_DWORD *)this + 59) = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.Y");
    if ( this != (CWinRTApplicationView *)-48LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 6);
    return 0LL;
  }
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x184,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
