/*
 * XREFs of ?_Add_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEAV?$_Node_class@GV?$regex_traits@G@std@@@2@F_N@Z @ 0x18014B83C
 * Callers:
 *     ?_Add_named_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXF_N@Z @ 0x18014BA3C (-_Add_named_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXF_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?isctype@?$_Regex_traits@G@std@@QEBA_NGF@Z @ 0x18014016C (-isctype@-$_Regex_traits@G@std@@QEBA_NGF@Z.c)
 */

char __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_elts(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        char a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rdi
  char result; // al
  _OWORD *v11; // r8
  _OWORD *v12; // rax

  v4 = 0;
  v6 = 0LL;
  do
  {
    result = std::_Regex_traits<unsigned short>::isctype(*(_QWORD *)(a1 + 24), v4, a3);
    if ( result != a4 )
    {
      v11 = *(_OWORD **)(a2 + 40);
      if ( !v11 )
      {
        v12 = operator new(0x20uLL);
        v11 = v12;
        if ( v12 )
        {
          *v12 = 0LL;
          v12[1] = 0LL;
        }
        else
        {
          v11 = 0LL;
        }
        *(_QWORD *)(a2 + 40) = v11;
      }
      result = v4 & 7;
      *((_BYTE *)v11 + (v6 >> 3)) |= 1 << (v4 & 7);
    }
    ++v4;
    ++v6;
  }
  while ( v4 < 0x100 );
  return result;
}
