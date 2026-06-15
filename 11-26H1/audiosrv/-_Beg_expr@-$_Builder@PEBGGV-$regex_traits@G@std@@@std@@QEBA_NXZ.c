/*
 * XREFs of ?_Beg_expr@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEBA_NXZ @ 0x18014C18C
 * Callers:
 *     ?_Trans@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014DEE4 (-_Trans@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Beg_expr@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NPEAV_Node_base@2@@Z @ 0x18014C16C (-_Beg_expr@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEBA_NPEAV_Node_base@2@@Z.c)
 */

char __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Beg_expr(
        __int64 a1)
{
  bool v1; // al
  __int64 v2; // rdx
  __int64 v3; // rcx

  v1 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Beg_expr(
         a1,
         *(_QWORD *)(a1 + 8));
  LOBYTE(v3) = 0;
  if ( v1
    || *(_DWORD *)(v2 + 8) == 2
    && std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Beg_expr(
         v3,
         *(_QWORD *)(v2 + 24)) )
  {
    LOBYTE(v3) = 1;
  }
  return v3;
}
