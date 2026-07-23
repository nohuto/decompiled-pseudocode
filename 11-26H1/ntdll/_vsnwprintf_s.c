/*
 * XREFs of _vsnwprintf_s @ 0x180132FF0
 * Callers:
 *     _snwprintf_s @ 0x180132FC0 (_snwprintf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     _swoutput_s @ 0x180135C80 (_swoutput_s.c)
 */

int __cdecl vsnwprintf_s(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const wchar_t *const Format,
        va_list ArgList)
{
  int result; // eax

  if ( !Format )
    goto LABEL_12;
  if ( MaxCount )
  {
    if ( !Buffer )
    {
LABEL_12:
      invalid_parameter();
      return -1;
    }
  }
  else if ( !Buffer )
  {
    if ( !BufferCount )
      return 0;
    goto LABEL_12;
  }
  if ( !BufferCount )
    goto LABEL_12;
  if ( BufferCount <= MaxCount )
  {
    result = swoutput_s(Buffer, BufferCount, Format, ArgList);
    if ( result == -2 )
    {
      if ( MaxCount == -1LL )
        return -1;
      *Buffer = 0;
      goto LABEL_12;
    }
  }
  else
  {
    result = swoutput_s(Buffer, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
  }
  if ( result >= 0 )
    return result;
  *Buffer = 0;
  return -1;
}
