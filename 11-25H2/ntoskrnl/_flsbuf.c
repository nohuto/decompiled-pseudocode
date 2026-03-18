/*
 * XREFs of _flsbuf @ 0x1404FE4DC
 * Callers:
 *     _vsnwprintf_l @ 0x1404FAB00 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1404FAC20 (_vsnprintf_l.c)
 *     _snprintf @ 0x1404FB730 (_snprintf.c)
 *     _snwprintf @ 0x1404FB7F0 (_snwprintf.c)
 *     swprintf @ 0x1404FBA80 (swprintf.c)
 *     _vswprintf_l @ 0x1404FBB6C (_vswprintf_l.c)
 *     sprintf @ 0x1404FCDE0 (sprintf.c)
 *     _vsprintf_l @ 0x1404FD4D8 (_vsprintf_l.c)
 *     write_char_0 @ 0x1404FF790 (write_char_0.c)
 *     _soutput_s @ 0x140502D34 (_soutput_s.c)
 *     _swoutput_s @ 0x140502E28 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
