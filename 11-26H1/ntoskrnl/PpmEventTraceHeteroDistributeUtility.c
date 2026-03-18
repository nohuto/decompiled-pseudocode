/*
 * XREFs of PpmEventTraceHeteroDistributeUtility @ 0x14060ECFC
 * Callers:
 *     PpmHeteroDistributeUtility @ 0x140259CF0 (PpmHeteroDistributeUtility.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x140420DB0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceHeteroDistributeUtility(__int64 a1, char a2, char a3)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v9[4]; // [rsp+44h] [rbp-15h] BYREF
  int v10; // [rsp+48h] [rbp-11h] BYREF
  int v11; // [rsp+4Ch] [rbp-Dh] BYREF
  _BYTE v12[64]; // [rsp+50h] [rbp-9h] BYREF
  char v13; // [rsp+C8h] [rbp+6Fh] BYREF
  char v14; // [rsp+D0h] [rbp+77h] BYREF

  v14 = a3;
  v13 = a2;
  UserData = PpmEventPerfCheckData;
  v11 = 0;
  v10 = 0;
  v8 = 0;
  if ( PpmEventPerfCheckData && PpmEtwRegistered )
  {
    if ( EtwEventEnabled(
           (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
           &PPM_ETW_HETERO_DISTRIBUTE_UTILITY) )
    {
      PpmEventAddAffinityMaskAsSubset(
        0LL,
        (_WORD *)(a1 + 16),
        (__int64)v9,
        (__int64)v12,
        (__int64)UserData,
        &v11,
        &v10,
        &v8);
      v5 = v8;
      v6 = v8;
      UserData[v6].Ptr = (ULONGLONG)&v13;
      *(_QWORD *)&UserData[v6].Size = 1LL;
      v7 = v5 + 1;
      UserData[v7].Ptr = (ULONGLONG)&v14;
      *(_QWORD *)&UserData[v7].Size = 1LL;
      EtwWriteEx(
        (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
        &PPM_ETW_HETERO_DISTRIBUTE_UTILITY,
        0LL,
        0,
        0LL,
        0LL,
        v5 + 2,
        UserData);
    }
  }
}
