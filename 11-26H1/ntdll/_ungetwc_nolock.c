/*
 * XREFs of _ungetwc_nolock @ 0x18013762C
 * Callers:
 *     ReadString_1 @ 0x180136774 (ReadString_1.c)
 *     _winput_s @ 0x180136C0C (_winput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 */

wint_t __cdecl ungetwc_nolock(wint_t Character, FILE *Stream)
{
  int flag; // r10d
  char *ptr; // rax
  wint_t *v5; // r9
  int v6; // eax

  if ( !Stream )
  {
    invalid_parameter();
    return -1;
  }
  if ( Character == 0xFFFF )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  ptr = Stream->_ptr;
  if ( Stream->_ptr < Stream->_base + 2 )
  {
    if ( Stream->_cnt || Stream->_bufsiz < 2u )
      return -1;
    ptr = Stream->_base + 2;
  }
  v5 = (wint_t *)(ptr - 2);
  Stream->_ptr = ptr - 2;
  if ( (flag & 0x40) != 0 )
  {
    if ( *v5 != Character )
    {
      Stream->_ptr = ptr;
      return -1;
    }
  }
  else
  {
    *v5 = Character;
  }
  v6 = Stream->_flag;
  Stream->_cnt += 2;
  Stream->_flag = v6 & 0xFFFFFFEE | 1;
  return Character;
}
