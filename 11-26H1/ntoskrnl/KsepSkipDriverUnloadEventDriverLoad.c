/*
 * XREFs of KsepSkipDriverUnloadEventDriverLoad @ 0x14060236C
 * Callers:
 *     KseSkipDriverUnloadHookDriverTargeted @ 0x140602330 (KseSkipDriverUnloadHookDriverTargeted.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall KsepSkipDriverUnloadEventDriverLoad(unsigned __int16 *a1, __int64 a2, int a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  int v7; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-1h]
  __int64 v11; // [rsp+60h] [rbp+7h]
  int *v12; // [rsp+68h] [rbp+Fh]
  __int64 v13; // [rsp+70h] [rbp+17h]
  int *v14; // [rsp+78h] [rbp+1Fh]
  __int64 v15; // [rsp+80h] [rbp+27h]
  char *v16; // [rsp+88h] [rbp+2Fh]
  __int64 v17; // [rsp+90h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+67h] BYREF
  int v20; // [rsp+C8h] [rbp+6Fh] BYREF
  int v21; // [rsp+D0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v21 = a4;
  v20 = a3;
  v19 = a2;
  if ( stru_140E66D40.StackLimit )
  {
    LOBYTE(v5) = EtwEventEnabled((REGHANDLE)stru_140E66D40.StackLimit, &KseSkipDriverUnloadEventDriverLoad);
    if ( (_BYTE)v5 )
    {
      UserData.Ptr = *((_QWORD *)a1 + 1);
      v7 = *a1;
      UserData.Reserved = 0;
      UserData.Size = v7 + 2;
      v10 = &v19;
      v12 = &v20;
      v14 = &v21;
      v16 = &a5;
      v11 = 8LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      LOBYTE(v5) = EtwWriteEx(
                     (REGHANDLE)stru_140E66D40.StackLimit,
                     &KseSkipDriverUnloadEventDriverLoad,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     5u,
                     &UserData);
    }
  }
  return (char)v5;
}
