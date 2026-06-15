/*
 * XREFs of ?_Add_char_to_bitmap@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x18014B72C
 * Callers:
 *     ?_Add_char_to_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18014B7B8 (-_Add_char_to_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_bitmap(
        __int64 a1,
        __int64 a2)
{
  unsigned __int16 v2; // bx
  __int64 v4; // rdi
  _OWORD *v5; // r8
  _OWORD *v6; // rax
  __int64 result; // rax

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 16) & 0x100) != 0 )
    v2 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_OWORD **)(v4 + 40);
  if ( !v5 )
  {
    v6 = operator new(0x20uLL);
    v5 = v6;
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)(v4 + 40) = v5;
  }
  result = v2 & 7;
  *((_BYTE *)v5 + ((unsigned __int64)v2 >> 3)) |= 1 << result;
  return result;
}
