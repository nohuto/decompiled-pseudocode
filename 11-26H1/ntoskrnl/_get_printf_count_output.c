/*
 * XREFs of _get_printf_count_output @ 0x14053AA54
 * Callers:
 *     _woutput_l @ 0x140538F14 (_woutput_l.c)
 *     _output_l @ 0x140539970 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140E0F2C8 == (_security_cookie | 1);
}
