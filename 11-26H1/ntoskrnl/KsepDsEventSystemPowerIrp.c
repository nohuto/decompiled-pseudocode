/*
 * XREFs of KsepDsEventSystemPowerIrp @ 0x1406020D4
 * Callers:
 *     KseDsCallbackHookIrpPowerFunction @ 0x1406010F0 (KseDsCallbackHookIrpPowerFunction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventSystemPowerIrp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7)
{
  _UNKNOWN **v7; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-41h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-31h]
  __int64 v11; // [rsp+60h] [rbp-29h]
  __int64 *v12; // [rsp+68h] [rbp-21h]
  __int64 v13; // [rsp+70h] [rbp-19h]
  int *v14; // [rsp+78h] [rbp-11h]
  __int64 v15; // [rsp+80h] [rbp-9h]
  char *v16; // [rsp+88h] [rbp-1h]
  __int64 v17; // [rsp+90h] [rbp+7h]
  char *v18; // [rsp+98h] [rbp+Fh]
  __int64 v19; // [rsp+A0h] [rbp+17h]
  char *v20; // [rsp+A8h] [rbp+1Fh]
  __int64 v21; // [rsp+B0h] [rbp+27h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+4Fh] BYREF
  __int64 v24; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+5Fh] BYREF
  int v26; // [rsp+F0h] [rbp+67h] BYREF

  v7 = &retaddr;
  v26 = a4;
  v25 = a3;
  v24 = a2;
  v23 = a1;
  if ( stru_140E66D40.StackLimit )
  {
    LOBYTE(v7) = EtwEventEnabled((REGHANDLE)stru_140E66D40.StackLimit, &KseDsEventSystemPowerIrp);
    if ( (_BYTE)v7 )
    {
      UserData.Ptr = (ULONGLONG)&v23;
      *(_QWORD *)&UserData.Size = 8LL;
      v10 = &v24;
      v11 = 8LL;
      v12 = &v25;
      v13 = 8LL;
      v14 = &v26;
      v16 = &a5;
      v18 = &a6;
      v20 = &a7;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      LOBYTE(v7) = EtwWriteEx(
                     (REGHANDLE)stru_140E66D40.StackLimit,
                     &KseDsEventSystemPowerIrp,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     7u,
                     &UserData);
    }
  }
  return (char)v7;
}
