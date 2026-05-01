/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x1802CF3D4
 * Callers:
 *     _std::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color________::_1_::dtor$0 @ 0x1806A5813 (_std--vector_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color____std--allocator_.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180029FA4 (-_Tidy@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allo.c)
 */

void __fastcall std::_Tidy_guard<std::vector<std::vector<Windows::UI::Color>>>::~_Tidy_guard<std::vector<std::vector<Windows::UI::Color>>>(
        void ***a1)
{
  void **v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<std::vector<Windows::UI::Color>>::_Tidy(v1);
}
