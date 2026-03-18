/*
 * XREFs of __local_stdio_printf_options @ 0x180220244
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180220220 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180220270 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180221440 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1802215D8 (_vsnwprintf.c)
 *     swprintf_s @ 0x180221644 (swprintf_s.c)
 *     _vsnprintf @ 0x1802216A8 (_vsnprintf.c)
 *     vsprintf_s @ 0x180221714 (vsprintf_s.c)
 *     _vscprintf @ 0x18022177C (_vscprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
