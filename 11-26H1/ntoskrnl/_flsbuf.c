/*
 * XREFs of _flsbuf @ 0x14053B384
 * Callers:
 *     _vsnwprintf_l @ 0x140537850 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x140537970 (_vsnprintf_l.c)
 *     _snprintf @ 0x1405384C0 (_snprintf.c)
 *     _snwprintf @ 0x140538590 (_snwprintf.c)
 *     swprintf @ 0x140538830 (swprintf.c)
 *     _vswprintf_l @ 0x14053892C (_vswprintf_l.c)
 *     sprintf @ 0x140539BC0 (sprintf.c)
 *     _vsprintf_l @ 0x14053A298 (_vsprintf_l.c)
 *     write_char_0 @ 0x14053C630 (write_char_0.c)
 *     _soutput_s @ 0x14053FC4C (_soutput_s.c)
 *     _swoutput_s @ 0x14053FD4C (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
