/*
 * XREFs of ?IsPointOnTouchEdgeGripper@TouchEdgeGestureManager@@UEAA_NUtagPOINT@@@Z @ 0x18058D950
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsPointOnTouchEdgeGripper@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x18058CA6C (--$IsPointOnTouchEdgeGripper@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     ?IsPointOnGripper@TouchEdgeGripperHost@@QEAA_NUtagPOINT@@@Z @ 0x180596550 (-IsPointOnGripper@TouchEdgeGripperHost@@QEAA_NUtagPOINT@@@Z.c)
 */

char __fastcall TouchEdgeGestureManager::IsPointOnTouchEdgeGripper(TouchEdgeGripperHost **this, struct tagPOINT a2)
{
  char v2; // bl
  bool IsPointOnGripper; // [rsp+30h] [rbp+8h] BYREF

  IsPointOnGripper = TouchEdgeGripperHost::IsPointOnGripper(this[11], a2);
  v2 = IsPointOnGripper;
  TouchEdgeGestureTelemetry::IsPointOnTouchEdgeGripper<bool &>((char *)&IsPointOnGripper);
  return v2;
}
