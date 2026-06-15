/*
 * XREFs of ?_Add_backreference@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXI@Z @ 0x18014B5EC
 * Callers:
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014C070 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_backreference(
        __int64 a1,
        int a2)
{
  _QWORD *v4; // rax

  v4 = operator new(0x28uLL);
  if ( v4 )
  {
    v4[2] = 0LL;
    v4[3] = 0LL;
    *v4 = &std::_Node_capture::`vftable';
    v4[1] = 15LL;
    *((_DWORD *)v4 + 8) = a2;
  }
  else
  {
    v4 = 0LL;
  }
  return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v4);
}
