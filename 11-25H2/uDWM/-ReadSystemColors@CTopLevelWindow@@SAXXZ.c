/*
 * XREFs of ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180031F60
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800310F4 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x1800335CC (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

void CTopLevelWindow::ReadSystemColors(void)
{
  COLORREF v0; // edx
  COLORREF v1; // edx
  COLORREF pColor; // [rsp+40h] [rbp+8h] BYREF
  COLORREF SysColor; // [rsp+48h] [rbp+10h] BYREF

  pColor = 0;
  SysColor = 0;
  if ( GetThemeColor(*((HTHEME *)CDesktopManager::s_pDesktopManagerInstance + 69), 46, 1, 3803, &pColor) < 0
    || GetThemeColor(*((HTHEME *)CDesktopManager::s_pDesktopManagerInstance + 69), 46, 2, 3803, &SysColor) < 0 )
  {
    pColor = GetSysColor(9);
    SysColor = GetSysColor(19);
  }
  v0 = pColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 16) + 1832LL) = pColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 32) + 1832LL) = v0;
  *(_DWORD *)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 1832LL) = v0;
  v1 = SysColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 24) + 1832LL) = SysColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 40) + 1832LL) = v1;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8) + 1832LL) = v1;
}
