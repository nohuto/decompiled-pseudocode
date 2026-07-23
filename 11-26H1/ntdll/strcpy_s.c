/*
 * XREFs of strcpy_s @ 0x180133B60
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1800E8330 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 */

errno_t __cdecl strcpy_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  errno_t v3; // ebx
  signed __int64 v4; // r9
  char v5; // al

  if ( Destination && SizeInBytes )
  {
    if ( Source )
    {
      v4 = Destination - Source;
      while ( 1 )
      {
        v5 = *Source;
        Source[v4] = *Source;
        ++Source;
        if ( !v5 )
          return 0;
        if ( !--SizeInBytes )
        {
          v3 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v3 = 22;
LABEL_9:
      *Destination = 0;
      invalid_parameter();
      return v3;
    }
  }
  else
  {
    invalid_parameter();
    return 22;
  }
}
