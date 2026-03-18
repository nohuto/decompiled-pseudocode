/*
 * XREFs of _lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_ @ 0x1401B4170
 * Callers:
 *     <none>
 * Callees:
 *     SendCrosshairPropertiesChanged @ 0x14008D180 (SendCrosshairPropertiesChanged.c)
 *     SendCrosshairEnabledStatusChanged @ 0x14018E950 (SendCrosshairEnabledStatusChanged.c)
 *     SendPositionChanged @ 0x14018E990 (SendPositionChanged.c)
 *     ReadPointerDeviceSettings @ 0x1401B41E0 (ReadPointerDeviceSettings.c)
 */

__int64 __fastcall lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // [rsp+40h] [rbp+18h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  SendPositionChanged((_QWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4960LL));
  v7 = W32GetUserSessionState(v5, v4, v6);
  SendCrosshairEnabledStatusChanged(*(_DWORD *)(v7 + 67240) != 0);
  v9 = 0;
  result = ReadPointerDeviceSettings(178LL, &v9);
  if ( (_DWORD)result )
    return SendCrosshairPropertiesChanged(v9);
  return result;
}
