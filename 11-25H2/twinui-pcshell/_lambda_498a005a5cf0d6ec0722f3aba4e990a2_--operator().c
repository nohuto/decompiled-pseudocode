/*
 * XREFs of _lambda_498a005a5cf0d6ec0722f3aba4e990a2_::operator() @ 0x1805692FC
 * Callers:
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x180569D84 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$IsSystemModelDialogOrFirstSignInAnimation@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x180568C88 (--$IsSystemModelDialogOrFirstSignInAnimation@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 */

char lambda_498a005a5cf0d6ec0722f3aba4e990a2_::operator()()
{
  HWND ForegroundWindow; // rbx
  HWND LastActivePopup; // rax
  char v2; // di
  int v3; // ebx
  int v4; // eax
  char v6[16]; // [rsp+30h] [rbp-238h] BYREF
  WCHAR ClassName[264]; // [rsp+40h] [rbp-228h] BYREF

  ForegroundWindow = GetForegroundWindow();
  memset_0(ClassName, 0, 0x208uLL);
  LastActivePopup = GetLastActivePopup(ForegroundWindow);
  if ( GetClassNameW(LastActivePopup, ClassName, 260) <= 0
    || (v2 = 1,
        v3 = CompareStringOrdinal(ClassName, -1, L"Shell_SystemDialog", -1, 1),
        v4 = CompareStringOrdinal(ClassName, -1, L"FSIAWebControlHostClass", -1, 1),
        v3 != 2)
    && v4 != 2 )
  {
    v2 = 0;
  }
  v6[0] = v2;
  TouchEdgeGestureTelemetry::IsSystemModelDialogOrFirstSignInAnimation<bool &>(v6);
  return v2;
}
