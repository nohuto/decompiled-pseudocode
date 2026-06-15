/*
 * XREFs of ?_Is_esc@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NXZ @ 0x18014D8CC
 * Callers:
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014D9A8 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Trans@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014DEE4 (-_Trans@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Is_esc(
        __int64 a1)
{
  _WORD *v1; // rax
  int v2; // edx
  bool result; // al

  v1 = (_WORD *)(*(_QWORD *)a1 + 2LL);
  result = 0;
  if ( v1 != *(_WORD **)(a1 + 16) )
  {
    v2 = *(_DWORD *)(a1 + 128);
    if ( (v2 & 8) == 0 && (*v1 == 40 || *v1 == 41) )
      return 1;
    if ( (v2 & 0x10) == 0 && (*v1 == 123 || *v1 == 125) )
      return 1;
  }
  return result;
}
