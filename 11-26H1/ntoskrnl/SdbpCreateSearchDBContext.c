/*
 * XREFs of SdbpCreateSearchDBContext @ 0x1409E2F54
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1409E31A8 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x1409E4A54 (SdbpCheckKObject.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14046AD84 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1404DEE7C (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     AslPathSplit @ 0x140B0D03C (AslPathSplit.c)
 */

__int64 __fastcall SdbpCreateSearchDBContext(_QWORD *a1, const wchar_t **a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rdi
  __int64 v6; // rcx
  const wchar_t *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r15d
  wchar_t *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rcx
  wchar_t *v13; // rax
  unsigned int v14; // r11d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  _WORD *v18; // r11
  int v20; // [rsp+20h] [rbp-498h]
  wchar_t pszSrc[264]; // [rsp+50h] [rbp-468h] BYREF
  wchar_t v22[264]; // [rsp+260h] [rbp-258h] BYREF

  v4 = 0;
  memset_0(v22, 0, 0x208uLL);
  v5 = 0LL;
  memset_0(pszSrc, 0, 0x208uLL);
  if ( !a2 )
  {
    v10 = (wchar_t *)AslAlloc(v6, 4LL);
    v5 = (wchar_t *)AslAlloc(v15, 2LL);
    v17 = AslAlloc(v16, 2LL);
    if ( !v10 || !v5 || !v17 )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpCreateSearchDBContext", 469, (unsigned int)"Unable to allocate memory");
      if ( !v10 )
        goto LABEL_20;
      goto LABEL_19;
    }
    RtlStringCchCopyW(v10, 2uLL, L".");
    *v5 = 0;
    *v18 = 0;
    a1[3] = v18;
    goto LABEL_17;
  }
  v7 = *a2;
  v8 = -1LL;
  do
    ++v8;
  while ( v7[v8] );
  v9 = v8 + 1;
  v10 = (wchar_t *)AslAlloc(v6, 2LL * (unsigned int)(v8 + 1));
  if ( !v10 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCreateSearchDBContext",
      437,
      (unsigned int)"Unable to allocate memory for directory path");
    return v4;
  }
  if ( (int)AslPathSplit(v7, v10, v9, pszSrc, v20, v22) >= 0 )
  {
    v13 = (wchar_t *)AslAlloc(v11, 520LL);
    v5 = v13;
    if ( !v13 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCreateSearchDBContext",
        454,
        (unsigned int)"Unable to allocate memory for full name");
      goto LABEL_19;
    }
    if ( RtlStringCchCopyW(v13, 0x104uLL, pszSrc) < 0 || RtlStringCchCatW(v5, v14, v22) < 0 )
      goto LABEL_19;
LABEL_17:
    a1[7] = 0LL;
    a1[6] = 0LL;
    a1[9] = 0LL;
    a1[8] = 0LL;
    a1[11] = 0LL;
    a1[12] = 0LL;
    v4 = 1;
    a1[1] = a2;
    a1[4] = v10;
    a1[5] = v5;
    return v4;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpCreateSearchDBContext",
    448,
    (unsigned int)"Unable to parse executable path for \"%ws\"");
LABEL_19:
  AslFree(v12, v10);
LABEL_20:
  if ( v5 )
    AslFree(v12, v5);
  return v4;
}
