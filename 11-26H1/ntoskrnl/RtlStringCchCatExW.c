/*
 * XREFs of RtlStringCchCatExW @ 0x14049034C
 * Callers:
 *     PiCMGenerateDeviceInstance @ 0x1407B3B38 (PiCMGenerateDeviceInstance.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1409616A0 (_CmGetDeviceInterfaceRegKeyPath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  size_t v8; // r9
  NTSTRSAFE_PWSTR v9; // rax
  size_t v10; // rsi
  NTSTATUS result; // eax
  wchar_t *v12; // rdx
  size_t v13; // rcx
  size_t v14; // rdi
  char *v15; // rbx
  wchar_t v16; // ax
  wchar_t *v17; // rax

  if ( cchDest - 1 > 0x7FFFFFFE )
    return -1073741811;
  v8 = cchDest;
  v9 = pszDest;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v8;
  }
  while ( v8 );
  v10 = (cchDest - v8) & -(__int64)(v8 != 0);
  result = v8 == 0 ? 0xC000000D : 0;
  if ( v8 )
  {
    v12 = &pszDest[v10];
    v13 = cchDest - v10;
    result = 0;
    if ( cchDest - v10 <= 1 )
    {
      if ( !*pszSrc )
        return result;
      result = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    else
    {
      v14 = 2147483646 - v13;
      v15 = (char *)((char *)pszSrc - (char *)v12);
      do
      {
        if ( !(v14 + v13) )
          break;
        v16 = *(wchar_t *)((char *)v12 + (_QWORD)v15);
        if ( !v16 )
          break;
        *v12++ = v16;
        --v13;
      }
      while ( v13 );
      v17 = v12 - 1;
      if ( v13 )
        v17 = v12;
      *v17 = 0;
      result = v13 == 0 ? 0x80000005 : 0;
      if ( v13 )
        return result;
    }
    if ( (cchDest & 0x7FFFFFFFFFFFFFFFLL) != 0 )
      *pszDest = 0;
  }
  return result;
}
