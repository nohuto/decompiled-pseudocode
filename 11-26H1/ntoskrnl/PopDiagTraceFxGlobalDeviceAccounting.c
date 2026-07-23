/*
 * XREFs of PopDiagTraceFxGlobalDeviceAccounting @ 0x1404E46EC
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x1404227BC (PopFxStopDeviceAccounting.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTraceFxGlobalDeviceAccounting(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v5; // [rsp+30h] [rbp-59h] BYREF
  __int64 v6; // [rsp+38h] [rbp-51h] BYREF
  __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v10; // [rsp+70h] [rbp-19h]
  __int64 v11; // [rsp+78h] [rbp-11h]
  __int64 *v12; // [rsp+80h] [rbp-9h]
  __int64 v13; // [rsp+88h] [rbp-1h]
  __int64 v14; // [rsp+90h] [rbp+7h]
  __int64 v15; // [rsp+98h] [rbp+Fh]
  __int64 v16; // [rsp+A0h] [rbp+17h]
  __int64 v17; // [rsp+A8h] [rbp+1Fh]
  __int64 *v18; // [rsp+B0h] [rbp+27h]
  __int64 v19; // [rsp+B8h] [rbp+2Fh]
  __int64 *v20; // [rsp+C0h] [rbp+37h]
  __int64 v21; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_140E075D0 > 5
    && !PopDiagFxAccountingTelemetryDisabled
    && (qword_140E075E0 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_140E075E8 & 0x400000000000LL) == qword_140E075E8 )
    {
      v5 = PopWnfCsEnterScenarioId;
      v10 = &v5;
      v12 = &v6;
      v18 = &v7;
      v20 = &v8;
      v11 = 8LL;
      v13 = 8LL;
      v14 = a3;
      v16 = a4;
      v7 = a2;
      v19 = 8LL;
      v21 = 8LL;
      v6 = a1;
      v15 = 40LL;
      v17 = 40LL;
      v8 = 0x1000000LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E075D0,
               (unsigned __int8 *)&byte_14004C6FF,
               0LL,
               0LL,
               8u,
               &v9);
    }
  }
  return result;
}
