/*
 * XREFs of _strset_s @ 0x180133420
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 */

errno_t __cdecl strset_s(char *Destination, size_t DestinationSize, int Value)
{
  char *v3; // rax

  if ( !Destination || !DestinationSize )
    goto LABEL_8;
  v3 = Destination;
  if ( *Destination )
  {
    do
    {
      if ( !--DestinationSize )
        break;
      *v3++ = Value;
    }
    while ( *v3 );
    if ( !DestinationSize )
    {
      *Destination = 0;
LABEL_8:
      invalid_parameter();
      return 22;
    }
  }
  return 0;
}
