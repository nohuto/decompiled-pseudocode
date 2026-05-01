/*
 * XREFs of ?ShowSnapBarOnMonitorAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@UtagPOINT@@@Z @ 0x18026AD14
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180268460 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x18026AB30 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall SnapFlyoutHost::ShowSnapBarOnMonitorAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        void (__fastcall *a3)(__int64 a1))
{
  void (__fastcall **v7)(__int64); // [rsp+40h] [rbp+8h]

  v7 = (void (__fastcall **)(__int64))operator new(0x80uLL);
  v7[13] = a1;
  v7[14] = a3;
  *v7 = SnapFlyoutHost::ShowSnapBarOnMonitorAsync__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 96) = 0;
  SnapFlyoutHost::ShowSnapBarOnMonitorAsync__ResumeCoro_1((__int64)v7);
  return a2;
}
