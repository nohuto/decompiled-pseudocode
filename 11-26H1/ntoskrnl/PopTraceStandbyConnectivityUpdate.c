/*
 * XREFs of PopTraceStandbyConnectivityUpdate @ 0x140B3FBDC
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1404E39E0 (PopNetEvaluationWorkerCallback.c)
 *     PopNetInitialize @ 0x140CDB1D8 (PopNetInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopTraceStandbyConnectivityUpdate(int a1, int a2)
{
  int v2; // [rsp+30h] [rbp-39h] BYREF
  int v3; // [rsp+34h] [rbp-35h] BYREF
  __int64 v4; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  int *v6; // [rsp+50h] [rbp-19h]
  __int64 v7; // [rsp+58h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+60h] [rbp-9h] BYREF
  int *v9; // [rsp+80h] [rbp+17h]
  __int64 v10; // [rsp+88h] [rbp+1Fh]
  int *v11; // [rsp+90h] [rbp+27h]
  __int64 v12; // [rsp+98h] [rbp+2Fh]
  __int64 *v13; // [rsp+A0h] [rbp+37h]
  __int64 v14; // [rsp+A8h] [rbp+3Fh]
  int v15; // [rsp+D0h] [rbp+67h] BYREF
  int v16; // [rsp+D8h] [rbp+6Fh] BYREF

  v16 = a2;
  v15 = a1;
  if ( (unsigned int)dword_140E07560 > 5
    && (qword_140E07570 & 0x400000000000LL) != 0
    && (qword_140E07578 & 0x400000000000LL) == qword_140E07578 )
  {
    v2 = a1;
    v9 = &v2;
    v3 = a2;
    v11 = &v3;
    v10 = 4LL;
    v13 = &v4;
    v12 = 4LL;
    v4 = 0x1000000LL;
    v14 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004B793, 0LL, 0LL, 5u, &v8);
  }
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_UPDATE) )
    {
      UserData.Ptr = (ULONGLONG)&v15;
      *(_QWORD *)&UserData.Size = 4LL;
      v6 = &v16;
      v7 = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_UPDATE, 0LL, 2u, &UserData);
    }
  }
}
