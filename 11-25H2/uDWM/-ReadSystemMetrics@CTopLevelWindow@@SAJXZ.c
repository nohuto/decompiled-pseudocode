/*
 * XREFs of ?ReadSystemMetrics@CTopLevelWindow@@SAJXZ @ 0x180031420
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x1800335CC (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800314A0 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 */

__int64 CTopLevelWindow::ReadSystemMetrics(void)
{
  int v0; // eax
  unsigned int v1; // ebx

  v0 = CTopLevelWindow::EnsureWindowFrames();
  v1 = v0;
  if ( v0 >= 0 )
  {
    CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
    dword_180119838 = GetSystemMetrics(6);
    dword_180119834 = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
    dword_18011983C = dword_180119838;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v0, 0x2AEu, 0LL);
  }
  return v1;
}
