/*
 * XREFs of KsepDsEventDataIrp @ 0x1405FEC2C
 * Callers:
 *     KseDsCallbackHookIrpDeviceControlFunction @ 0x1405FE4E0 (KseDsCallbackHookIrpDeviceControlFunction.c)
 *     KseDsCallbackHookIrpFunction @ 0x1405FE560 (KseDsCallbackHookIrpFunction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventDataIrp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-1h]
  __int64 v9; // [rsp+60h] [rbp+7h]
  __int64 *v10; // [rsp+68h] [rbp+Fh]
  __int64 v11; // [rsp+70h] [rbp+17h]
  int *v12; // [rsp+78h] [rbp+1Fh]
  __int64 v13; // [rsp+80h] [rbp+27h]
  char *v14; // [rsp+88h] [rbp+2Fh]
  __int64 v15; // [rsp+90h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+5Fh] BYREF
  __int64 v18; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+6Fh] BYREF
  int v20; // [rsp+D0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v20 = a4;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  if ( stru_140E66B30.StackLimit )
  {
    LOBYTE(v5) = EtwEventEnabled((REGHANDLE)stru_140E66B30.StackLimit, &KseDsEventDataIrp);
    if ( (_BYTE)v5 )
    {
      UserData.Ptr = (ULONGLONG)&v17;
      *(_QWORD *)&UserData.Size = 8LL;
      v8 = &v18;
      v9 = 8LL;
      v10 = &v19;
      v11 = 8LL;
      v12 = &v20;
      v14 = &a5;
      v13 = 4LL;
      v15 = 4LL;
      LOBYTE(v5) = EtwWriteEx((REGHANDLE)stru_140E66B30.StackLimit, &KseDsEventDataIrp, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return (char)v5;
}
