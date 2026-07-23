/*
 * XREFs of _flsbuf @ 0x18012E788
 * Callers:
 *     _snprintf @ 0x180128070 (_snprintf.c)
 *     _snwprintf @ 0x180128140 (_snwprintf.c)
 *     swprintf @ 0x180128780 (swprintf.c)
 *     _vsprintf_l @ 0x1801288E0 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x1801289D4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180128ABC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180128BAC (_vsnwprintf_l.c)
 *     sprintf @ 0x18012C3E0 (sprintf.c)
 *     write_char @ 0x18012EFDC (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
