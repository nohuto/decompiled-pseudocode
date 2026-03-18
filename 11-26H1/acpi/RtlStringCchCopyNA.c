/*
 * XREFs of RtlStringCchCopyNA @ 0x140030530
 * Callers:
 *     ACPIGetProcessorIDWide @ 0x14004C994 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x14004CE50 (ACPIGetConvertToHardwareIDWide.c)
 *     LoadDDB @ 0x14006CDDC (LoadDDB.c)
 *     DumpObject @ 0x14006FE98 (DumpObject.c)
 *     ProcessLoadTable @ 0x1400711D0 (ProcessLoadTable.c)
 *     AMLILoadDDB @ 0x1400DC2B4 (AMLILoadDDB.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNA(NTSTRSAFE_PSTR pszDest, size_t cchDest, STRSAFE_PCNZCH pszSrc, size_t cchToCopy)
{
  size_t v4; // r9
  signed __int64 v5; // r8
  char v6; // al
  NTSTRSAFE_PSTR v7; // rax
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    if ( !cchDest )
      return -1073741811;
LABEL_13:
    *pszDest = 0;
    return -1073741811;
  }
  if ( cchToCopy > 0x7FFFFFFE )
    goto LABEL_13;
  v4 = cchToCopy - cchDest;
  v5 = pszSrc - pszDest;
  do
  {
    if ( !(v4 + cchDest) )
      break;
    v6 = pszDest[v5];
    if ( !v6 )
      break;
    *pszDest++ = v6;
    --cchDest;
  }
  while ( cchDest );
  v7 = pszDest - 1;
  if ( cchDest )
    v7 = pszDest;
  *v7 = 0;
  result = -2147483643;
  if ( cchDest )
    return 0;
  return result;
}
