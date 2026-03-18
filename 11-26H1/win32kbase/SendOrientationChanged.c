/*
 * XREFs of SendOrientationChanged @ 0x140199390
 * Callers:
 *     NtSetShellCursorState @ 0x1401E1D00 (NtSetShellCursorState.c)
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

__int64 __fastcall SendOrientationChanged(double a1)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+30h] [rbp-18h]

  *(double *)&v2[1] = a1;
  v2[0] = 5LL;
  v3 = 0LL;
  return SendMessageTo(0, (int)v2, 32);
}
