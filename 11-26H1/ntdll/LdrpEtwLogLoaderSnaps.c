/*
 * XREFs of LdrpEtwLogLoaderSnaps @ 0x180114F24
 * Callers:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGenerateSnapsUnicodeStrings @ 0x180049370 (LdrpGenerateSnapsUnicodeStrings.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

struct _PEB *__fastcall LdrpEtwLogLoaderSnaps(__int64 a1, int a2, char *Format, va_list ArgList)
{
  struct _PEB *result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v12; // [rsp+48h] [rbp-B8h]
  int v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v14; // [rsp+58h] [rbp-A8h]
  _BYTE v15[256]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[512]; // [rsp+160h] [rbp+60h] BYREF

  v13[1] = 0;
  v11[1] = 0;
  result = (struct _PEB *)RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v9 = (__int64)result->SharedData + 554;
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v10 = (__int64)result->SharedData + 555;
      }
      else
      {
        v10 = 2147353477LL;
      }
      if ( *(char *)v10 < 0 )
      {
        memset_thunk_772440563353939046(v15, 0, 0x100uLL);
        memset_thunk_772440563353939046(v16, 0, 0x200uLL);
        v14 = v15;
        v12 = v16;
        v13[0] = 0x1000000;
        v11[0] = 0x2000000;
        result = (struct _PEB *)LdrpGenerateSnapsUnicodeStrings(1, (__int64)v13, (__int64)v11, a1, a2, Format, ArgList);
        if ( !(_DWORD)result )
          return (struct _PEB *)LdrpLogEtwEvent(5335, 0LL, 0, 0, (unsigned __int16 *)v13, (unsigned __int16 *)v11);
      }
    }
  }
  return result;
}
