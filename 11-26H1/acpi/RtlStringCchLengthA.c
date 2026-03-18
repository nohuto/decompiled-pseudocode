/*
 * XREFs of RtlStringCchLengthA @ 0x140030AB0
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x14005FC00 (ACPIEcInitOpRegionHandler.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthA(STRSAFE_PCNZCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // rax
  NTSTATUS v4; // ecx

  if ( !psz || cchMax > 0x7FFFFFFF )
  {
    v4 = -1073741811;
LABEL_14:
    if ( pcchLength )
      *pcchLength = 0LL;
    return v4;
  }
  for ( i = cchMax; i; --i )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  v4 = -1073741811;
  if ( i )
    v4 = 0;
  if ( pcchLength )
  {
    if ( i )
      *pcchLength = cchMax - i;
    else
      *pcchLength = 0LL;
  }
  if ( !i )
    goto LABEL_14;
  return v4;
}
