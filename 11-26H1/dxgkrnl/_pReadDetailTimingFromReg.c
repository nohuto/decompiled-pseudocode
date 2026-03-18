/*
 * XREFs of _pReadDetailTimingFromReg @ 0x140275BF4
 * Callers:
 *     _pLoadAdditinalMode @ 0x14038D4B8 (_pLoadAdditinalMode.c)
 * Callees:
 *     ?IsValidVideoStandardType@@YAJW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@@Z @ 0x140098EC0 (-IsValidVideoStandardType@@YAJW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _pVerifyDetailTiming @ 0x140275D6C (_pVerifyDetailTiming.c)
 */

__int64 __fastcall pReadDetailTimingFromReg(HANDLE KeyHandle, int a2, unsigned int a3, unsigned int *a4)
{
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 i; // rdi
  NTSTATUS v9; // eax
  int valid; // ebx
  unsigned int v11; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-78h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-70h] BYREF
  int v15; // [rsp+3Ch] [rbp-6Ch]
  int v16; // [rsp+40h] [rbp-68h]
  unsigned int v17; // [rsp+44h] [rbp-64h]

  v5 = a3;
  v6 = a2;
  ResultLength = 0;
  for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
  {
    v9 = ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&unk_1400AC490 + (unsigned int)i,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    valid = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry4(3LL, v6, v5, (unsigned int)i, v9);
      WdLogGlobalForLineNumber = 466;
      return (unsigned int)valid;
    }
    if ( v15 != 4 || v16 != 4 )
    {
      WdLogSingleEntry4(3LL, v6, v5, (unsigned int)i, v9);
      WdLogGlobalForLineNumber = 423;
      return (unsigned int)-1073741811;
    }
    v11 = v17;
    if ( (_DWORD)i )
    {
      a4[i + 1] = v17;
    }
    else
    {
      *a4 = HIBYTE(v17);
      a4[1] = v11 & 0xFFFFFF;
      valid = IsValidVideoStandardType((enum _D3DKMDT_VIDEO_SIGNAL_STANDARD)HIBYTE(v11));
      if ( valid < 0 )
      {
        WdLogSingleEntry2(3LL, v5, v6);
        WdLogGlobalForLineNumber = 450;
        return (unsigned int)valid;
      }
    }
  }
  return (unsigned int)pVerifyDetailTiming(a4 + 2);
}
