/*
 * XREFs of ?ShowSnapBarAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@WindowsUdk@3@PEAUHWND__@@@Z @ 0x18026A8E8
 * Callers:
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x180268340 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 * Callees:
 *     SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1 @ 0x18026A7C0 (SnapFlyoutHost--ShowSnapBarAsync$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall SnapFlyoutHost::ShowSnapBarAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        int a3,
        void (__fastcall *a4)(__int64 a1))
{
  void (__fastcall **v9)(__int64); // [rsp+50h] [rbp+8h]

  v9 = (void (__fastcall **)(__int64))operator new(0x50uLL);
  v9[7] = a1;
  *((_DWORD *)v9 + 16) = a3;
  v9[9] = a4;
  *v9 = SnapFlyoutHost::ShowSnapBarAsync__ResumeCoro_1;
  *((_DWORD *)v9 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v9 + 48) = 0;
  SnapFlyoutHost::ShowSnapBarAsync__ResumeCoro_1((__int64)v9);
  return a2;
}
