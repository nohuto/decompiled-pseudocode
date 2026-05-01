/*
 * XREFs of __local_stdio_printf_options @ 0x1802C8AB4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1802C8A90 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1802C8AE0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1802C93D4 (__scrt_initialize_default_local_stdio_options.c)
 *     wprintf @ 0x1802C9EE4 (wprintf.c)
 *     _vsnwprintf @ 0x1802C9F40 (_vsnwprintf.c)
 *     vswprintf_s @ 0x1802C9FAC (vswprintf_s.c)
 *     _vscwprintf @ 0x1802CA014 (_vscwprintf.c)
 *     swprintf_s @ 0x1802CA064 (swprintf_s.c)
 *     _scwprintf @ 0x1802CA0C8 (_scwprintf.c)
 *     fprintf @ 0x1802CA18C (fprintf.c)
 *     printf @ 0x1802CA1E0 (printf.c)
 *     _vsnprintf @ 0x1802CA23C (_vsnprintf.c)
 *     _vsnprintf_s @ 0x1802CA2A8 (_vsnprintf_s.c)
 *     sprintf_s @ 0x1802CA31C (sprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
