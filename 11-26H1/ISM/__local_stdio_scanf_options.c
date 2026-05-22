/*
 * XREFs of __local_stdio_scanf_options @ 0x180099C14
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180099BF0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180099C30 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18009A0E8 (__scrt_initialize_default_local_stdio_options.c)
 *     swscanf_s @ 0x18009B3A8 (swscanf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
