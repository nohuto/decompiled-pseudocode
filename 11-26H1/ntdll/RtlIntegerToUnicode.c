/*
 * XREFs of RtlIntegerToUnicode @ 0x180027580
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800206B0 (RtlGetFileMUIPath.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180024430 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180026C60 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlConvertSidToUnicodeString @ 0x1800272E0 (RtlConvertSidToUnicodeString.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlIntegerToUnicode(unsigned int a1, unsigned int a2, int a3, char *a4)
{
  int v9; // ecx
  int v10; // r10d
  _WORD *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  bool v14; // cc
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  _WORD *v17; // rdi
  _BYTE v18[14]; // [rsp+62h] [rbp-36h] BYREF

  if ( a2 == 10 )
  {
    v9 = 0;
    v10 = 0;
  }
  else
  {
    if ( a2 != 16 )
      return 3221225485LL;
    v9 = 4;
    v10 = 15;
  }
  v11 = v18;
  do
  {
    if ( v9 )
    {
      v12 = a1 & v10;
      a1 >>= v9;
    }
    else
    {
      v12 = a1 % a2;
      a1 /= a2;
    }
    *--v11 = RtlpIntegerWChars[v12];
  }
  while ( a1 );
  v13 = (v18 - (_BYTE *)v11) >> 1;
  if ( a3 < 0 )
  {
    a3 = -a3;
    v14 = (int)v13 <= a3;
    if ( (int)v13 >= a3 )
      goto LABEL_11;
    v15 = 2LL * (unsigned int)(a3 - v13);
    v16 = v15 >> 1;
    v17 = a4;
    while ( v16 )
    {
      *v17++ = 48;
      --v16;
    }
    a3 = (v18 - (_BYTE *)v11) >> 1;
    a4 += v15;
  }
  v14 = (int)v13 <= a3;
LABEL_11:
  if ( !v14 )
    return 2147483653LL;
  memmove(a4, v11, 2LL * (unsigned int)v13);
  if ( (int)v13 < a3 )
    *(_WORD *)&a4[2 * (unsigned int)v13] = 0;
  return 0LL;
}
