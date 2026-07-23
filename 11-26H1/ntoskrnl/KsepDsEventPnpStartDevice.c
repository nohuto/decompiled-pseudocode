/*
 * XREFs of KsepDsEventPnpStartDevice @ 0x1404F6170
 * Callers:
 *     KseDsCompletionHookForStartDevice @ 0x140601220 (KseDsCompletionHookForStartDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventPnpStartDevice(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v7; // [rsp+58h] [rbp+17h]
  __int64 v8; // [rsp+60h] [rbp+1Fh]
  __int64 *v9; // [rsp+68h] [rbp+27h]
  __int64 v10; // [rsp+70h] [rbp+2Fh]
  int *v11; // [rsp+78h] [rbp+37h]
  __int64 v12; // [rsp+80h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  __int64 v14; // [rsp+A8h] [rbp+67h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+B8h] [rbp+77h] BYREF
  int v17; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v17 = a4;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  if ( stru_140E66D40.StackLimit )
  {
    LOBYTE(v4) = EtwEventEnabled((REGHANDLE)stru_140E66D40.StackLimit, &KseDsEventStartDevice);
    if ( (_BYTE)v4 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      v12 = 4LL;
      UserData.Ptr = (ULONGLONG)&v14;
      v8 = 8LL;
      v7 = &v15;
      v10 = 8LL;
      v9 = &v16;
      v11 = &v17;
      LOBYTE(v4) = EtwWriteEx(
                     (REGHANDLE)stru_140E66D40.StackLimit,
                     &KseDsEventStartDevice,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     4u,
                     &UserData);
    }
  }
  return (char)v4;
}
