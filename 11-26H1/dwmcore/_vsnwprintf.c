/*
 * XREFs of _vsnwprintf @ 0x1802215D8
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800795B8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x180194264 (StringVPrintfWorkerW.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180220244 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_0 @ 0x1802222B9 (__stdio_common_vswprintf_0.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, Args);
  if ( result < 0 )
    return -1;
  return result;
}
