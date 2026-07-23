/*
 * XREFs of PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404F8FBC
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x14041574C (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x14060F474 (PpmHeteroComputeMultiClassUnparkCount.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceMultiClassHeteroResponseUpdate(char a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v7; // [rsp+58h] [rbp+7h]
  __int64 v8; // [rsp+60h] [rbp+Fh]
  __int64 v9; // [rsp+68h] [rbp+17h]
  __int64 v10; // [rsp+70h] [rbp+1Fh]
  __int64 v11; // [rsp+78h] [rbp+27h]
  __int64 v12; // [rsp+80h] [rbp+2Fh]
  __int64 *v13; // [rsp+88h] [rbp+37h]
  __int64 v14; // [rsp+90h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  char v16; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v17; // [rsp+C8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v17 = a3;
  v16 = a1;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE_UPDATE);
    if ( (_BYTE)v3 )
    {
      UserData.Ptr = (ULONGLONG)&v16;
      *(_QWORD *)&UserData.Size = 1LL;
      v9 = a2 + 6;
      v7 = a2;
      v11 = a2 + 16;
      v8 = 2LL;
      v13 = &v17;
      v10 = 2LL;
      v12 = 8LL;
      v14 = 8LL;
      LOBYTE(v3) = EtwWriteEx(
                     PpmEtwHandle,
                     &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE_UPDATE,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     5u,
                     &UserData);
    }
  }
  return (char)v3;
}
