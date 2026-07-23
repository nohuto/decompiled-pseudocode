/*
 * XREFs of HvpIsReadErrorTransient @ 0x140ADD404
 * Callers:
 *     HvAnalyzeLogFiles @ 0x140ADCF88 (HvAnalyzeLogFiles.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall HvpIsReadErrorTransient(int a1)
{
  __int64 v2; // r8
  unsigned __int8 v3; // r9
  int v4; // [rsp+30h] [rbp-29h] BYREF
  __int64 v5; // [rsp+38h] [rbp-21h] BYREF
  __int64 v6; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+70h] [rbp+17h]
  __int64 v9; // [rsp+78h] [rbp+1Fh]
  int *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  __int64 *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]

  if ( a1 == -1073741807 )
    return 0;
  if ( a1 != -1073741801 && a1 != -1073741670 && a1 != -1073741663 )
  {
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
    {
      v5 = 1LL;
      v8 = &v5;
      v9 = 8LL;
      v10 = &v4;
      v4 = v2;
      v12 = &v6;
      v11 = 4LL;
      v6 = 0x1000000LL;
      v13 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&word_140058332, v2, v3, &v7);
    }
    return 0;
  }
  return 1;
}
