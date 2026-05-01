/*
 * XREFs of ?ShowSnapBarOnMonitorAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@UtagPOINT@@@Z @ 0x18021FA68
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180270510 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_InitCoro$2 @ 0x180272C68 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall SnapFlyoutHost::ShowSnapBarOnMonitorAsync(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  int v7; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v8; // [rsp+100h] [rbp+18h] BYREF

  v8 = a3;
  v5 = (unsigned int)operator new(0xB0uLL);
  v7 = 0;
  SnapFlyoutHost::ShowSnapBarOnMonitorAsync__InitCoro_2((unsigned int)&v7, v5, a2, (unsigned int)&v8, a1);
  return a2;
}
