/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x180043EB4
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180045120 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180044C38 (RtlpGetRegistryHandle.c)
 *     RtlStringCbCatW @ 0x180044DE4 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetDynamicTimeZoneInfoHandle(_WORD *a1, __int64 a2)
{
  __int64 v3; // r8
  signed __int64 v4; // r9
  _WORD *v5; // rdx
  __int16 v6; // ax
  _WORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  _WORD *v10; // rax
  __int64 v11; // r8
  char *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  signed __int64 v15; // rdx
  __int16 v16; // r8
  char *v17; // rax
  _WORD v18[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*a1 )
    return 3221225485LL;
  v3 = 256LL;
  v4 = (char *)L"Time Zones\\" - (char *)v18;
  v5 = v18;
  do
  {
    if ( v3 == -2147483390 )
      break;
    v6 = *(_WORD *)((char *)v5 + v4);
    if ( !v6 )
      break;
    *v5++ = v6;
    --v3;
  }
  while ( v3 );
  v7 = v5 - 1;
  if ( v3 )
    v7 = v5;
  *v7 = 0;
  result = v3 == 0 ? 0x80000005 : 0;
  if ( v3 )
  {
    result = RtlStringCbCatW(v18, 512LL, a1, v4);
    if ( (int)result >= 0 )
    {
      v9 = 256LL;
      v10 = v18;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v9;
      }
      while ( v9 );
      v11 = (256 - v9) & -(__int64)(v9 != 0);
      result = v9 == 0 ? 0xC000000D : 0;
      if ( v9 )
      {
        v12 = (char *)&v18[v11];
        v13 = 256 - v11;
        if ( 256 != v11 )
        {
          v14 = 2147483646LL;
          v15 = (char *)L"\\Dynamic DST" - v12;
          do
          {
            if ( !v14 )
              break;
            v16 = *(_WORD *)&v12[v15];
            if ( !v16 )
              break;
            *(_WORD *)v12 = v16;
            --v14;
            v12 += 2;
            --v13;
          }
          while ( v13 );
        }
        v17 = v12 - 2;
        if ( v13 )
          v17 = v12;
        *(_WORD *)v17 = 0;
        result = v13 == 0 ? 0x80000005 : 0;
      }
      if ( (int)result >= 0 )
        return RtlpGetRegistryHandle(3LL, v18, 0LL, a2);
    }
  }
  return result;
}
