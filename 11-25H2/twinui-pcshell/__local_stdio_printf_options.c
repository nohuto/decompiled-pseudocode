/*
 * XREFs of __local_stdio_printf_options @ 0x1802D1E34
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1802D1E10 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1802D1E60 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1802D274C (__scrt_initialize_default_local_stdio_options.c)
 *     wprintf @ 0x1802D3014 (wprintf.c)
 *     _vsnwprintf @ 0x1802D3068 (_vsnwprintf.c)
 *     vswprintf_s @ 0x1802D30D0 (vswprintf_s.c)
 *     _vscwprintf @ 0x1802D3134 (_vscwprintf.c)
 *     swprintf_s @ 0x1802D3184 (swprintf_s.c)
 *     _scwprintf @ 0x1802D31DC (_scwprintf.c)
 *     fprintf @ 0x1802D328C (fprintf.c)
 *     printf @ 0x1802D32D8 (printf.c)
 *     _vsnprintf @ 0x1802D332C (_vsnprintf.c)
 *     _vsnprintf_s @ 0x1802D3394 (_vsnprintf_s.c)
 *     sprintf_s @ 0x1802D3404 (sprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
