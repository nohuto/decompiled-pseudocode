/*
 * XREFs of KsepDsEventAddDevice @ 0x14060154C
 * Callers:
 *     KseDsCallbackHookAddDevice @ 0x140600D90 (KseDsCallbackHookAddDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char KsepDsEventAddDevice(__int64 a1, int a2, ...)
{
  _UNKNOWN **v2; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-41h] BYREF
  int *v5; // [rsp+58h] [rbp-31h]
  __int64 v6; // [rsp+60h] [rbp-29h]
  va_list v7; // [rsp+68h] [rbp-21h]
  __int64 v8; // [rsp+70h] [rbp-19h]
  va_list v9; // [rsp+78h] [rbp-11h]
  __int64 v10; // [rsp+80h] [rbp-9h]
  va_list v11; // [rsp+88h] [rbp-1h]
  __int64 v12; // [rsp+90h] [rbp+7h]
  __int64 v13; // [rsp+98h] [rbp+Fh]
  int v14; // [rsp+A0h] [rbp+17h]
  int v15; // [rsp+A4h] [rbp+1Bh]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  int v17; // [rsp+B0h] [rbp+27h]
  int v18; // [rsp+B4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+4Fh] BYREF
  int v21; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+5Fh]
  __int64 v24; // [rsp+F0h] [rbp+67h] BYREF
  va_list va1; // [rsp+F0h] [rbp+67h]
  __int64 v26; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+F8h] [rbp+6Fh]
  unsigned __int16 *v28; // [rsp+100h] [rbp+77h]
  unsigned __int16 *v29; // [rsp+108h] [rbp+7Fh]
  va_list va3; // [rsp+110h] [rbp+87h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  v28 = va_arg(va3, unsigned __int16 *);
  v29 = va_arg(va3, unsigned __int16 *);
  v2 = &retaddr;
  v21 = a2;
  v20 = a1;
  if ( stru_140E66D40.StackLimit )
  {
    LOBYTE(v2) = EtwEventEnabled((REGHANDLE)stru_140E66D40.StackLimit, &KseDsEventAddDevice);
    if ( (_BYTE)v2 )
    {
      UserData.Ptr = (ULONGLONG)&v20;
      *(_QWORD *)&UserData.Size = 8LL;
      v5 = &v21;
      v6 = 4LL;
      va_copy(v7, va);
      v8 = 8LL;
      va_copy(v9, va1);
      va_copy(v11, va2);
      v13 = *((_QWORD *)v28 + 1);
      v14 = *v28 + 2;
      v10 = 8LL;
      v12 = 4LL;
      v16 = *((_QWORD *)v29 + 1);
      v17 = *v29 + 2;
      v15 = 0;
      v18 = 0;
      LOBYTE(v2) = EtwWriteEx(
                     (REGHANDLE)stru_140E66D40.StackLimit,
                     &KseDsEventAddDevice,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     7u,
                     &UserData);
    }
  }
  return (char)v2;
}
