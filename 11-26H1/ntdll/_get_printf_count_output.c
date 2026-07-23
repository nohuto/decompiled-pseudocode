/*
 * XREFs of _get_printf_count_output @ 0x180132358
 * Callers:
 *     _output_l @ 0x18012E7A0 (_output_l.c)
 *     _woutput_l @ 0x18012F110 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1801C5DB0 == (_security_cookie | 1);
}
