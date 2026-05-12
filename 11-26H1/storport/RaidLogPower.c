/*
 * XREFs of RaidLogPower @ 0x14006CF04
 * Callers:
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x140053B4C (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidPowerSettingCallback @ 0x14006D720 (RaidPowerSettingCallback.c)
 * Callees:
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 */

void __fastcall RaidLogPower(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  DbgLogRequest(a1, a2, a3, a4, a5, a6, 0LL);
}
