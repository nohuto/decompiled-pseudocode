/*
 * XREFs of ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z @ 0x1801C99A0
 * Callers:
 *     ?SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800417B0 (-SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     ?ResultFromLastError@@YAJXZ @ 0x1801C9A20 (-ResultFromLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall ImmersiveOwnedWindowHelper::RepositionOwnedWindows(
        ImmersiveOwnedWindowHelper *this,
        __int128 *a2,
        const struct tagRECT *const a3)
{
  LPARAM lParam; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]

  lParam = (LPARAM)GetAncestor((HWND)this, 2u);
  v6 = *a2;
  if ( !lParam
    || EnumWindows((WNDENUMPROC)ImmersiveOwnedWindowHelper::EnumImmersiveComponentOwnedWindows, (LPARAM)&lParam) )
  {
    return 2147943800LL;
  }
  else
  {
    return ResultFromLastError();
  }
}
