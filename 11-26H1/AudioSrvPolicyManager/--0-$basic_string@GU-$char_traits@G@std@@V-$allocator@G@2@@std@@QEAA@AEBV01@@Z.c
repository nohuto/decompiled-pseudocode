/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180025144
 * Callers:
 *     ?Add@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBQEAI@Z @ 0x180037FBC (-Add@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSimpleMa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180021690 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18003B144 (-_Xlen_string@std@@YAXXZ.c)
 */

__int64 __fastcall std::wstring::wstring(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rbp
  void *v7; // rax

  v2 = (_OWORD *)a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) > 7uLL )
    v2 = *(_OWORD **)a2;
  if ( v4 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  if ( v4 > 7 )
  {
    v6 = std::wstring::_Calculate_growth(v4, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
    if ( v6 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v7 = std::_Allocate<16,std::_Default_allocate_traits>(2 * (v6 + 1));
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = v6;
    memcpy_0(v7, v2, 2 * v4 + 2);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_OWORD *)a1 = *v2;
  }
  return a1;
}
