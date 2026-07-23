/*
 * XREFs of KsepDsEventPoolAllocate @ 0x140601E00
 * Callers:
 *     KseDsHookExAllocatePool @ 0x1406012C0 (KseDsHookExAllocatePool.c)
 *     KseDsHookExAllocatePoolWithTag @ 0x140601320 (KseDsHookExAllocatePoolWithTag.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char KsepDsEventPoolAllocate(__int64 a1, __int64 a2, int a3, ...)
{
  _UNKNOWN **v3; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-1h]
  __int64 v7; // [rsp+60h] [rbp+7h]
  int *v8; // [rsp+68h] [rbp+Fh]
  __int64 v9; // [rsp+70h] [rbp+17h]
  va_list v10; // [rsp+78h] [rbp+1Fh]
  __int64 v11; // [rsp+80h] [rbp+27h]
  va_list v12; // [rsp+88h] [rbp+2Fh]
  __int64 v13; // [rsp+90h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+5Fh] BYREF
  __int64 v16; // [rsp+C0h] [rbp+67h] BYREF
  int v17; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+D0h] [rbp+77h] BYREF
  va_list va; // [rsp+D0h] [rbp+77h]
  va_list va1; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v3 = &retaddr;
  v17 = a3;
  v16 = a2;
  v15 = a1;
  if ( stru_140E66D40.StackLimit )
  {
    LOBYTE(v3) = EtwEventEnabled((REGHANDLE)stru_140E66D40.StackLimit, &KseDsEventPoolAllocate);
    if ( (_BYTE)v3 )
    {
      UserData.Ptr = (ULONGLONG)&v15;
      *(_QWORD *)&UserData.Size = 8LL;
      v6 = &v16;
      v7 = 8LL;
      v8 = &v17;
      v9 = 4LL;
      va_copy(v10, va);
      va_copy(v12, va1);
      v11 = 8LL;
      v13 = 4LL;
      LOBYTE(v3) = EtwWriteEx(
                     (REGHANDLE)stru_140E66D40.StackLimit,
                     &KseDsEventPoolAllocate,
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
