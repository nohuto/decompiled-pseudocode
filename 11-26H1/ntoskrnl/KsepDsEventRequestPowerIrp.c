/*
 * XREFs of KsepDsEventRequestPowerIrp @ 0x140601FC8
 * Callers:
 *     KseDsHookPoRequestPowerIrp @ 0x1406014B0 (KseDsHookPoRequestPowerIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventRequestPowerIrp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  _UNKNOWN **v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v9; // [rsp+58h] [rbp-19h]
  __int64 v10; // [rsp+60h] [rbp-11h]
  __int64 *v11; // [rsp+68h] [rbp-9h]
  __int64 v12; // [rsp+70h] [rbp-1h]
  int *v13; // [rsp+78h] [rbp+7h]
  __int64 v14; // [rsp+80h] [rbp+Fh]
  char *v15; // [rsp+88h] [rbp+17h]
  __int64 v16; // [rsp+90h] [rbp+1Fh]
  char *v17; // [rsp+98h] [rbp+27h]
  __int64 v18; // [rsp+A0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+4Fh] BYREF
  __int64 v20; // [rsp+C8h] [rbp+57h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v22; // [rsp+D8h] [rbp+67h] BYREF
  int v23; // [rsp+E0h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v23 = a4;
  v22 = a3;
  v21 = a2;
  v20 = a1;
  if ( stru_140E66D40.StackLimit )
  {
    LOBYTE(v6) = EtwEventEnabled((REGHANDLE)stru_140E66D40.StackLimit, &KseDsEventRequestPowerIrp);
    if ( (_BYTE)v6 )
    {
      UserData.Ptr = (ULONGLONG)&v20;
      *(_QWORD *)&UserData.Size = 8LL;
      v9 = &v21;
      v10 = 8LL;
      v11 = &v22;
      v12 = 8LL;
      v13 = &v23;
      v15 = &a5;
      v17 = &a6;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      LOBYTE(v6) = EtwWriteEx(
                     (REGHANDLE)stru_140E66D40.StackLimit,
                     &KseDsEventRequestPowerIrp,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     6u,
                     &UserData);
    }
  }
  return (char)v6;
}
