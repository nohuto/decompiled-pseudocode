/*
 * XREFs of _vscprintf @ 0x18022177C
 * Callers:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x18028D60C (-Print@DwmDbg@@YAXQEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180220244 (__local_stdio_printf_options.c)
 *     __stdio_common_vsprintf_0 @ 0x1802222D1 (__stdio_common_vsprintf_0.c)
 */

int __cdecl vscprintf(const char *const Format, va_list ArgList)
{
  unsigned __int64 *v4; // rax
  int result; // eax

  v4 = _local_stdio_printf_options();
  result = _stdio_common_vsprintf_0(*v4 | 2, 0LL, 0LL, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
