/*
 * XREFs of ?_Add_char_to_array@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x18014B6B4
 * Callers:
 *     ?_Add_char_to_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18014B7B8 (-_Add_char_to_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_Add_range2@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXGG@Z @ 0x18014BA84 (-_Add_range2@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXGG@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_array(
        __int64 a1,
        __int64 a2)
{
  unsigned __int16 v2; // di
  __int64 v4; // rbx
  _QWORD *v5; // rax

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 16) & 0x100) != 0 )
    v2 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD **)(v4 + 48);
  if ( !v5 )
  {
    v5 = operator new(0x10uLL);
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
    }
    *(_QWORD *)(v4 + 48) = v5;
  }
  return std::_Buf<unsigned short>::_Insert2(v5, v2);
}
