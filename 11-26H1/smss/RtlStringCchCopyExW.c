/*
 * XREFs of RtlStringCchCopyExW @ 0x14001E5D4
 * Callers:
 *     NtPnpGetDeviceInterfaceList @ 0x14001DD20 (NtPnpGetDeviceInterfaceList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  size_t v8; // rbx
  signed __int64 v9; // r8
  NTSTRSAFE_PWSTR v10; // rdi
  __int64 v11; // rsi
  wchar_t v12; // ax
  NTSTRSAFE_PWSTR v13; // rax
  NTSTATUS v14; // ecx
  __int64 v15; // rax
  size_t v16; // r8
  wchar_t *v17; // r9
  size_t v18; // rdx

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v14 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v8 = cchDest;
    v9 = (char *)pszSrc - (char *)pszDest;
    v10 = pszDest;
    v11 = 0LL;
    do
    {
      if ( !(2147483646 - cchDest + v8) )
        break;
      v12 = *(NTSTRSAFE_PWSTR)((char *)v10 + v9);
      if ( !v12 )
        break;
      *v10 = v12;
      ++v11;
      ++v10;
      --v8;
    }
    while ( v8 );
    v13 = v10 - 1;
    v14 = v8 == 0 ? 0x80000005 : 0;
    if ( v8 )
      v13 = v10;
    *v13 = 0;
    v15 = v11 - 1;
    if ( v8 )
      v15 = v11;
    v16 = cchDest - v15;
    v17 = &pszDest[v15];
    if ( v8 )
      goto LABEL_14;
    v18 = cchDest & 0x7FFFFFFFFFFFFFFFLL;
    if ( v18 )
    {
      v17 = pszDest;
      *pszDest = 0;
      v16 = v18;
    }
    if ( v14 == -2147483643 )
    {
LABEL_14:
      if ( ppszDestEnd )
        *ppszDestEnd = v17;
      if ( pcchRemaining )
        *pcchRemaining = v16;
    }
  }
  return v14;
}
