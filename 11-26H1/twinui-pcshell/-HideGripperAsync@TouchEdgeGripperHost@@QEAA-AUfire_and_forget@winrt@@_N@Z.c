/*
 * XREFs of ?HideGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180596428
 * Callers:
 *     ?HideTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJ_N@Z @ 0x18058D850 (-HideTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJ_N@Z.c)
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18058DBA8 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x1805962D0 (TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall TouchEdgeGripperHost::HideGripperAsync(void (__fastcall *a1)(__int64 a1), _BYTE *a2, char a3)
{
  void (__fastcall **v7)(__int64); // [rsp+40h] [rbp+8h]

  v7 = (void (__fastcall **)(__int64))operator new(0x60uLL);
  v7[9] = a1;
  *((_BYTE *)v7 + 80) = a3;
  *v7 = TouchEdgeGripperHost::HideGripperAsync__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 64) = 0;
  TouchEdgeGripperHost::HideGripperAsync__ResumeCoro_1((__int64)v7);
  return a2;
}
