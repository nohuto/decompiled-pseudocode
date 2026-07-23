/*
 * XREFs of KsepLogEtwMessage @ 0x1404C6394
 * Callers:
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     _vsnprintf @ 0x140537950 (_vsnprintf.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall KsepLogEtwMessage(int a1, int a2, const char *a3, va_list a4)
{
  unsigned int v5; // eax
  __int64 v6; // rax
  const EVENT_DESCRIPTOR *v7; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v9; // [rsp+50h] [rbp-B0h]
  int v10; // [rsp+58h] [rbp-A8h]
  int v11; // [rsp+5Ch] [rbp-A4h]
  char Dest[255]; // [rsp+60h] [rbp-A0h] BYREF
  char v13; // [rsp+15Fh] [rbp+5Fh]
  int v14; // [rsp+180h] [rbp+80h] BYREF

  v14 = a1;
  if ( stru_140E66D40.StackLimit )
  {
    v5 = vsnprintf(Dest, 0xFFuLL, a3, a4);
    if ( v5 < 0x100 )
    {
      if ( v5 == 255 )
        v13 = 0;
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v14;
      v9 = Dest;
      v6 = -1LL;
      do
        ++v6;
      while ( Dest[v6] );
      v7 = (const EVENT_DESCRIPTOR *)KShimErrorMessage;
      v11 = 0;
      v10 = v6 + 1;
      if ( a2 )
        v7 = &KShimInfoMessage;
      EtwWriteEx((REGHANDLE)stru_140E66D40.StackLimit, v7, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
    else
    {
      v13 = 0;
    }
  }
}
