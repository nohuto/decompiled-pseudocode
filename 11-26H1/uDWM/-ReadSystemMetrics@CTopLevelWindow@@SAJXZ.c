/*
 * XREFs of ?ReadSystemMetrics@CTopLevelWindow@@SAJXZ @ 0x180065540
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18004AD98 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800655C4 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 */

__int64 CTopLevelWindow::ReadSystemMetrics(void)
{
  int v0; // eax
  unsigned int v1; // ebx

  v0 = CTopLevelWindow::EnsureWindowFrames();
  v1 = v0;
  if ( v0 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v0, 0x24Du, 0LL);
  }
  else
  {
    CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
    dword_1801158C8 = GetSystemMetrics(6);
    dword_1801158C4 = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
    dword_1801158CC = dword_1801158C8;
  }
  return v1;
}
