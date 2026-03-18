/*
 * XREFs of RtlStringCchPrintfW @ 0x140086048
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x14001B8C8 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     LibraryRegisterClient @ 0x1400770E0 (LibraryRegisterClient.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x14008E7A4 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x1400847C8 (_vsnwprintf.c)
 *     RtlStringValidateDestW @ 0x140086354 (RtlStringValidateDestW.c)
 */

__int64 RtlStringCchPrintfW(wchar_t *pszDest, unsigned __int64 cchDest, const wchar_t *pszFormat, ...)
{
  __int64 v4; // rdx
  wchar_t *v5; // rcx
  int v6; // esi
  const wchar_t *v7; // r10
  unsigned __int64 v8; // rbx
  int v9; // eax
  va_list ap; // [rsp+78h] [rbp+20h] BYREF

  va_start(ap, pszFormat);
  v6 = RtlStringValidateDestW(pszDest, cchDest, 0x7FFFFFFFuLL);
  if ( v6 < 0 )
  {
    if ( v4 )
      *v5 = 0;
  }
  else
  {
    v8 = v4 - 1;
    v6 = 0;
    v9 = vsnwprintf(v5, v4 - 1, v7, ap);
    if ( v9 < 0 || v9 > v8 )
    {
      pszDest[v8] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v9 == v8 )
    {
      pszDest[v8] = 0;
    }
  }
  return (unsigned int)v6;
}
