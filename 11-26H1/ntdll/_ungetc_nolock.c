/*
 * XREFs of _ungetc_nolock @ 0x180132834
 * Callers:
 *     ReadString @ 0x1801319C8 (ReadString.c)
 *     _input_l @ 0x180131D30 (_input_l.c)
 *     ReadString_0 @ 0x180135278 (ReadString_0.c)
 *     _input_s @ 0x1801355B4 (_input_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180126898 (_invalid_parameter.c)
 *     _getbuf @ 0x1801328E0 (_getbuf.c)
 */

int __cdecl ungetc_nolock(int Character, FILE *Stream)
{
  unsigned __int8 v3; // di
  int flag; // eax
  char *ptr; // rax
  bool v7; // zf
  char *v8; // rcx
  int v9; // eax

  v3 = Character;
  if ( !Stream )
  {
    invalid_parameter();
    return -1;
  }
  if ( Character == -1 )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  if ( !Stream->_base )
    getbuf(Stream);
  ptr = Stream->_ptr;
  if ( Stream->_ptr == Stream->_base )
  {
    if ( Stream->_cnt )
      return -1;
    ++ptr;
  }
  v7 = (Stream->_flag & 0x40) == 0;
  v8 = ptr - 1;
  Stream->_ptr = ptr - 1;
  if ( v7 )
  {
    *v8 = v3;
  }
  else if ( *v8 != v3 )
  {
    Stream->_ptr = ptr;
    return -1;
  }
  v9 = Stream->_flag;
  ++Stream->_cnt;
  Stream->_flag = v9 & 0xFFFFFFEE | 1;
  return v3;
}
