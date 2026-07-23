/*
 * XREFs of PpmEventTraceDripsAccountingSnapshot @ 0x140B40B28
 * Callers:
 *     PpmSnapDripsAccountingSnapshot @ 0x14042391C (PpmSnapDripsAccountingSnapshot.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceDripsAccountingSnapshot(__int64 a1, __int64 a2)
{
  char v3; // [rsp+30h] [rbp-9h] BYREF
  int v4; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  int *v6; // [rsp+50h] [rbp+17h]
  __int64 v7; // [rsp+58h] [rbp+1Fh]
  __int64 v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  __int64 *v11; // [rsp+70h] [rbp+37h]
  __int64 v12; // [rsp+78h] [rbp+3Fh]

  v4 = 26;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DRIPS_ACCOUNTING_SNAPSHOT) )
    {
      v3 = PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v3;
      v6 = &v4;
      v9 = 8 * v4;
      v11 = &PopWnfCsEnterScenarioId;
      v7 = 4LL;
      v8 = a2;
      v10 = 0;
      v12 = 8LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_DRIPS_ACCOUNTING_SNAPSHOT, 0LL, 4u, &UserData);
    }
  }
}
