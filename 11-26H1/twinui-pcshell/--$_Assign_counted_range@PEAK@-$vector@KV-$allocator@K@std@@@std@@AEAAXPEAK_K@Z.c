/*
 * XREFs of ??$_Assign_counted_range@PEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAXPEAK_K@Z @ 0x1805FF310
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1800AB350 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18013BF14 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1802BADF0 (-_Calculate_growth@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@.c)
 *     ??$_Copy_memmove_n@PEAKPEAK@std@@YAPEAKPEAK_K0@Z @ 0x1805FF574 (--$_Copy_memmove_n@PEAKPEAK@std@@YAPEAKPEAK_K0@Z.c)
 */

char *__fastcall std::vector<unsigned long>::_Assign_counted_range<unsigned long *>(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // r10
  unsigned __int64 size_of; // rax
  char *v10; // rax
  char *v11; // rcx
  char *result; // rax
  unsigned __int64 v13; // rbp

  v3 = *a1;
  v4 = a3;
  if ( a3 <= (a1[2] - *a1) >> 2 )
  {
    v13 = (a1[1] - v3) >> 2;
    if ( a3 > v13 )
    {
      std::_Copy_memmove_n<unsigned long *,unsigned long *>(a2);
      v3 = a1[1];
      v11 = &a2[4 * v13];
      v4 -= v13;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    v7 = std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth(a1, a3);
    if ( v3 )
    {
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)(4 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    size_of = std::_Get_size_of_n<4>(v7);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v10;
    v3 = v10;
    a1[1] = v10;
    a1[2] = &v10[4 * v7];
  }
  v11 = a2;
LABEL_8:
  std::_Copy_memmove_n<unsigned long *,unsigned long *>(v11);
  result = &v3[4 * v4];
  a1[1] = result;
  return result;
}
