/*
 * XREFs of HUBDSM_NotifyingDeviceResetToUCXAfterReset2 @ 0x140023430
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1400286F4 (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_NotifyingDeviceResetToUCXAfterReset2(__int64 a1)
{
  HUBUCX_NotifyDeviceResetUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
