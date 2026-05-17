/*
 * XREFs of _flsbuf @ 0x18012EA18
 * Callers:
 *     _snprintf @ 0x180128300 (_snprintf.c)
 *     _snwprintf @ 0x1801283D0 (_snwprintf.c)
 *     swprintf @ 0x180128A10 (swprintf.c)
 *     _vsprintf_l @ 0x180128B70 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x180128C64 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180128D4C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180128E3C (_vsnwprintf_l.c)
 *     sprintf @ 0x18012C670 (sprintf.c)
 *     write_char @ 0x18012F26C (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
