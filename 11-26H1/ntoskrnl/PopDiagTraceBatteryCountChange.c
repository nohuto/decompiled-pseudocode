/*
 * XREFs of PopDiagTraceBatteryCountChange @ 0x1407D5EF0
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SshSessionManagerTraceBatteryCountChange @ 0x1407E908C (SshSessionManagerTraceBatteryCountChange.c)
 */

__int64 __fastcall PopDiagTraceBatteryCountChange(int a1, int a2, int a3)
{
  char v3; // bl
  bool v4; // si
  char v5; // di
  int v6; // r9d
  int v8; // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+38h] [rbp-48h] BYREF
  int v10; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  int *v14; // [rsp+68h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp-10h]

  v3 = 0;
  v10 = a1;
  v9 = a2;
  v8 = a3;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_BATTERY_COUNT_CHANGE) )
  {
    UserData.Ptr = (ULONGLONG)&v10;
    *(_QWORD *)&UserData.Size = 4LL;
    v12 = &v9;
    v13 = 4LL;
    v14 = &v8;
    v15 = 4LL;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_BATTERY_COUNT_CHANGE, 0LL, 3u, &UserData);
  }
  v4 = PopLidOpened != 0;
  v5 = PopConsoleExternalDisplayConnected != 0;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 )
    {
      v3 = PopUsb4DisplayPresent != 0 ? 3 : 1;
    }
    else if ( PopUsb4DisplayPresent )
    {
      v5 = 1;
      v3 = 2;
    }
  }
  LOBYTE(v6) = v4;
  return SshSessionManagerTraceBatteryCountChange(v10, v9, v8, v6, v5, v3);
}
