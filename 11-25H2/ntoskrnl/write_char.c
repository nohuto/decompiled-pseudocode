/*
 * XREFs of write_char @ 0x1404FEDF8
 * Callers:
 *     _woutput_l @ 0x1404FE4EC (_woutput_l.c)
 *     write_multi_char @ 0x1404FEE4C (write_multi_char.c)
 *     write_string @ 0x1404FEEA4 (write_string.c)
 * Callees:
 *     _fputwc_nolock @ 0x140500064 (_fputwc_nolock.c)
 */

__int16 __fastcall write_char(wchar_t a1, FILE *a2, _DWORD *a3)
{
  int flag; // eax

  flag = a2->_flag;
  if ( (flag & 0x40) == 0 || a2->_base )
  {
    LOWORD(flag) = fputwc_nolock(a1, a2);
    if ( (_WORD)flag == 0xFFFF && (flag = a2->_flag, (flag & 0x20) != 0) )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
  return flag;
}
