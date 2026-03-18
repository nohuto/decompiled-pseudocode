/*
 * XREFs of _get_printf_count_output @ 0x140500044
 * Callers:
 *     _woutput_l @ 0x1404FE4EC (_woutput_l.c)
 *     _output_l @ 0x1404FEF18 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140E0EF80 == (RtlCopyFromUser__fo_ | 1);
}
