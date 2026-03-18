/*
 * XREFs of GetPhysicalScreenRect @ 0x1401533EC
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     UserGetDisconnectDeviceResolutionHint @ 0x1401B6D74 (UserGetDisconnectDeviceResolutionHint.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall GetPhysicalScreenRect(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm0
  _OWORD *result; // rax

  v3 = *(_OWORD *)(**(_QWORD **)(W32GetUserSessionState(a1, a2) + 56968) + 24LL);
  result = a1;
  *a1 = v3;
  return result;
}
