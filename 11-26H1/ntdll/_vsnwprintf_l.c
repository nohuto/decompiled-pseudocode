/*
 * XREFs of _vsnwprintf_l @ 0x180128BAC
 * Callers:
 *     _vsnwprintf @ 0x180128B90 (_vsnwprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     _flsbuf @ 0x18012E788 (_flsbuf.c)
 *     _woutput_l @ 0x18012F110 (_woutput_l.c)
 */

int __cdecl vsnwprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int v6; // edi
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( Format && (!BufferCount || Buffer) )
  {
    File._flag = 66;
    File._base = (char *)Buffer;
    File._ptr = (char *)Buffer;
    if ( BufferCount <= 0x3FFFFFFF )
      File._cnt = 2 * BufferCount;
    else
      File._cnt = 0x7FFFFFFF;
    v6 = woutput_l(&File, Format, Locale, ArgList);
    if ( Buffer )
    {
      if ( --File._cnt < 0 )
      {
        flsbuf(0, &File);
        ptr = File._ptr;
      }
      else
      {
        *File._ptr = 0;
        ptr = ++File._ptr;
      }
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *ptr = 0;
    }
    return v6;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
