/*
 * XREFs of _inc @ 0x180131CF8
 * Callers:
 *     ReadString @ 0x1801319C8 (ReadString.c)
 *     _input_l @ 0x180131D30 (_input_l.c)
 * Callees:
 *     _filbuf @ 0x180132828 (_filbuf.c)
 */

__int64 __fastcall inc(FILE *a1)
{
  if ( --a1->_cnt < 0 )
    return (unsigned int)filbuf(a1);
  else
    return *(unsigned __int8 *)a1->_ptr++;
}
