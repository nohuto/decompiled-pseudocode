/*
 * XREFs of SetTouchInputStatus @ 0x1401B9600
 * Callers:
 *     WritePointerDeviceSettings @ 0x14019DB40 (WritePointerDeviceSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetTouchInputStatus(__int64 a1, __int64 a2)
{
  bool v2; // bl
  __int64 result; // rax

  v2 = (_DWORD)a1 != 0;
  result = W32GetUserSessionState(a1, a2);
  *(_BYTE *)(result + 184) = v2;
  return result;
}
