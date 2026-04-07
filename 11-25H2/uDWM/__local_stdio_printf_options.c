/*
 * XREFs of __local_stdio_printf_options @ 0x18009A794
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18009A770 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18009A7C0 (initialize_msvcrt_compatibility.c)
 *     _vsnwprintf @ 0x18009B73C (_vsnwprintf.c)
 *     _vsnprintf @ 0x18009B7A4 (_vsnprintf.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18009C854 (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
