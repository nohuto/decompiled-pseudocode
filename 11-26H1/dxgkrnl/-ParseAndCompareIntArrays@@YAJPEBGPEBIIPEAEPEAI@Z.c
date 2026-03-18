/*
 * XREFs of ?ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z @ 0x14023BAE4
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x14023B648 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ParseIntArray@@YAJPEBGPEAII1@Z @ 0x14023BCAC (-ParseIntArray@@YAJPEBGPEAII1@Z.c)
 */

__int64 __fastcall ParseAndCompareIntArrays(
        const unsigned __int16 *a1,
        const unsigned int *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int *a5)
{
  unsigned __int8 v9; // di
  __int64 v10; // r9
  __int64 i; // rax
  unsigned __int16 v12; // cx
  __int64 result; // rax
  unsigned __int16 v14; // r8
  bool v15; // dl
  bool v16; // r8
  unsigned int j; // ecx
  unsigned int v18; // r9d
  unsigned int v19; // r9d
  bool v20; // zf
  unsigned int k; // edx
  unsigned __int16 v22; // cx
  unsigned int v23; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v24[4]; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v25[4]; // [rsp+38h] [rbp-18h] BYREF

  v9 = 0;
  v10 = *a5;
  for ( i = v10; ; i = (unsigned int)v10 )
  {
    v12 = a1[i];
    v23 = v10;
    if ( v12 == 35 || !v12 )
      break;
    result = ParseIntArray(a1, v24, a3, &v23);
    if ( (int)result < 0 )
      return result;
    v10 = v23;
    v14 = a1[v23];
    if ( v14 == 45 )
    {
      ++v23;
      result = ParseIntArray(a1, v25, a3, &v23);
      if ( (int)result < 0 )
        return result;
      v15 = 0;
      v16 = 0;
      for ( j = 0; j < a3; ++j )
      {
        if ( !v15 )
        {
          v18 = a2[j];
          if ( v18 < v24[j] )
            goto LABEL_17;
          v15 = v18 > v24[j];
        }
        if ( !v16 )
        {
          v19 = a2[j];
          if ( v19 > v25[j] )
            goto LABEL_17;
          v16 = v19 < v25[j];
        }
      }
      v9 = 1;
LABEL_17:
      v10 = v23;
      v20 = a1[v23] == 44;
    }
    else
    {
      for ( k = 0; k < a3; ++k )
      {
        if ( a2[k] != v24[k] )
          goto LABEL_23;
      }
      v9 = 1;
LABEL_23:
      v20 = v14 == 44;
    }
    if ( !v20 )
      break;
    v10 = (unsigned int)(v10 + 1);
  }
  v22 = a1[v10];
  if ( !v22 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 259;
    return 3221225485LL;
  }
  if ( v22 != 35 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 265;
    return 3221225485LL;
  }
  *a4 = v9;
  *a5 = v10 + 1;
  return 0LL;
}
