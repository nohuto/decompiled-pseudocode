/*
 * XREFs of __local_stdio_printf_options @ 0x180001084
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180001060 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800010B0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18000156C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180002180 (_vsnwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
