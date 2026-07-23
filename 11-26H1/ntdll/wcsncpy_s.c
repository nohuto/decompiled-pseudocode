/*
 * XREFs of wcsncpy_s @ 0x180134240
 * Callers:
 *     _wsplitpath_s @ 0x180133600 (_wsplitpath_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 */

errno_t __cdecl wcsncpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  rsize_t v4; // r10
  errno_t v6; // ebx
  wchar_t *v7; // r11
  signed __int64 v8; // r11
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax
  rsize_t v12; // rbx

  v4 = SizeInWords;
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
  if ( !MaxCount )
  {
    *Destination = 0;
    return 0;
  }
  if ( Source )
  {
    v7 = Destination;
    if ( MaxCount == -1LL )
    {
      v8 = (char *)Destination - (char *)Source;
      while ( 1 )
      {
        v9 = *Source;
        *(const wchar_t *)((char *)Source + v8) = *Source;
        ++Source;
        if ( !v9 )
          break;
        if ( !--SizeInWords )
          goto LABEL_25;
      }
    }
    else
    {
      v10 = (char *)Source - (char *)Destination;
      while ( 1 )
      {
        v11 = *(wchar_t *)((char *)v7 + v10);
        v12 = MaxCount;
        *v7++ = v11;
        if ( !v11 )
          break;
        if ( --SizeInWords )
        {
          if ( --MaxCount )
            continue;
        }
        MaxCount = v12 - 1;
        if ( !SizeInWords )
          MaxCount = v12;
        if ( !MaxCount )
          *v7 = 0;
LABEL_25:
        if ( SizeInWords )
          return 0;
        if ( MaxCount == -1LL )
        {
          Destination[v4 - 1] = 0;
          return 80;
        }
        v6 = 34;
        goto LABEL_29;
      }
    }
    return 0;
  }
  v6 = 22;
LABEL_29:
  *Destination = 0;
  invalid_parameter();
  return v6;
}
