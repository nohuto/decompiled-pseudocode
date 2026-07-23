/*
 * XREFs of PopDiagTraceDeviceComplianceUpdate @ 0x14060B41C
 * Callers:
 *     PopPdcUpdateDeviceCompliance @ 0x140B32564 (PopPdcUpdateDeviceCompliance.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDeviceComplianceUpdate(int a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v3; // [rsp+50h] [rbp-28h]
  __int64 v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+80h] [rbp+8h] BYREF
  int v6; // [rsp+88h] [rbp+10h] BYREF

  v6 = a2;
  v5 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_UPDATE) )
    {
      UserData.Ptr = (ULONGLONG)&v5;
      *(_QWORD *)&UserData.Size = 4LL;
      v3 = &v6;
      v4 = 4LL;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_UPDATE, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
