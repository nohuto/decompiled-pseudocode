/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x140A3E9D0
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x140438218 (PopInitilizeAcDcSettings.c)
 *     PopScanIdleList @ 0x1404C65A0 (PopScanIdleList.c)
 *     PopGetPowerSettingValue @ 0x1404CF78C (PopGetPowerSettingValue.c)
 *     PopDeferDoze @ 0x1407718E0 (PopDeferDoze.c)
 *     PopGetSettingNotificationName @ 0x140A3B2C4 (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x140A3D02C (PopGetSettingValue.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 *     PopQueryPowerSettingUlong @ 0x140B41710 (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x140A3E4C8 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x140A3E980 (PopStateIsSessionSpecific.c)
 */

volatile unsigned int *__fastcall PopFindPowerSettingConfiguration(_QWORD *a1, int a2)
{
  volatile unsigned int *ListHead; // rdi
  volatile unsigned int *v5; // r11
  __int64 v6; // rax

  ListHead = PopGetListHead(a1);
  if ( PopStateIsSessionSpecific(a1) )
  {
    while ( v5 != ListHead )
    {
      if ( *((_DWORD *)v5 + 12) == a2 && (v5[13] & 4) == 0 )
        return v5;
      v5 = *(volatile unsigned int **)v5;
    }
  }
  else
  {
    while ( v5 != ListHead )
    {
      v6 = *((_QWORD *)v5 + 4) - *a1;
      if ( !v6 )
        v6 = *((_QWORD *)v5 + 5) - a1[1];
      if ( !v6 )
        return v5;
      v5 = *(volatile unsigned int **)v5;
    }
  }
  return 0LL;
}
