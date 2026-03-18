/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAX_K@Z @ 0x18026E810
 * Callers:
 *     ??$_Assign_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@_K@Z @ 0x18026D904 (--$_Assign_counted_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18018FCBC (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180196E1C (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 */

char *__fastcall std::vector<CContent::LayoutData>::_Clear_and_reserve_geometric(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  SIZE_T size_of; // rax
  __int64 v5; // rdx
  char *result; // rax

  if ( a2 > 0x492492492492492LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v3 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, a2);
  if ( *a1 )
  {
    std::_Deallocate<16>(*a1, 8 * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  size_of = std::_Get_size_of_n<56>(v3);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[56 * v3];
  return result;
}
