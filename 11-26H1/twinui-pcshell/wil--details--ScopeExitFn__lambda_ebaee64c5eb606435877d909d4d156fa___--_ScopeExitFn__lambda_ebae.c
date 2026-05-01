/*
 * XREFs of wil::details::ScopeExitFn__lambda_ebaee64c5eb606435877d909d4d156fa___::_ScopeExitFn__lambda_ebaee64c5eb606435877d909d4d156fa___ @ 0x1802BF91C
 * Callers:
 *     _VirtualDesktopHotKeyWindow::Initialize_::_1_::dtor$0 @ 0x1806F48FA (_VirtualDesktopHotKeyWindow--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_ebaee64c5eb606435877d909d4d156fa___::_ScopeExitFn__lambda_ebaee64c5eb606435877d909d4d156fa___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    DestroyWindow(*(HWND *)(*(_QWORD *)a1 + 8LL));
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = 0LL;
  }
  return result;
}
