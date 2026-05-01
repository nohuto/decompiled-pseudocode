/*
 * XREFs of ?GetInternalWindowAlignmentWithRect@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@SAJAEBUtagRECT@@PEAUHWND__@@PEAW4Alignment@2@@Z @ 0x18030B2D0
 * Callers:
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x18030AB14 (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 * Callees:
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x18022A7D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GetInternalWindowAlignmentWithRect(
        LONG *a1,
        HWND a2,
        _DWORD *a3)
{
  int v4; // ebx
  const char *v6; // r9
  LONG v8; // r14d
  LONG v9; // r13d
  LONG v10; // r15d
  LONG v11; // r12d
  LONG bottom; // r8d
  LONG right; // edx
  LONG top; // ecx
  LONG left; // esi
  LONG v16; // eax
  int v17; // r9d
  int v18; // r10d
  int v19; // r11d
  int v20; // eax
  int v21; // eax
  int v22; // r10d
  int v23; // eax
  int v24; // r9d
  int v25; // eax
  struct tagRECT rc; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v4 = 0;
  *a3 = 0;
  Rect = 0LL;
  if ( !GetWindowRect(a2, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x30,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
             v6);
  v8 = *a1;
  v9 = a1[1];
  v10 = a1[2];
  v11 = a1[3];
  rc.left = *a1;
  rc.top = v9;
  rc.right = v10;
  rc.bottom = v11;
  InflateRect(&rc, 2, 2);
  bottom = Rect.bottom;
  right = Rect.right;
  if ( rc.bottom > Rect.bottom )
    bottom = rc.bottom;
  top = Rect.top;
  if ( rc.right > Rect.right )
    right = rc.right;
  left = Rect.left;
  v16 = Rect.left;
  Rect.right = right;
  if ( rc.top < Rect.top )
    top = rc.top;
  Rect.top = top;
  if ( rc.left < Rect.left )
    v16 = rc.left;
  Rect.left = v16;
  Rect.bottom = bottom;
  if ( Geometry::operator==(&Rect, &rc) )
  {
    v20 = v8 - left;
    if ( v8 - left < 0 )
      v20 = left - v8;
    if ( v20 > 2 )
    {
      v21 = v10 - v19;
      if ( v10 - v19 < 0 )
        v21 = v19 - v10;
      if ( v21 > 2 )
        goto LABEL_22;
      *a3 = 2;
    }
    else
    {
      *a3 = 1;
    }
    v4 = v17 - v18;
LABEL_22:
    if ( v4 < v19 - left - 4 )
    {
      v22 = v18 - v9;
      v23 = -v22;
      if ( v22 > 0 )
        v23 = v22;
      if ( v23 > 2 )
      {
        v24 = v17 - v11;
        v25 = -v24;
        if ( v24 > 0 )
          v25 = v24;
        if ( v25 <= 2 )
          *a3 = 8;
      }
      else
      {
        *a3 = 4;
      }
    }
    return 0LL;
  }
  *a3 = 0;
  return 0LL;
}
