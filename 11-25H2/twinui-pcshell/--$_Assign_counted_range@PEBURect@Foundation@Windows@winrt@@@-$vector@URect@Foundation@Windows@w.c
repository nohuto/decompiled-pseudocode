/*
 * XREFs of ??$_Assign_counted_range@PEBURect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAXPEBURect@Foundation@Windows@winrt@@_K@Z @ 0x18046AAA4
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAURect@Foundation@Windows@3@@Z @ 0x18046FB10 (-ReplaceAll@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180029B90 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x18021E830 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

char *__fastcall std::vector<winrt::Windows::Foundation::Rect>::_Assign_counted_range<winrt::Windows::Foundation::Rect const *>(
        void **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // r14
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // r10
  size_t size_of; // rax
  char *v10; // rax
  char *v11; // rbx
  char *v12; // rdx
  void *v13; // rcx
  size_t v14; // rdi
  char *result; // rax
  _BYTE *v16; // rbp
  void *v17; // rcx
  unsigned __int64 v18; // rbp
  __int64 v19; // rdi

  v3 = (char *)*a1;
  v4 = a3;
  if ( a3 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4 )
  {
    v16 = a1[1];
    v17 = *a1;
    v18 = (v16 - v3) >> 4;
    if ( a3 <= v18 )
    {
      v19 = 16 * a3;
      memmove_0(v17, a2, 16 * a3);
      result = &v3[v19];
      goto LABEL_11;
    }
    memmove_0(v17, a2, 16 * v18);
    v12 = &a2[16 * v18];
    v4 -= v18;
    v11 = (char *)a1[1];
    v13 = v11;
  }
  else
  {
    if ( a3 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    v7 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, a3);
    if ( v3 )
    {
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(16 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    size_of = std::_Get_size_of_n<16>(v7);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v10;
    v11 = v10;
    v12 = a2;
    a1[1] = v10;
    a1[2] = &v10[16 * v7];
    v13 = v10;
  }
  v14 = 16 * v4;
  memmove_0(v13, v12, v14);
  result = &v11[v14];
LABEL_11:
  a1[1] = result;
  return result;
}
