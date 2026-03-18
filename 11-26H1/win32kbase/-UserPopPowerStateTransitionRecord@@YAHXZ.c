/*
 * XREFs of ?UserPopPowerStateTransitionRecord@@YAHXZ @ 0x140113240
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1401120B0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserPopPowerStateTransitionRecord(void)
{
  _OWORD InputBuffer[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+60h] [rbp-18h]

  v2 = 0LL;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  DWORD2(InputBuffer[0]) = 1;
  LODWORD(InputBuffer[0]) = 88;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x38u, 0LL, 0) >= 0;
}
