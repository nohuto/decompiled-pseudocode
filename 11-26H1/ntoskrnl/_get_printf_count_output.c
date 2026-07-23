/*
 * XREFs of _get_printf_count_output @ 0x14053CED4
 * Callers:
 *     _woutput_l @ 0x14053B394 (_woutput_l.c)
 *     _output_l @ 0x14053BDF0 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140E0F348 == (_security_cookie | 1);
}
