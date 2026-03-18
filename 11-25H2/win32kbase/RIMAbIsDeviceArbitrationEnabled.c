/*
 * XREFs of RIMAbIsDeviceArbitrationEnabled @ 0x1400C4600
 * Callers:
 *     RIMIsDeviceArbitrationEnabled @ 0x1400C3A20 (RIMIsDeviceArbitrationEnabled.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1400C3A38 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     rimProcessPointerDeviceContact @ 0x140184FF0 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMAbIsDeviceArbitrationEnabled(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(W32GetUserSessionState(a1, a2) + 244) != 0;
}
