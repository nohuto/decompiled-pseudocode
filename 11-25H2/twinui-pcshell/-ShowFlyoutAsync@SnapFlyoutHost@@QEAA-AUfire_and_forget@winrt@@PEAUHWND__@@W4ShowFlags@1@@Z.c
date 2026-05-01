/*
 * XREFs of ?ShowFlyoutAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x18021058C
 * Callers:
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x180057520 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x18057F7A0 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     SnapFlyoutHost::ShowFlyoutAsync$_InitCoro$2 @ 0x1802726E4 (SnapFlyoutHost--ShowFlyoutAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall SnapFlyoutHost::ShowFlyoutAsync(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v7; // eax
  int v9; // [rsp+B8h] [rbp+10h] BYREF
  int v10; // [rsp+C8h] [rbp+20h] BYREF

  v10 = a4;
  v7 = (unsigned int)operator new(0x60uLL);
  v9 = 0;
  SnapFlyoutHost::ShowFlyoutAsync__InitCoro_2((unsigned int)&v9, v7, a2, a3, (__int64)&v10, a1);
  return a2;
}
