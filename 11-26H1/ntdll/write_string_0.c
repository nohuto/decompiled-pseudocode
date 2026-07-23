/*
 * XREFs of write_string_0 @ 0x18012FAF4
 * Callers:
 *     _woutput_l @ 0x18012F110 (_woutput_l.c)
 * Callees:
 *     _errno @ 0x180106E40 (_errno.c)
 *     write_char_0 @ 0x18012FA48 (write_char_0.c)
 */

void __fastcall write_string_0(wchar_t *a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  v6 = a2;
  if ( (*(_BYTE *)(a3 + 24) & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v6;
        write_char_0(*a1++, a3, a4);
        if ( *a4 == -1 )
        {
          if ( *errno() != 42 )
            return;
          write_char_0(0x3Fu, a3, a4);
        }
      }
      while ( v6 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
}
