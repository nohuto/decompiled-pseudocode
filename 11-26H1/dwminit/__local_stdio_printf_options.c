/*
 * XREFs of __local_stdio_printf_options @ 0x180002194
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180002170 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800021C0 (initialize_msvcrt_compatibility.c)
 *     _vsnwprintf @ 0x1800032E4 (_vsnwprintf.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180003D08 (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
