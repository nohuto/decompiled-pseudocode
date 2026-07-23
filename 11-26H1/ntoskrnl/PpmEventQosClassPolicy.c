/*
 * XREFs of PpmEventQosClassPolicy @ 0x140ACF798
 * Callers:
 *     PpmPerfCalculateQosClassPolicies @ 0x140483470 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventQosClassPolicy(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  unsigned int v5; // ecx
  int v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  _WORD v9[3]; // [rsp+38h] [rbp-31h] BYREF
  int v10; // [rsp+3Eh] [rbp-2Bh]
  char v11; // [rsp+42h] [rbp-27h]
  int v12; // [rsp+43h] [rbp-26h]
  int v13; // [rsp+47h] [rbp-22h]
  char v14; // [rsp+4Bh] [rbp-1Eh]
  char v15; // [rsp+4Ch] [rbp-1Dh]
  int v16; // [rsp+4Dh] [rbp-1Ch]
  char v17; // [rsp+51h] [rbp-18h]
  char v18; // [rsp+52h] [rbp-17h]
  __int16 v19; // [rsp+53h] [rbp-16h]
  __int16 v20; // [rsp+55h] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  int *v22; // [rsp+70h] [rbp+7h]
  __int64 v23; // [rsp+78h] [rbp+Fh]
  __int64 v24; // [rsp+80h] [rbp+17h]
  __int64 v25; // [rsp+88h] [rbp+1Fh]
  int *v26; // [rsp+90h] [rbp+27h]
  __int64 v27; // [rsp+98h] [rbp+2Fh]
  _WORD *v28; // [rsp+A0h] [rbp+37h]
  __int64 v29; // [rsp+A8h] [rbp+3Fh]

  v2 = &PPM_ETW_PERF_QOS_CLASS_POLICY_V2;
  v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_PERF_QOS_CLASS_POLICY_RUNDOWN_V2;
  if ( !a2 )
    v3 = &PPM_ETW_PERF_QOS_CLASS_POLICY_V2;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v2 )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = a1 + 448;
      LODWORD(v2) = 0;
      v5 = 0;
      v7 = 0;
      do
      {
        v23 = 4LL;
        v22 = &v7;
        v25 = 4LL;
        v24 = a1 + 4 * ((unsigned int)v2 + 206LL);
        v8 = *(unsigned __int16 *)(a1 + 2LL * v5 + 852);
        v26 = &v8;
        v27 = 4LL;
        v13 = *(unsigned __int8 *)(a1 + 40LL * v5 + 569);
        v10 = *(_DWORD *)(a1 + 40LL * v5 + 560);
        v11 = *(_BYTE *)(a1 + 40LL * v5 + 564);
        v15 = *(_BYTE *)(a1 + 40LL * v5 + 571);
        v20 = *(_WORD *)(a1 + 40LL * v5 + 572);
        v9[1] = *(_WORD *)(a1 + 40LL * v5 + 548);
        v19 = *(_WORD *)(a1 + 40LL * v5 + 556);
        v9[0] = *(_WORD *)(a1 + 40LL * v5 + 544);
        v9[2] = *(_WORD *)(a1 + 40LL * v5 + 552);
        v14 = *(_BYTE *)(a1 + 40LL * v5 + 570);
        v12 = *(unsigned __int8 *)(a1 + 40LL * v5 + 568);
        v16 = *(unsigned __int8 *)(a1 + 40LL * v5 + 577);
        v17 = *(_BYTE *)(a1 + 40LL * v5 + 576);
        v18 = *(_BYTE *)(a1 + 40LL * v5 + 580);
        v28 = v9;
        v29 = 31LL;
        EtwWrite(PpmEtwHandle, v3, 0LL, 5u, &UserData);
        LODWORD(v2) = v7 + 1;
        v7 = (int)v2;
        v5 = (unsigned int)v2;
      }
      while ( (unsigned int)v2 < 7 );
    }
  }
  return (char)v2;
}
