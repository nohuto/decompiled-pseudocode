/*
 * XREFs of ?IsTouchEdgeGripperVisible@TouchEdgeGestureManager@@UEAA_NXZ @ 0x180569C20
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsTouchEdgeGripperVisible@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x180568CCC (--$IsTouchEdgeGripperVisible@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     ?IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ @ 0x180572DF0 (-IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ.c)
 */

char __fastcall TouchEdgeGestureManager::IsTouchEdgeGripperVisible(TouchEdgeGripperHost **this)
{
  char v1; // bl
  bool IsGripperVisible; // [rsp+30h] [rbp+8h] BYREF

  IsGripperVisible = TouchEdgeGripperHost::IsGripperVisible(this[11]);
  v1 = IsGripperVisible;
  TouchEdgeGestureTelemetry::IsTouchEdgeGripperVisible<bool &>((char *)&IsGripperVisible);
  return v1;
}
