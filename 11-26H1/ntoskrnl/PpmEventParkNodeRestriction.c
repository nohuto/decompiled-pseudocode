/*
 * XREFs of PpmEventParkNodeRestriction @ 0x140419160
 * Callers:
 *     PpmParkEvaluateRestriction @ 0x14025CAB4 (PpmParkEvaluateRestriction.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeRestriction(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rdi
  const EVENT_DESCRIPTOR *v5; // rbx
  unsigned int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // r8d
  char v13; // [rsp+48h] [rbp-19h] BYREF
  bool v14; // [rsp+49h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+4Ch] [rbp-15h] BYREF
  _BYTE v16[4]; // [rsp+50h] [rbp-11h] BYREF
  int v17; // [rsp+54h] [rbp-Dh] BYREF
  _DWORD v18[4]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v19[64]; // [rsp+68h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  v2 = (const EVENT_DESCRIPTOR *)&retaddr;
  UserData = PpmEventPerfCheckData;
  v18[0] = 0;
  v17 = 0;
  v15 = 0;
  if ( PpmEventPerfCheckData )
  {
    v2 = &PPM_ETW_RESTRICTION_UPDATE;
    v5 = (const EVENT_DESCRIPTOR *)PPM_ETW_RESTRICTION_RUNDOWN;
    if ( !a1 )
      v5 = &PPM_ETW_RESTRICTION_UPDATE;
    if ( PpmEtwRegistered )
    {
      LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v5);
      if ( (_BYTE)v2 )
      {
        PpmEventAddAffinityMaskAsSubset(
          0LL,
          (_WORD *)(a2 + 16),
          (__int64)v16,
          (__int64)v19,
          (__int64)UserData,
          v18,
          &v17,
          &v15);
        v6 = v15;
        v13 = *(_BYTE *)(a2 + 1192);
        v7 = v15;
        UserData[v7].Ptr = (ULONGLONG)&v13;
        *(_QWORD *)&UserData[v7].Size = 1LL;
        v14 = *(_BYTE *)(a2 + 1196) != 0;
        v8 = v6 + 1;
        UserData[v8].Ptr = (ULONGLONG)&v14;
        *(_QWORD *)&UserData[v8].Size = 1LL;
        v9 = v6 + 2;
        UserData[v9].Ptr = a2 + 1212;
        *(_QWORD *)&UserData[v9].Size = 2LL;
        v10 = v6 + 3;
        v11 = 4 * *(unsigned __int16 *)(a2 + 1212);
        UserData[v10].Ptr = *(_QWORD *)(a2 + 1216);
        UserData[v10].Size = v11;
        UserData[v10].Reserved = 0;
        LOBYTE(v2) = EtwWriteEx(PpmEtwHandle, v5, 0LL, 0, 0LL, 0LL, v6 + 4, UserData);
      }
    }
  }
  return (char)v2;
}
