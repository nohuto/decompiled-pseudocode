/*
 * XREFs of PopDiagTraceUsermodeThermalEvent @ 0x140B46DCC
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140B46A5C (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceUsermodeThermalEvent(__int64 a1)
{
  int v2; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-9h] BYREF
  __int64 v4; // [rsp+40h] [rbp+7h]
  int v5; // [rsp+48h] [rbp+Fh]
  int v6; // [rsp+4Ch] [rbp+13h]
  __int64 v7; // [rsp+50h] [rbp+17h]
  __int64 v8; // [rsp+58h] [rbp+1Fh]
  __int64 v9; // [rsp+60h] [rbp+27h]
  __int64 v10; // [rsp+68h] [rbp+2Fh]
  __int64 v11; // [rsp+70h] [rbp+37h]
  __int64 v12; // [rsp+78h] [rbp+3Fh]

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_EVENT) )
    {
      *(_QWORD *)&UserData.Size = 2LL;
      v4 = a1 + 14;
      v2 = 2 * *(unsigned __int16 *)(a1 + 12);
      UserData.Ptr = a1 + 12;
      v5 = v2;
      v6 = 0;
      v9 = a1 + 4;
      v11 = a1 + 8;
      v7 = a1;
      v8 = 4LL;
      v10 = 4LL;
      v12 = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_THERMAL_EVENT, 0LL, 5u, &UserData);
    }
  }
}
