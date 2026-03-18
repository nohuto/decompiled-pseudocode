/*
 * XREFs of ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x14023B648
 * Callers:
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x14023B1F4 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     wcsncmp_0 @ 0x14006E467 (wcsncmp_0.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z @ 0x14023B9AC (-ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z.c)
 *     ?ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z @ 0x14023BAE4 (-ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z.c)
 *     ?ParseIntArray@@YAJPEBGPEAII1@Z @ 0x14023BCAC (-ParseIntArray@@YAJPEBGPEAII1@Z.c)
 */

__int64 __fastcall ParseAndCompareBlockListCondition(
        const unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5,
        unsigned __int8 *a6)
{
  __int64 result; // rax
  bool v11; // zf
  unsigned int v12; // edi
  __int64 v13; // rax
  const unsigned __int16 *v14; // rbx
  const unsigned __int16 *v15; // rbx
  __int64 v16; // rax
  const unsigned __int16 *v17; // rbx
  unsigned __int8 v18[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v20[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v21[4]; // [rsp+40h] [rbp-20h] BYREF

  v18[0] = 0;
  *a6 = 0;
  if ( wcsncmp_0(a1, L"Vendor=", 7uLL) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 304;
    return 3221225485LL;
  }
  v11 = a1[7] == 42;
  v19 = 7;
  v12 = 9;
  if ( v11 )
  {
    if ( a1[8] != 35 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 314;
      return 3221225485LL;
    }
    v13 = 9LL;
  }
  else
  {
    result = ParseAndCompareHexValue(a1, a2, v18, &v19);
    if ( (int)result < 0 || !v18[0] )
      return result;
    v13 = v19;
  }
  v14 = &a1[v13];
  if ( wcsncmp_0(v14, L"Device=", 7uLL) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 337;
    return 3221225485LL;
  }
  v11 = v14[7] == 42;
  v19 = 7;
  if ( v11 )
  {
    if ( v14[8] != 35 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 347;
      return 3221225485LL;
    }
  }
  else
  {
    result = ParseAndCompareHexValue(v14, a3, v18, &v19);
    if ( (int)result < 0 || !v18[0] )
      return result;
    v12 = v19;
  }
  v15 = &v14[v12];
  if ( wcsncmp_0(v15, L"Version=", 8uLL) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 370;
    return 3221225485LL;
  }
  v11 = v15[8] == 42;
  v19 = 8;
  if ( v11 )
  {
    if ( v15[9] != 35 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 380;
      return 3221225485LL;
    }
    v16 = 10LL;
  }
  else
  {
    v20[0] = 0;
    if ( (int)ParseIntArray(a4, v21, 4u, v20) < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 393;
      return 3221225485LL;
    }
    result = ParseAndCompareIntArrays(v15, v21, 4u, v18, &v19);
    if ( (int)result < 0 || !v18[0] )
      return result;
    v16 = v19;
  }
  v17 = &v15[v16];
  if ( wcsncmp_0(v17, L"Model=", 6uLL) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 413;
    return 3221225485LL;
  }
  v11 = v17[6] == 42;
  v19 = 6;
  if ( v11 )
  {
    if ( v17[7] != 35 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 423;
      return 3221225485LL;
    }
    goto LABEL_37;
  }
  v20[0] = a5 / 0x3E8u;
  v20[1] = a5 % 0x3E8u / 0x64;
  result = ParseAndCompareIntArrays(v17, v20, 2u, v18, &v19);
  if ( (int)result >= 0 && v18[0] )
  {
LABEL_37:
    *a6 = 1;
    return 0LL;
  }
  return result;
}
