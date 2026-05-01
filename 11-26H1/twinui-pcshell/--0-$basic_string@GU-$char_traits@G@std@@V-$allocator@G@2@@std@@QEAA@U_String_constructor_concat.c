/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBG_K23@Z @ 0x1801BBECC
 * Callers:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x1801BBAE0 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BBAE0.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x1801BBE68 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BBE68.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@0@Z @ 0x1806676AC (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1806676AC.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180033F54 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

char *__fastcall std::wstring::wstring(
        char *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 a5,
        void *Src,
        __int64 a7)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  char *v11; // rsi
  __int64 size_of; // rax
  char *result; // rax

  *(_OWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  v8 = 7LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v9 = a5 + a7;
  v11 = a1;
  if ( (unsigned __int64)(a5 + a7) > 7 )
  {
    v8 = std::wstring::_Calculate_growth(a5 + a7, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
    size_of = std::_Get_size_of_n<2>(v8 + 1);
    v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *(_QWORD *)a1 = v11;
  }
  *((_QWORD *)a1 + 3) = v8;
  *((_QWORD *)a1 + 2) = v9;
  memcpy_0(v11, a4, 2 * a5);
  memcpy_0(&v11[2 * a5], Src, 2 * a7);
  result = a1;
  *(_WORD *)&v11[2 * v9] = 0;
  return result;
}
