/*
 * XREFs of RaidAdapterGetSystemPowerResumeLatency @ 0x140010C1C
 * Callers:
 *     RaidCoalescingCallback @ 0x140010AB0 (RaidCoalescingCallback.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     RaidPowerSettingCallback @ 0x14006D720 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerResumeLatency(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 500LL;
  if ( v1 == 1 )
    return 100LL;
  return 50LL;
}
