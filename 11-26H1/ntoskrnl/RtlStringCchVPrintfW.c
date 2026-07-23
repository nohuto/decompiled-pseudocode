/*
 * XREFs of RtlStringCchVPrintfW @ 0x14071A670
 * Callers:
 *     SiLogMessage @ 0x140774464 (SiLogMessage.c)
 * Callees:
 *     _vsnwprintf @ 0x140537830 (_vsnwprintf.c)
 */

NTSTATUS __stdcall RtlStringCchVPrintfW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszFormat,
        va_list argList)
{
  NTSTATUS v5; // ebx
  unsigned int v6; // eax

  v5 = 0;
  v6 = vsnwprintf(pszDest, 0xFFuLL, pszFormat, argList);
  if ( v6 >= 0x100 )
  {
    pszDest[255] = 0;
    return -2147483643;
  }
  else if ( v6 == 255 )
  {
    pszDest[255] = 0;
  }
  return v5;
}
