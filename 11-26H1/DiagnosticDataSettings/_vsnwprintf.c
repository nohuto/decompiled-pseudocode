/*
 * XREFs of _vsnwprintf @ 0x180002180
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x1800032DC (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180001084 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x180001FDA (_o___stdio_common_vswprintf_0.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, Args);
  if ( result < 0 )
    return -1;
  return result;
}
