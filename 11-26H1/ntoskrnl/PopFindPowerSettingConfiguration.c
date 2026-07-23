/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x1409FA3F0
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x140427138 (PopInitilizeAcDcSettings.c)
 *     PopScanIdleList @ 0x1404BFF50 (PopScanIdleList.c)
 *     PopGetPowerSettingValue @ 0x1404C91BC (PopGetPowerSettingValue.c)
 *     PopDeferDoze @ 0x1407748E0 (PopDeferDoze.c)
 *     PopGetSettingNotificationName @ 0x1409F6CE4 (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x1409F8A4C (PopGetSettingValue.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 *     PopQueryPowerSettingUlong @ 0x140B43720 (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x1409F9EE8 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1409FA3A0 (PopStateIsSessionSpecific.c)
 */

PVOID *__fastcall PopFindPowerSettingConfiguration(_QWORD *a1, int a2)
{
  PVOID *ListHead; // rdi
  PVOID *v5; // r11
  __int64 v6; // rax

  ListHead = PopGetListHead(a1);
  if ( PopStateIsSessionSpecific(a1) )
  {
    while ( v5 != ListHead )
    {
      if ( *((_DWORD *)v5 + 12) == a2 && (*((_DWORD *)v5 + 13) & 4) == 0 )
        return v5;
      v5 = (PVOID *)*v5;
    }
  }
  else
  {
    while ( v5 != ListHead )
    {
      v6 = (__int64)v5[4] - *a1;
      if ( !v6 )
        v6 = (__int64)v5[5] - a1[1];
      if ( !v6 )
        return v5;
      v5 = (PVOID *)*v5;
    }
  }
  return 0LL;
}
