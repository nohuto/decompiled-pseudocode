/*
 * XREFs of ?GetBoundRectForCursorPos@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x1804894C4
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18024FCC0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundRectForCursorPos(
        KeyboardHosting::UIAutomationHelpers *this,
        struct tagRECT *a2)
{
  const char *v3; // r9
  LONG x; // eax
  LONG y; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT Point; // [rsp+30h] [rbp+8h] BYREF

  Point = 0LL;
  if ( !GetCursorPos(&Point) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x136,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
             v3);
  x = Point.x;
  y = Point.y;
  a2->left = Point.x;
  a2->right = x + 5;
  a2->top = y;
  a2->bottom = y + 5;
  return 0LL;
}
