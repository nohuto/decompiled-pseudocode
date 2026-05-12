/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x140010BF8
 * Callers:
 *     RaidCoalescingCallback @ 0x140010AB0 (RaidCoalescingCallback.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     RaidPowerSettingCallback @ 0x14006D720 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerHint(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 111) & 8) != 0 )
    return 1LL;
  else
    return ((*(_BYTE *)(a1 + 108) & 1) == 0) | 2u;
}
