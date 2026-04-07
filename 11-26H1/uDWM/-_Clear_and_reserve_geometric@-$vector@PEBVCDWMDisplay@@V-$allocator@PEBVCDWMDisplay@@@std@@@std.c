/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAX_K@Z @ 0x180088448
 * Callers:
 *     ??$_Assign_counted_range@PEAPEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAXPEAPEBVCDWMDisplay@@_K@Z @ 0x18007C654 (--$_Assign_counted_range@PEAPEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDis.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002FDF4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1800884DC (-_Calculate_growth@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 */

char *__fastcall std::vector<CDWMDisplay const *>::_Clear_and_reserve_geometric(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 size_of; // rax
  char *v5; // rax
  char *result; // rax

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v3 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth();
  if ( *(_QWORD *)a1 )
  {
    std::_Deallocate<16>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v5;
  result = &v5[8 * v3];
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
