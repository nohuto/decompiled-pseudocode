/*
 * XREFs of strcat_s @ 0x180133AD0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 */

errno_t __cdecl strcat_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  char *v3; // r9
  errno_t v4; // ebx
  signed __int64 v6; // r9
  char v7; // al

  if ( Destination && SizeInBytes )
  {
    if ( Source )
    {
      v3 = Destination;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInBytes )
          goto LABEL_7;
      }
      v6 = v3 - Source;
      while ( 1 )
      {
        v7 = *Source;
        Source[v6] = *Source;
        ++Source;
        if ( !v7 )
          return 0;
        if ( !--SizeInBytes )
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
