/*
 * XREFs of ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x18006E9D8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18004AD98 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800CB09C (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
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
  if ( GetThemeColor(*((HTHEME *)CDesktopManager::s_pDesktopManagerInstance + 70), 46, 1, 3803, &pColor) < 0
    || GetThemeColor(*((HTHEME *)CDesktopManager::s_pDesktopManagerInstance + 70), 46, 2, 3803, &SysColor) < 0 )
  {
    pColor = GetSysColor(9);
    SysColor = GetSysColor(19);
  }
  v0 = pColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 16LL) + 1824LL) = pColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 32LL) + 1824LL) = v0;
  *(_DWORD *)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames[0] + 1824LL) = v0;
  v1 = SysColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 24LL) + 1824LL) = SysColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 40LL) + 1824LL) = v1;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 8LL) + 1824LL) = v1;
}
