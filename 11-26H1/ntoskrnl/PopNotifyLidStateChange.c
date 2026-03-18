/*
 * XREFs of PopNotifyLidStateChange @ 0x140B51558
 * Callers:
 *     PdcPoReportLidState @ 0x140B51530 (PdcPoReportLidState.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x1404C9760 (SSHSupportIsPlatformAoAc.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x1407D69C0 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopNotifyLidStateChange(char a1)
{
  int v1; // ebx
  bool v3; // zf
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( PopErrataReportingIncorrectLidState || PopLidOpened == a1 )
  {
LABEL_6:
    v3 = a1 == 0;
    goto LABEL_7;
  }
  PopLidOpened = a1;
  v3 = a1 == 0;
  if ( !a1 )
  {
    if ( SSHSupportIsPlatformAoAc() )
      PopPowerAggregatorForceSessionSwitch(4u, v4, v5, v6);
    goto LABEL_6;
  }
LABEL_7:
  LOBYTE(v1) = !v3;
  v8 = v1;
  PopSetPowerSettingValue(&GUID_LIDSWITCH_STATE_CHANGE, 0xFFFFFFFF, 0, 4u, &v8);
  return PopSetPowerSettingValue(&GUID_LIDSWITCH_STATE_CHANGE, 0xFFFFFFFF, 1, 4u, &v8);
}
