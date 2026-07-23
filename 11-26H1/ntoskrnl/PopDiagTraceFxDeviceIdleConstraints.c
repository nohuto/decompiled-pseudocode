/*
 * XREFs of PopDiagTraceFxDeviceIdleConstraints @ 0x14060B6B4
 * Callers:
 *     PopPluginRequestDeviceIdleConstraints @ 0x1404DB680 (PopPluginRequestDeviceIdleConstraints.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceIdleConstraints(__int64 a1, __int64 a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v5; // [rsp+50h] [rbp-30h]
  __int64 v6; // [rsp+58h] [rbp-28h]
  __int64 v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+68h] [rbp-18h]
  int v9; // [rsp+6Ch] [rbp-14h]
  __int64 v10; // [rsp+90h] [rbp+10h] BYREF
  int v11; // [rsp+A0h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CONSTRAINTS) )
    {
      UserData.Ptr = (ULONGLONG)&v10;
      *(_QWORD *)&UserData.Size = 8LL;
      v5 = &v11;
      v8 = 4 * v11;
      v6 = 4LL;
      v7 = a2;
      v9 = 0;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CONSTRAINTS, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
