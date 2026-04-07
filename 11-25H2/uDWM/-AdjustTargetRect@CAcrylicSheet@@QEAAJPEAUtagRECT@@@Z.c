/*
 * XREFs of ?AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z @ 0x180038958
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x180038C1C (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180087058 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CAcrylicSheet::AdjustTargetRect(CAcrylicSheet *this, struct tagRECT *a2)
{
  signed int v3; // ebx
  HMONITOR v4; // rsi
  CDesktopManager *v5; // r8
  LONG right; // ecx
  LONG top; // ecx
  LONG bottom; // edx
  signed int LastError; // eax
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  v4 = MonitorFromRect(a2, 0);
  if ( v4 )
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    SetLastError(0);
    if ( GetMonitorInfoW(v4, &mi) )
    {
      v5 = CDesktopManager::s_pDesktopManagerInstance;
      if ( mi.rcWork.left == a2->left )
        a2->left -= (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * -8.0);
      right = a2->right;
      if ( mi.rcWork.right == right )
        a2->right = right - (int)(*((double *)v5 + 52) * 8.0);
      top = a2->top;
      if ( mi.rcWork.top == top )
        a2->top = top - (int)(*((double *)v5 + 52) * -8.0);
      bottom = a2->bottom;
      if ( mi.rcWork.bottom == bottom )
        a2->bottom = bottom - (int)(*((double *)v5 + 52) * 8.0);
    }
    else
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( v3 >= 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x15Du, 0LL);
    }
  }
  return (unsigned int)v3;
}
