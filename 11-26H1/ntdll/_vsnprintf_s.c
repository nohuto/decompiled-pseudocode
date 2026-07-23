/*
 * XREFs of _vsnprintf_s @ 0x180132EC0
 * Callers:
 *     _snprintf_s @ 0x180132E90 (_snprintf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     _soutput_s @ 0x180134DCC (_soutput_s.c)
 */

int __cdecl vsnprintf_s(
        char *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const char *const Format,
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
    result = soutput_s(Buffer, BufferCount, Format, ArgList);
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
    result = soutput_s(Buffer, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
  }
  if ( result >= 0 )
    return result;
  *Buffer = 0;
  return -1;
}
