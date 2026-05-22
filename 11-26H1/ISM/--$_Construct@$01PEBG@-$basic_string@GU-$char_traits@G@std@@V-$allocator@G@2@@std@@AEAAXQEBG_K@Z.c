/*
 * XREFs of ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18002339C
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180023358 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180073FA4 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800998FC (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

void __fastcall std::wstring::_Construct<2,unsigned short const *>(_QWORD *a1, _OWORD *a2, unsigned __int64 a3)
{
  __int64 v6; // rbp
  void *v7; // rax

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  if ( a3 > 7 )
  {
    v6 = std::wstring::_Calculate_growth(a3);
    if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v7 = (void *)std::_Allocate<16,std::_Default_allocate_traits>(2 * (v6 + 1));
    *a1 = v7;
    a1[2] = a3;
    a1[3] = v6;
    memcpy_0(v7, a2, 2 * a3 + 2);
  }
  else
  {
    a1[2] = a3;
    a1[3] = 7LL;
    *(_OWORD *)a1 = *a2;
  }
}
