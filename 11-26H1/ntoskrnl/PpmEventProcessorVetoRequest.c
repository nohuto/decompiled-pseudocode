/*
 * XREFs of PpmEventProcessorVetoRequest @ 0x140611CF0
 * Callers:
 *     PpmUpdateProcessorIdleVeto @ 0x140606310 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventProcessorVetoRequest(__int64 a1, int a2, int a3, char a4)
{
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // rbx
  __int16 v8; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 v10; // [rsp+68h] [rbp+17h]
  __int64 v11; // [rsp+70h] [rbp+1Fh]
  int *v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+2Fh]
  int *v14; // [rsp+88h] [rbp+37h]
  __int64 v15; // [rsp+90h] [rbp+3Fh]
  int v16; // [rsp+C0h] [rbp+6Fh] BYREF
  int v17; // [rsp+C8h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  v4 = &PPM_ETW_PROCESSOR_IDLE_VETO_INCREMENT;
  v5 = (const EVENT_DESCRIPTOR *)PPM_ETW_PROCESSOR_IDLE_VETO_DECREMENT;
  if ( a4 )
    v5 = &PPM_ETW_PROCESSOR_IDLE_VETO_INCREMENT;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, v5);
    if ( (_BYTE)v4 )
    {
      v8 = *(unsigned __int8 *)(a1 + 208);
      v13 = 4LL;
      UserData.Ptr = (ULONGLONG)&v8;
      v15 = 4LL;
      v10 = a1 + 209;
      *(_QWORD *)&UserData.Size = 2LL;
      v12 = &v16;
      v14 = &v17;
      v11 = 1LL;
      LOBYTE(v4) = EtwWriteEx(PpmEtwHandle, v5, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
