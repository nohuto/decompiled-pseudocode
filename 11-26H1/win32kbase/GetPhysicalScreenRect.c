/*
 * XREFs of GetPhysicalScreenRect @ 0x14019133C
 * Callers:
 *     UserGetDisconnectDeviceResolutionHint @ 0x1401D9C74 (UserGetDisconnectDeviceResolutionHint.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall GetPhysicalScreenRect(_OWORD *a1, int a2, int a3)
{
  __int128 v4; // xmm0
  _OWORD *result; // rax

  v4 = *(_OWORD *)(**(_QWORD **)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 56968) + 24LL);
  result = a1;
  *a1 = v4;
  return result;
}
