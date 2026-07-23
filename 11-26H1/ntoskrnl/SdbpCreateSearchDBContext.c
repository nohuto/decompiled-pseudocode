/*
 * XREFs of SdbpCreateSearchDBContext @ 0x140B59B58
 * Callers:
 *     SdbpCheckKObject @ 0x1409D8348 (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x140A37C6C (SdbGetDatabaseMatch.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1404D855C (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     AslPathSplit @ 0x140B0E78C (AslPathSplit.c)
 */

__int64 __fastcall SdbpCreateSearchDBContext(_QWORD *a1, const wchar_t **a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rdi
  const wchar_t *v6; // r14
  __int64 v7; // rax
  unsigned int v8; // r15d
  wchar_t *v9; // rbp
  __int64 v10; // rcx
  wchar_t *v11; // rax
  unsigned int v12; // r11d
  __int64 v13; // rax
  _WORD *v14; // r11
  int v16; // [rsp+20h] [rbp-498h]
  wchar_t pszSrc[264]; // [rsp+50h] [rbp-468h] BYREF
  wchar_t v18[264]; // [rsp+260h] [rbp-258h] BYREF

  v4 = 0;
  memset_0(v18, 0, 0x208uLL);
  v5 = 0LL;
  memset_0(pszSrc, 0, 0x208uLL);
  if ( a2 )
  {
    v6 = *a2;
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = v7 + 1;
    v9 = (wchar_t *)AslAlloc();
    if ( !v9 )
    {
      AslLogCallPrintf(1LL, (__int64)"SdbpCreateSearchDBContext");
      return v4;
    }
    if ( (int)AslPathSplit(v6, v9, v8, pszSrc, v16, v18) >= 0 && (v11 = (wchar_t *)AslAlloc(), (v5 = v11) != 0LL) )
    {
      if ( RtlStringCchCopyW(v11, 0x104uLL, pszSrc) >= 0 && RtlStringCchCatW(v5, v12, v18) >= 0 )
        goto LABEL_16;
    }
    else
    {
      AslLogCallPrintf(1LL, (__int64)"SdbpCreateSearchDBContext");
    }
LABEL_18:
    AslFree(v10, v9);
    goto LABEL_19;
  }
  v9 = (wchar_t *)AslAlloc();
  v5 = (wchar_t *)AslAlloc();
  v13 = AslAlloc();
  if ( v9 && v5 && v13 )
  {
    RtlStringCchCopyW(v9, 2uLL, L".");
    *v5 = 0;
    *v14 = 0;
    a1[3] = v14;
LABEL_16:
    a1[7] = 0LL;
    a1[6] = 0LL;
    a1[9] = 0LL;
    a1[8] = 0LL;
    a1[11] = 0LL;
    a1[12] = 0LL;
    v4 = 1;
    a1[1] = a2;
    a1[4] = v9;
    a1[5] = v5;
    return v4;
  }
  AslLogCallPrintf(1LL, (__int64)"SdbpCreateSearchDBContext");
  if ( v9 )
    goto LABEL_18;
LABEL_19:
  if ( v5 )
    AslFree(v10, v5);
  return v4;
}
