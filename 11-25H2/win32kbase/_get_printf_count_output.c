/*
 * XREFs of _get_printf_count_output @ 0x1401A4B9C
 * Callers:
 *     _woutput_l @ 0x1401A37DC (_woutput_l.c)
 *     _output_l @ 0x1401A4208 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_14029F480 == (_security_cookie | 1);
}
