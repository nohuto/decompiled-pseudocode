/*
 * XREFs of ?GetCoverWindow@TabletModeCoverWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x1801F8300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TabletModeCoverWindow::GetCoverWindow(RTL_SRWLOCK *this, HWND *a2)
{
  RTL_SRWLOCK *v2; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 5;
  AcquireSRWLockShared(this + 5);
  *a2 = (HWND)this[4].Ptr;
  if ( this[4].Ptr )
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)0x80004005LL);
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return 2147500037LL;
  }
}
