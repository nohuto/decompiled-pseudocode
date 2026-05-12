/*
 * XREFs of RaidAdapterSystemPowerHintsEnabled @ 0x140010DD8
 * Callers:
 *     RaidCoalescingCallback @ 0x140010AB0 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x14006D720 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterSystemPowerHintsEnabled(_QWORD *a1)
{
  char result; // al

  result = 0;
  if ( a1[629] && a1[631] || a1[763] )
    return 1;
  return result;
}
