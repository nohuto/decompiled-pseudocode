/*
 * XREFs of _flsbuf @ 0x1401C7C9C
 * Callers:
 *     _vsnwprintf_l @ 0x1401C744C (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1401C75A0 (_vsnprintf_l.c)
 *     write_char_0 @ 0x1401C8F48 (write_char_0.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
