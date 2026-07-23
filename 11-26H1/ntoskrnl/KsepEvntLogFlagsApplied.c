/*
 * XREFs of KsepEvntLogFlagsApplied @ 0x14050E58C
 * Callers:
 *     KseQueryDeviceFlags @ 0x1409D7790 (KseQueryDeviceFlags.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char KsepEvntLogFlagsApplied(unsigned __int16 *a1, unsigned __int16 *a2, int a3, ...)
{
  _UNKNOWN **v3; // rax
  ULONG v6; // eax
  int v7; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 v10; // [rsp+58h] [rbp+17h]
  int v11; // [rsp+60h] [rbp+1Fh]
  int v12; // [rsp+64h] [rbp+23h]
  int *v13; // [rsp+68h] [rbp+27h]
  __int64 v14; // [rsp+70h] [rbp+2Fh]
  va_list v15; // [rsp+78h] [rbp+37h]
  __int64 v16; // [rsp+80h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v18; // [rsp+B8h] [rbp+77h] BYREF
  va_list va; // [rsp+C0h] [rbp+7Fh] BYREF

  va_start(va, a3);
  v3 = &retaddr;
  v18 = a3;
  if ( stru_140E66D40.StackLimit )
  {
    LOBYTE(v3) = EtwEventEnabled((REGHANDLE)stru_140E66D40.StackLimit, &KseFlagsApplied);
    if ( (_BYTE)v3 )
    {
      if ( a1 && a2 )
      {
        UserData.Ptr = *((_QWORD *)a1 + 1);
        v6 = *a1 + 2;
        v14 = 4LL;
        UserData.Size = v6;
        v10 = *((_QWORD *)a2 + 1);
        v7 = *a2;
        UserData.Reserved = 0;
        v11 = v7 + 2;
        v13 = &v18;
        va_copy(v15, va);
        v12 = 0;
        v16 = 8LL;
        LOBYTE(v3) = EtwWriteEx((REGHANDLE)stru_140E66D40.StackLimit, &KseFlagsApplied, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return (char)v3;
}
