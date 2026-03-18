/*
 * XREFs of _get_printf_count_output @ 0x1401C9064
 * Callers:
 *     _woutput_l @ 0x1401C7CAC (_woutput_l.c)
 *     _output_l @ 0x1401C8708 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1402AA480 == (_security_cookie | 1);
}
