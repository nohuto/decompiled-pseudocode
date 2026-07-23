/*
 * XREFs of PopErratumUpdateCallback @ 0x140609950
 * Callers:
 *     <none>
 * Callees:
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PopErratumUpdateCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+24h] [rbp-14h] BYREF
  _BYTE v9[16]; // [rsp+28h] [rbp-10h] BYREF

  v8 = 0;
  v7 = 4;
  if ( (int)ExQueryWnfStateData(a1, &v8, v9, &v7) >= 0 )
    PopSetPowerSettingValueAcDc(a6 + 16, v7, v9);
  return 0LL;
}
