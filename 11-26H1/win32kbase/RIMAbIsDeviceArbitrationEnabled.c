/*
 * XREFs of RIMAbIsDeviceArbitrationEnabled @ 0x1400621A4
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     RIMIsDeviceArbitrationEnabled @ 0x140061F00 (RIMIsDeviceArbitrationEnabled.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x140061F18 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMAbIsDeviceArbitrationEnabled(int a1, int a2, int a3)
{
  return *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 244) != 0;
}
