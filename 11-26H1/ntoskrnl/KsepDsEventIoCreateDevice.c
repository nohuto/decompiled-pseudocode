/*
 * XREFs of KsepDsEventIoCreateDevice @ 0x140601C0C
 * Callers:
 *     KseDsHookIoCreateDevice @ 0x140601410 (KseDsHookIoCreateDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall KsepDsEventIoCreateDevice(__int64 a1, __int64 a2, int a3, int a4, unsigned __int8 a5, char a6)
{
  BOOLEAN result; // al
  int v7; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v9; // [rsp+68h] [rbp-19h]
  __int64 v10; // [rsp+70h] [rbp-11h]
  int *v11; // [rsp+78h] [rbp-9h]
  __int64 v12; // [rsp+80h] [rbp-1h]
  int *v13; // [rsp+88h] [rbp+7h]
  __int64 v14; // [rsp+90h] [rbp+Fh]
  int *v15; // [rsp+98h] [rbp+17h]
  __int64 v16; // [rsp+A0h] [rbp+1Fh]
  char *v17; // [rsp+A8h] [rbp+27h]
  __int64 v18; // [rsp+B0h] [rbp+2Fh]
  __int64 v19; // [rsp+D8h] [rbp+57h] BYREF
  __int64 v20; // [rsp+E0h] [rbp+5Fh] BYREF
  int v21; // [rsp+E8h] [rbp+67h] BYREF
  int v22; // [rsp+F0h] [rbp+6Fh] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  result = a5;
  v7 = a5;
  if ( stru_140E66D40.StackLimit )
  {
    result = EtwEventEnabled((REGHANDLE)stru_140E66D40.StackLimit, &KseDsEventCreateDevice);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v19;
      *(_QWORD *)&UserData.Size = 8LL;
      v9 = &v20;
      v10 = 8LL;
      v11 = &v21;
      v12 = 4LL;
      v13 = &v22;
      v15 = &v7;
      v17 = &a6;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      return EtwWriteEx((REGHANDLE)stru_140E66D40.StackLimit, &KseDsEventCreateDevice, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return result;
}
