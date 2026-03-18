/*
 * XREFs of _flsbuf @ 0x1401A37CC
 * Callers:
 *     _vsnwprintf_l @ 0x1401A2EF8 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1401A3010 (_vsnprintf_l.c)
 *     write_char_0 @ 0x1401A4A80 (write_char_0.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
