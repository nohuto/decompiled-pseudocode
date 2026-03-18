/*
 * XREFs of SetTouchInputStatus @ 0x1401DF8D0
 * Callers:
 *     WritePointerDeviceSettings @ 0x1401DF9A0 (WritePointerDeviceSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetTouchInputStatus(int a1, int a2, int a3)
{
  bool v3; // bl
  __int64 result; // rax

  v3 = a1 != 0;
  result = W32GetUserSessionState(a1, a2, a3);
  *(_BYTE *)(result + 184) = v3;
  return result;
}
