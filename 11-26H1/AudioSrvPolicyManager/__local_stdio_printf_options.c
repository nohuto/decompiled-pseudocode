/*
 * XREFs of __local_stdio_printf_options @ 0x18002F41C
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18002F430 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18002F470 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180030470 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180030A4C (_vsnwprintf.c)
 *     vswprintf_s @ 0x180030AB8 (vswprintf_s.c)
 *     _vscwprintf @ 0x180030B20 (_vscwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
