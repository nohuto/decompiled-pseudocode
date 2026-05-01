/*
 * XREFs of __local_stdio_scanf_options @ 0x1802C8AC4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1802C8A90 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1802C8AE0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1802C93D4 (__scrt_initialize_default_local_stdio_options.c)
 *     swscanf_s @ 0x1802CA12C (swscanf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
