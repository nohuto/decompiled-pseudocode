/*
 * XREFs of _flsbuf @ 0x140538F04
 * Callers:
 *     _vsnwprintf_l @ 0x1405353D0 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1405354F0 (_vsnprintf_l.c)
 *     _snprintf @ 0x140536040 (_snprintf.c)
 *     _snwprintf @ 0x140536110 (_snwprintf.c)
 *     swprintf @ 0x1405363B0 (swprintf.c)
 *     _vswprintf_l @ 0x1405364AC (_vswprintf_l.c)
 *     sprintf @ 0x140537740 (sprintf.c)
 *     _vsprintf_l @ 0x140537E18 (_vsprintf_l.c)
 *     write_char_0 @ 0x14053A1B0 (write_char_0.c)
 *     _soutput_s @ 0x14053D7CC (_soutput_s.c)
 *     _swoutput_s @ 0x14053D8CC (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
