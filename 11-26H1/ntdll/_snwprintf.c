/*
 * XREFs of _snwprintf @ 0x180128140
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     _flsbuf @ 0x18012E788 (_flsbuf.c)
 *     _woutput_l @ 0x18012F110 (_woutput_l.c)
 */

int snwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, ...)
{
  int v4; // edi
  char *ptr; // rcx
  FILE File; // [rsp+38h] [rbp-38h] BYREF
  va_list va; // [rsp+A8h] [rbp+38h] BYREF

  va_start(va, Format);
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
    v4 = woutput_l(&File, Format, 0LL, (__int64 *)va);
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
    return v4;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
