/*
 * XREFs of ?ShowFlyoutAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x18026A73C
 * Callers:
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x18006FA20 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1805A3340 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1 @ 0x18026A570 (SnapFlyoutHost--ShowFlyoutAsync$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall SnapFlyoutHost::ShowFlyoutAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        void (__fastcall *a3)(__int64 a1),
        int a4)
{
  void (__fastcall **v9)(__int64); // [rsp+50h] [rbp+8h]

  v9 = (void (__fastcall **)(__int64))operator new(0x60uLL);
  v9[9] = a1;
  v9[10] = a3;
  *((_DWORD *)v9 + 22) = a4;
  *v9 = SnapFlyoutHost::ShowFlyoutAsync__ResumeCoro_1;
  *((_DWORD *)v9 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v9 + 64) = 0;
  SnapFlyoutHost::ShowFlyoutAsync__ResumeCoro_1((__int64)v9);
  return a2;
}
