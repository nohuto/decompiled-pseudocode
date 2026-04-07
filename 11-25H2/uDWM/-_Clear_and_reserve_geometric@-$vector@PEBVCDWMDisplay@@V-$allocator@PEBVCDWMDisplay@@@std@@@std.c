/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAX_K@Z @ 0x180095FA8
 * Callers:
 *     ??$_Assign_counted_range@PEAPEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAXPEAPEBVCDWMDisplay@@_K@Z @ 0x18008DCE0 (--$_Assign_counted_range@PEAPEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDis.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180062ED8 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180063EE8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x180096034 (-_Calculate_growth@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 */

char *__fastcall std::vector<CDWMDisplay const *>::_Clear_and_reserve_geometric(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v5; // rdx
  char *v6; // rax
  char *result; // rax

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v3 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth(a1, a2);
  if ( *(_QWORD *)a1 )
  {
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of, v5);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v6;
  result = &v6[8 * v3];
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
