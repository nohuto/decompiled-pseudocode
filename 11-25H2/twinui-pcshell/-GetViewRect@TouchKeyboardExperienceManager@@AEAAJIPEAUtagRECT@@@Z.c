/*
 * XREFs of ?GetViewRect@TouchKeyboardExperienceManager@@AEAAJIPEAUtagRECT@@@Z @ 0x180462354
 * Callers:
 *     ?GetInputViewRect@TouchKeyboardExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x1804621C0 (-GetInputViewRect@TouchKeyboardExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x180461F4C (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetViewRect(RTL_SRWLOCK *this, int a2, struct tagRECT *a3)
{
  int FrameWindowByViewId; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  const char *v7; // r9
  HWND hWnd; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  hWnd = 0LL;
  *a3 = 0LL;
  FrameWindowByViewId = TouchKeyboardExperienceManager::GetFrameWindowByViewId(this, a2, &hWnd);
  v5 = FrameWindowByViewId;
  if ( FrameWindowByViewId >= 0 )
  {
    Rect = 0LL;
    if ( GetWindowRect(hWnd, &Rect) )
    {
      result = 0LL;
      *a3 = Rect;
    }
    else
    {
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x831,
               (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
               v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)FrameWindowByViewId);
    return v5;
  }
  return result;
}
