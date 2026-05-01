/*
 * XREFs of ?ShowGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_N@Z @ 0x180596B10
 * Callers:
 *     ?ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGripperEventHandler@@@Z @ 0x18058DAF0 (-ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGrippe.c)
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18058DBA8 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180596980 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall TouchEdgeGripperHost::ShowGripperAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        int a3,
        void (__fastcall *a4)(__int64 a1),
        char a5)
{
  void (__fastcall **v10)(__int64); // [rsp+50h] [rbp+8h]

  v10 = (void (__fastcall **)(__int64))operator new(0x60uLL);
  v10[7] = a1;
  *((_DWORD *)v10 + 16) = a3;
  v10[9] = a4;
  *((_BYTE *)v10 + 80) = a5;
  *v10 = TouchEdgeGripperHost::ShowGripperAsync__ResumeCoro_1;
  *((_DWORD *)v10 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v10 + 48) = 0;
  TouchEdgeGripperHost::ShowGripperAsync__ResumeCoro_1((__int64)v10);
  return a2;
}
