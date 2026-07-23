/*
 * XREFs of strncat_s @ 0x180133BE0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 */

errno_t __cdecl strncat_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  rsize_t v4; // r11
  char *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  char v9; // al
  signed __int64 v10; // r8
  char v11; // al

  v4 = SizeInBytes;
  v5 = Destination;
  if ( MaxCount )
  {
    if ( !Destination )
      goto LABEL_4;
  }
  else if ( !Destination )
  {
    if ( SizeInBytes )
    {
LABEL_4:
      invalid_parameter();
      return 22;
    }
    return 0;
  }
  if ( !SizeInBytes )
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
    if ( !--SizeInBytes )
      goto LABEL_11;
  }
  if ( MaxCount == -1LL )
  {
    v8 = Destination - Source;
    while ( 1 )
    {
      v9 = *Source;
      Source[v8] = *Source;
      ++Source;
      if ( !v9 )
        return 0;
      if ( !--SizeInBytes )
        goto LABEL_23;
    }
  }
  if ( MaxCount )
  {
    v10 = Source - Destination;
    do
    {
      v11 = Destination[v10];
      *Destination++ = v11;
      if ( !v11 )
        return 0;
      if ( !--SizeInBytes )
        goto LABEL_23;
    }
    while ( --MaxCount );
  }
  *Destination = 0;
LABEL_23:
  if ( !SizeInBytes )
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
