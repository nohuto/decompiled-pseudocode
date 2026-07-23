/*
 * XREFs of PopDiagTraceMonitorOnWithLidClosed @ 0x140ADB2B8
 * Callers:
 *     PopPowerAggregatorHandleActiveIntent @ 0x140ADB1A0 (PopPowerAggregatorHandleActiveIntent.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceMonitorOnWithLidClosed(int a1, char a2)
{
  _UNKNOWN **v2; // rax
  char v3; // di
  char v5; // bl
  bool v7; // r15
  char v9; // [rsp+38h] [rbp-79h] BYREF
  bool v10; // [rsp+39h] [rbp-78h] BYREF
  char v11; // [rsp+3Ah] [rbp-77h] BYREF
  char v12; // [rsp+3Bh] [rbp-76h] BYREF
  int v13; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v14; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16[2]; // [rsp+58h] [rbp-59h] BYREF
  char *v17; // [rsp+78h] [rbp-39h]
  __int64 v18; // [rsp+80h] [rbp-31h]
  bool *v19; // [rsp+88h] [rbp-29h]
  __int64 v20; // [rsp+90h] [rbp-21h]
  int *v21; // [rsp+98h] [rbp-19h]
  __int64 v22; // [rsp+A0h] [rbp-11h]
  bool *v23; // [rsp+A8h] [rbp-9h]
  __int64 v24; // [rsp+B0h] [rbp-1h]
  __int64 *v25; // [rsp+B8h] [rbp+7h]
  __int64 v26; // [rsp+C0h] [rbp+Fh]
  char *v27; // [rsp+C8h] [rbp+17h]
  __int64 v28; // [rsp+D0h] [rbp+1Fh]
  __int64 *v29; // [rsp+D8h] [rbp+27h]
  __int64 v30; // [rsp+E0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  v3 = PopLidOpened;
  v5 = PopConsoleExternalDisplayConnected;
  v7 = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) == 0;
  if ( !PopLidOpened && !PopConsoleExternalDisplayConnected )
  {
    if ( (unsigned int)dword_140E07560 <= 5 )
      return (char)v2;
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v9 = 0;
      v17 = &v9;
      v18 = 1LL;
      v19 = &v10;
      v10 = 0;
      v21 = &v13;
      v20 = 1LL;
      v23 = (bool *)&v11;
      v14 = PopWnfCsEnterScenarioId;
      v25 = &v14;
      v27 = &v12;
      v29 = v15;
      v13 = a1;
      v22 = 4LL;
      v11 = v7;
      v24 = 1LL;
      v26 = 8LL;
      v12 = a2;
      v28 = 1LL;
      v15[0] = 0x1000000LL;
      v30 = 8LL;
      LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140E07560,
                     (unsigned __int8 *)byte_14004A7B9,
                     0LL,
                     0LL,
                     9u,
                     v16);
    }
  }
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v12 = v3;
      v17 = &v12;
      v18 = 1LL;
      v19 = (bool *)&v11;
      v11 = v5;
      v21 = &v13;
      v20 = 1LL;
      v23 = &v10;
      v13 = a1;
      v25 = (__int64 *)&v9;
      v15[0] = PopWnfCsEnterScenarioId;
      v27 = (char *)v15;
      v29 = &v14;
      v22 = 4LL;
      v10 = v7;
      v24 = 1LL;
      v9 = a2;
      v26 = 1LL;
      v28 = 8LL;
      v14 = 0x1000000LL;
      v30 = 8LL;
      LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140E07560,
                     (unsigned __int8 *)&byte_14004A86F,
                     0LL,
                     0LL,
                     9u,
                     v16);
    }
  }
  return (char)v2;
}
