/*
 * XREFs of _lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_ @ 0x14019B000
 * Callers:
 *     <none>
 * Callees:
 *     SendPositionChanged @ 0x1400A6ED0 (SendPositionChanged.c)
 *     SendCrosshairEnabledStatusChanged @ 0x1400A6F40 (SendCrosshairEnabledStatusChanged.c)
 *     SendCrosshairPropertiesChanged @ 0x1400A6FA0 (SendCrosshairPropertiesChanged.c)
 *     ReadPointerDeviceSettings @ 0x1400A7F80 (ReadPointerDeviceSettings.c)
 */

__int64 __fastcall lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  W32GetUserSessionState(a1, a2);
  SendPositionChanged();
  LOBYTE(v4) = *(_DWORD *)(W32GetUserSessionState(v3, v2) + 67248) != 0;
  SendCrosshairEnabledStatusChanged(v4, v5);
  v8 = 0;
  result = ReadPointerDeviceSettings(178LL, &v8);
  if ( (_DWORD)result )
    return SendCrosshairPropertiesChanged(v8, v7);
  return result;
}
