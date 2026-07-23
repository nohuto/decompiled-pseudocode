/*
 * XREFs of AslPathSplit @ 0x140B0E78C
 * Callers:
 *     SdbpCreateSearchDBContext @ 0x140B59B58 (SdbpCreateSearchDBContext.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x140484B50 (RtlStringCchCopyNW.c)
 *     wcsrchr @ 0x14053A7D0 (wcsrchr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathSplit(
        STRSAFE_PCNZWCH pszSrc,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR a4,
        int a5,
        NTSTRSAFE_PWSTR pszDesta)
{
  unsigned int v8; // esi
  wchar_t *v10; // rax
  NTSTATUS v11; // ebx
  STRSAFE_PCNZWCH v12; // r11
  _WORD *v13; // rdx
  __int64 v14; // rcx
  wchar_t *v15; // r8
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  const wchar_t *v18; // rsi
  __int64 v19; // r11
  wchar_t Str[264]; // [rsp+30h] [rbp-258h] BYREF

  *pszDest = 0;
  v8 = cchDest;
  Str[0] = 0;
  *pszDesta = 0;
  *a4 = 0;
  v10 = wcsrchr(pszSrc, 0x5Cu);
  if ( v10 )
  {
    v11 = RtlStringCchCopyNW(pszDest, v8, pszSrc, v10 - pszSrc + 1);
    if ( v11 < 0 )
      goto LABEL_16;
  }
  else
  {
    v12 = pszSrc;
  }
  v13 = v12 + 1;
  v14 = 261LL;
  v15 = Str;
  if ( *v12 != 92 )
    v13 = v12;
  do
  {
    if ( v14 == -2147483385 )
      break;
    if ( !*v13 )
      break;
    *v15++ = *v13++;
    --v14;
  }
  while ( v14 );
  v16 = v15 - 1;
  v11 = v14 == 0 ? 0x80000005 : 0;
  if ( v14 )
    v16 = v15;
  *v16 = 0;
  if ( !v14 )
    goto LABEL_16;
  v17 = wcsrchr(Str, 0x2Eu);
  v18 = v17;
  if ( v17 )
  {
    v11 = RtlStringCchCopyNW(a4, 0x104uLL, Str, v17 - Str);
    if ( v11 >= 0 )
    {
      a4[v19] = 0;
      v11 = RtlStringCchCopyW(pszDesta, 0x104uLL, v18);
      if ( v11 >= 0 )
        return 0;
    }
LABEL_16:
    AslLogCallPrintf(1LL, (__int64)"AslPathSplit");
    return (unsigned int)v11;
  }
  v11 = RtlStringCchCopyW(a4, 0x104uLL, Str);
  if ( v11 < 0 )
    goto LABEL_16;
  return 0;
}
