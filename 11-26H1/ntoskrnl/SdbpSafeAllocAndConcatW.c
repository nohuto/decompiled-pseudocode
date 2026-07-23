/*
 * XREFs of SdbpSafeAllocAndConcatW @ 0x140887F80
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x140887904 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1404509C0 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyNW @ 0x140484B50 (RtlStringCchCopyNW.c)
 *     RtlStringCchCatNW @ 0x14063F6D8 (RtlStringCchCatNW.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall SdbpSafeAllocAndConcatW(
        wchar_t **a1,
        const wchar_t *a2,
        size_t a3,
        const wchar_t *a4,
        size_t cchToAppend)
{
  size_t v6; // rdi
  size_t v10; // r10
  NTSTATUS v11; // ebx
  const char *v12; // r9
  int v13; // r8d
  size_t v14; // rsi
  unsigned __int64 v15; // rax
  size_t v16; // r14
  wchar_t *v17; // rax
  wchar_t *v18; // rbp
  int v19; // r8d
  const char *v20; // r9
  __int64 v21; // rcx
  size_t pcchLength; // [rsp+70h] [rbp+18h] BYREF

  pcchLength = a3;
  v6 = a3;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( !a4 )
    return 3221225714LL;
  v10 = 0x7FFFFFFFLL;
  if ( !a3 )
  {
    v11 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength);
    if ( v11 < 0 )
    {
      v12 = "RtlStringCchLengthW failed [%x]";
      v13 = 1617;
LABEL_28:
      AslLogCallPrintf(1, (unsigned int)"SdbpSafeAllocAndConcatW", v13, (_DWORD)v12);
      return (unsigned int)v11;
    }
    v6 = pcchLength;
  }
  v14 = cchToAppend;
  if ( !cchToAppend )
  {
    v11 = RtlStringCchLengthW(a4, v10, &cchToAppend);
    if ( v11 < 0 )
    {
      v12 = "RtlStringCchLengthW failed [%x]";
      v13 = 1625;
      goto LABEL_28;
    }
    v14 = cchToAppend;
  }
  v15 = v6 + v14;
  if ( v6 + v14 < v6 )
  {
    v13 = 1635;
    goto LABEL_27;
  }
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v13 = 1642;
LABEL_27:
    v12 = "RtlSizeTAdd failed [%x]";
    v11 = -1073741675;
    goto LABEL_28;
  }
  v17 = (wchar_t *)AslAlloc(a1, 2 * v16);
  v18 = v17;
  if ( v17 )
  {
    v11 = RtlStringCchCopyNW(v17, v16, a2, v6);
    if ( v11 >= 0 )
    {
      v11 = RtlStringCchCatNW(v18, v16, a4, v14);
      if ( v11 >= 0 )
      {
        *a1 = v18;
        return (unsigned int)v11;
      }
      v19 = 1666;
      v20 = "RtlStringCchCatW failed to cat second string [%x]";
    }
    else
    {
      v19 = 1657;
      v20 = "RtlStringCchCopyW failed to copy first string [%x]";
    }
    AslLogCallPrintf(1, (unsigned int)"SdbpSafeAllocAndConcatW", v19, (_DWORD)v20);
    AslFree(v21, v18);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
