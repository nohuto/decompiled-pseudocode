/*
 * XREFs of _snscanf_s @ 0x180133200
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126898 (_invalid_parameter.c)
 *     _sinput_s @ 0x180135E94 (_sinput_s.c)
 */

int snscanf_s(const char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sinput_s(Buffer, BufferCount, Format, va);
  invalid_parameter();
  return -1;
}
