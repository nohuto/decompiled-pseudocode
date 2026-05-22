/*
 * XREFs of __local_stdio_printf_options @ 0x18005815C
 * Callers:
 *     _vsnwprintf_l @ 0x1800580E8 (_vsnwprintf_l.c)
 *     initialize_legacy_wide_specifiers @ 0x180099BF0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180099C30 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18009A0E8 (__scrt_initialize_default_local_stdio_options.c)
 *     swprintf_s @ 0x18009B344 (swprintf_s.c)
 *     sprintf_s @ 0x18009B408 (sprintf_s.c)
 *     _scprintf @ 0x18009B46C (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
