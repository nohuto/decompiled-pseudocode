/*
 * XREFs of _strnset_s @ 0x180133390
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 */

errno_t __cdecl strnset_s(char *String, size_t SizeInBytes, int Value, size_t MaxCount)
{
  char *v5; // rax

  if ( MaxCount )
  {
    if ( !String )
      goto LABEL_4;
LABEL_6:
    if ( !SizeInBytes )
      goto LABEL_4;
    v5 = String;
    if ( *String )
    {
      while ( MaxCount )
      {
        if ( !--SizeInBytes )
          goto LABEL_16;
        *v5 = Value;
        --MaxCount;
        if ( !*++v5 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( MaxCount )
        goto LABEL_16;
    }
    while ( *v5 )
    {
      if ( !--SizeInBytes )
        break;
      ++v5;
    }
LABEL_16:
    if ( !SizeInBytes )
    {
      *String = 0;
      goto LABEL_4;
    }
    return 0;
  }
  if ( String )
    goto LABEL_6;
  if ( SizeInBytes )
  {
LABEL_4:
    invalid_parameter();
    return 22;
  }
  return 0;
}
