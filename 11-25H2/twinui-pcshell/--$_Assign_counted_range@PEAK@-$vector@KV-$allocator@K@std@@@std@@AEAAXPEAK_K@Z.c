/*
 * XREFs of ??$_Assign_counted_range@PEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAXPEAK_K@Z @ 0x1805DA74C
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x18009D874 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180029C20 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Calculate_growth@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1802C3D30 (-_Calculate_growth@-$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned long>::_Assign_counted_range<unsigned long *>(
        void **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rdi
  char *v5; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // r10
  size_t size_of; // rax
  char *v10; // rax
  size_t v11; // rbx
  void *v12; // rcx
  _BYTE *v13; // rbp
  unsigned __int64 v14; // rbp
  char *result; // rax

  v3 = (char *)*a1;
  v5 = a2;
  if ( a3 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2 )
  {
    v13 = a1[1];
    v12 = *a1;
    v14 = (v13 - v3) >> 2;
    if ( a3 <= v14 )
    {
      v11 = 4 * a3;
    }
    else
    {
      memmove_0(v12, a2, 4 * v14);
      v3 = (char *)a1[1];
      a2 = &v5[4 * v14];
      v12 = v3;
      v11 = 4 * (a3 - v14);
    }
  }
  else
  {
    if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    v7 = std::vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::_Calculate_growth(
           a1,
           a3);
    if ( v3 )
    {
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(4 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    size_of = std::_Get_size_of_n<4>(v7);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v10;
    v3 = v10;
    a1[1] = v10;
    a2 = v5;
    a1[2] = &v10[4 * v7];
    v11 = 4 * a3;
    v12 = v10;
  }
  memmove_0(v12, a2, v11);
  result = &v3[v11];
  a1[1] = &v3[v11];
  return result;
}
