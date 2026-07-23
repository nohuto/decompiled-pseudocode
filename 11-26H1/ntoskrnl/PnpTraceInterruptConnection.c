/*
 * XREFs of PnpTraceInterruptConnection @ 0x140A9D13C
 * Callers:
 *     IoDisconnectInterrupt @ 0x140A9C840 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpTraceInterruptConnection(char a1)
{
  NTSTATUS result; // eax
  char v2; // [rsp+30h] [rbp-29h] BYREF
  __int64 v3; // [rsp+38h] [rbp-21h] BYREF
  __int64 v4; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+70h] [rbp+17h]
  __int64 v7; // [rsp+78h] [rbp+1Fh]
  char *v8; // [rsp+80h] [rbp+27h]
  __int64 v9; // [rsp+88h] [rbp+2Fh]
  __int64 *v10; // [rsp+90h] [rbp+37h]
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140E06E48 > 5 && (qword_140E06E58 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_140E06E60 & 0x400000000000LL) == qword_140E06E60 )
    {
      v2 = a1;
      v3 = 1LL;
      v6 = &v3;
      v9 = 1LL;
      v8 = &v2;
      v7 = 8LL;
      v10 = &v4;
      v4 = 0x1000000LL;
      v11 = 8LL;
      return tlgWriteAgg((__int64)&dword_140E06E48, (unsigned __int8 *)&dword_140048574, 0x400000000000LL, 5u, &v5);
    }
  }
  return result;
}
