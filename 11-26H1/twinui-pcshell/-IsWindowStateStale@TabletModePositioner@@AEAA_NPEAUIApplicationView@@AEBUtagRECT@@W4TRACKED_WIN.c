/*
 * XREFs of ?IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x180519534
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x18051AB50 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x18022A7D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

bool __fastcall TabletModePositioner::IsWindowStateStale(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int *a3,
        int a4)
{
  char v6; // si
  HWND WindowForView; // rax
  HWND v8; // rdi
  int v9; // ebx
  BOOL v10; // eax
  int v11; // eax
  _DWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-38h] BYREF

  v6 = 1;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  v8 = WindowForView;
  if ( a4 )
  {
    v9 = a4 - 1;
    if ( !v9 )
    {
      v10 = IsZoomed(WindowForView);
      return !v10;
    }
    if ( v9 == 1 )
    {
      v10 = IsIconic(WindowForView);
      return !v10;
    }
  }
  else if ( !IsZoomed(WindowForView) && !IsIconic(v8) )
  {
    Rect = 0LL;
    GetWindowRect(v8, &Rect);
    v11 = *a3;
    v13[1] = a3[1];
    v13[2] = a3[2];
    v13[3] = a3[3];
    v13[0] = v11;
    return !Geometry::operator==(&Rect, v13);
  }
  return v6;
}
