/*
 * XREFs of wcsncat_s @ 0x180134130
 * Callers:
 *     _BuildCumulativeOverlayFilePath @ 0x18001E54C (_BuildCumulativeOverlayFilePath.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  rsize_t v4; // r11
  wchar_t *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  v4 = SizeInWords;
  v5 = Destination;
  if ( MaxCount )
  {
    if ( !Destination )
      goto LABEL_4;
  }
  else if ( !Destination )
  {
    if ( SizeInWords )
    {
LABEL_4:
      invalid_parameter();
      return 22;
    }
    return 0;
  }
  if ( !SizeInWords )
    goto LABEL_4;
  if ( MaxCount && !Source )
  {
LABEL_11:
    v7 = 22;
LABEL_27:
    *v5 = 0;
    invalid_parameter();
    return v7;
  }
  while ( *Destination )
  {
    ++Destination;
    if ( !--SizeInWords )
      goto LABEL_11;
  }
  if ( MaxCount == -1LL )
  {
    v8 = (char *)Destination - (char *)Source;
    while ( 1 )
    {
      v9 = *Source;
      *(const wchar_t *)((char *)Source + v8) = *Source;
      ++Source;
      if ( !v9 )
        return 0;
      if ( !--SizeInWords )
        goto LABEL_23;
    }
  }
  if ( MaxCount )
  {
    v10 = (char *)Source - (char *)Destination;
    do
    {
      v11 = *(wchar_t *)((char *)Destination + v10);
      *Destination++ = v11;
      if ( !v11 )
        return 0;
      if ( !--SizeInWords )
        goto LABEL_23;
    }
    while ( --MaxCount );
  }
  *Destination = 0;
LABEL_23:
  if ( !SizeInWords )
  {
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
    goto LABEL_27;
  }
  return 0;
}
