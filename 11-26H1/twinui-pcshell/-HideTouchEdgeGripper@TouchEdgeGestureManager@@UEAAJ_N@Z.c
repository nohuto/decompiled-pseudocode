/*
 * XREFs of ?HideTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJ_N@Z @ 0x18058D850
 * Callers:
 *     <none>
 * Callees:
 *     ??$HideTouchEdgeGripper@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x18058C9A0 (--$HideTouchEdgeGripper@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     ?HideGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180596428 (-HideGripperAsync@TouchEdgeGripperHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 */

__int64 __fastcall TouchEdgeGestureManager::HideTouchEdgeGripper(TouchEdgeGestureManager *this, char a2)
{
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v5) = a2;
  TouchEdgeGestureTelemetry::HideTouchEdgeGripper<bool &>((char *)&v5);
  try
  {
    TouchEdgeGripperHost::HideGripperAsync();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x52,
                           (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
                           v2);
  }
  return result;
}
