/*
 * XREFs of wcscat_s @ 0x180134000
 * Callers:
 *     _BuildCumulativeOverlayFilePath @ 0x18001E54C (_BuildCumulativeOverlayFilePath.c)
 *     RtlConvertSidToUnicodeString @ 0x1800272E0 (RtlConvertSidToUnicodeString.c)
 *     _AppendStandardOverlayFilePath @ 0x1800E4068 (_AppendStandardOverlayFilePath.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  wchar_t *v3; // r9
  errno_t v4; // ebx
  wchar_t v6; // ax

  if ( Destination && SizeInWords )
  {
    if ( Source )
    {
      v3 = Destination;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInWords )
          goto LABEL_7;
      }
      while ( 1 )
      {
        v6 = *Source++;
        *v3++ = v6;
        if ( !v6 )
          return 0;
        if ( !--SizeInWords )
        {
          v4 = 34;
          goto LABEL_8;
        }
      }
    }
    else
    {
LABEL_7:
      v4 = 22;
LABEL_8:
      *Destination = 0;
      invalid_parameter();
      return v4;
    }
  }
  else
  {
    invalid_parameter();
    return 22;
  }
}
