/*
 * XREFs of ??$_Assign_counted_range@PEBURect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAXPEBURect@Foundation@Windows@winrt@@_K@Z @ 0x1804776E4
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAURect@Foundation@Windows@3@@Z @ 0x18047DCF0 (-ReplaceAll@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEBURect@Foundation@Windows@winrt@@PEAU1234@@std@@YAPEAURect@Foundation@Windows@winrt@@PEBU1234@_KPEAU1234@@Z @ 0x1800BB94C (--$_Copy_memmove_n@PEBURect@Foundation@Windows@winrt@@PEAU1234@@std@@YAPEAURect@Foundation@Windo.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1801F9A20 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Foundation::Rect>::_Assign_counted_range<winrt::Windows::Foundation::Rect const *>(
        void **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // r10
  unsigned __int64 size_of; // rax
  char *v10; // rax
  void *v11; // r8
  char *v12; // rcx
  __int64 result; // rax
  unsigned __int64 v14; // rsi

  v3 = (char *)*a1;
  v4 = a3;
  if ( a3 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4 )
  {
    v11 = *a1;
    v14 = ((_BYTE *)a1[1] - v3) >> 4;
    if ( v4 > v14 )
    {
      std::_Copy_memmove_n<winrt::Windows::Foundation::Rect const *,winrt::Windows::Foundation::Rect *>(
        a2,
        ((_BYTE *)a1[1] - v3) >> 4,
        v11);
      v3 = (char *)a1[1];
      v4 -= v14;
      v11 = v3;
      v12 = &a2[16 * v14];
      goto LABEL_8;
    }
  }
  else
  {
    if ( a3 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    v7 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, a3);
    if ( v3 )
    {
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)(16 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    size_of = std::_Get_size_of_n<16>(v7);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v10;
    v3 = v10;
    v11 = v10;
    a1[1] = v10;
    a1[2] = &v10[16 * v7];
  }
  v12 = a2;
LABEL_8:
  result = std::_Copy_memmove_n<winrt::Windows::Foundation::Rect const *,winrt::Windows::Foundation::Rect *>(
             v12,
             v4,
             v11);
  a1[1] = &v3[16 * v4];
  return result;
}
