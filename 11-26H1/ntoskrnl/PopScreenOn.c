/*
 * XREFs of PopScreenOn @ 0x1407DFB4C
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x1409F4430 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x1409F5820 (PopControlMonitor.c)
 */

__int64 __fastcall PopScreenOn(__int64 a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+3Ch] [rbp+14h]

  v2 = -1;
  LOBYTE(a1) = 1;
  PopBlockSessionSwitch(a1, &v2);
  v3 = 2;
  v4 = 30;
  PopControlMonitor(&v3, v2);
  return PopBlockSessionSwitch(0LL, &v2);
}
