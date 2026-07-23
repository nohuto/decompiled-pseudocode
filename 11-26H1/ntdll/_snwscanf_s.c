/*
 * XREFs of _snwscanf_s @ 0x1801330A0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     _swinput_s @ 0x180136B38 (_swinput_s.c)
 */

int snwscanf_s(const wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return swinput_s(Buffer, BufferCount, Format, va);
  invalid_parameter();
  return -1;
}
