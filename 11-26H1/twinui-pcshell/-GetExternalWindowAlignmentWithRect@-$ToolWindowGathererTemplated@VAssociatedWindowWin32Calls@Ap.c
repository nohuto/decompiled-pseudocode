/*
 * XREFs of ?GetExternalWindowAlignmentWithRect@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@SAJAEBUtagRECT@@PEAUHWND__@@PEAW4Alignment@2@@Z @ 0x18030B02C
 * Callers:
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x18030AB14 (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GetExternalWindowAlignmentWithRect(
        RECT *lprcSrc1,
        HWND hWnd,
        _DWORD *a3)
{
  const char *v5; // r9
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct tagRECT Rect; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *a3 = 0;
  Rect = 0LL;
  if ( !GetWindowRect(hWnd, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x61,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
             v5);
  rc = Rect;
  InflateRect(&rc, -2, -2);
  rcDst = 0LL;
  if ( IntersectRect(&rcDst, lprcSrc1, &rc) )
  {
    *a3 = 0;
  }
  else if ( Rect.left > lprcSrc1->left + 2 || Rect.right < lprcSrc1->right - 2 )
  {
    if ( Rect.top <= lprcSrc1->top + 2 && Rect.bottom >= lprcSrc1->bottom - 2 )
    {
      v9 = lprcSrc1->right - Rect.left;
      if ( Rect.left - lprcSrc1->right > 0 )
        v9 = Rect.left - lprcSrc1->right;
      if ( v9 > 2 )
      {
        v10 = lprcSrc1->left - Rect.right;
        if ( Rect.right - lprcSrc1->left > 0 )
          v10 = Rect.right - lprcSrc1->left;
        if ( v10 <= 2 )
          *a3 = 1;
      }
      else
      {
        *a3 = 2;
      }
    }
  }
  else
  {
    v7 = lprcSrc1->bottom - Rect.top;
    if ( v7 < 0 )
      v7 = Rect.top - lprcSrc1->bottom;
    if ( v7 > 2 )
    {
      v8 = lprcSrc1->top - Rect.bottom;
      if ( v8 < 0 )
        v8 = Rect.bottom - lprcSrc1->top;
      if ( v8 <= 2 )
        *a3 = 4;
    }
    else
    {
      *a3 = 8;
    }
  }
  return 0LL;
}
