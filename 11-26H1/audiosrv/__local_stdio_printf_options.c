/*
 * XREFs of __local_stdio_printf_options @ 0x1800B1C14
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800B1BF0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800B1C40 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800B2DF0 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1800B3238 (_vsnwprintf.c)
 *     vswprintf_s @ 0x1800B32A4 (vswprintf_s.c)
 *     _vscwprintf @ 0x1800B330C (_vscwprintf.c)
 *     swprintf_s @ 0x1800B335C (swprintf_s.c)
 *     _vsnprintf @ 0x1800B33C0 (_vsnprintf.c)
 *     _snprintf_s @ 0x1800B342C (_snprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
