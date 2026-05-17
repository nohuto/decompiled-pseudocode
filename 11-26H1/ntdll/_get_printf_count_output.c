/*
 * XREFs of _get_printf_count_output @ 0x1801325E8
 * Callers:
 *     _output_l @ 0x18012EA30 (_output_l.c)
 *     _woutput_l @ 0x18012F3A0 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1801C6DB0 == (_security_cookie | 1);
}
