/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1805A8CC0
 * Callers:
 *     ??$_Assign_counted_range@PEA_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAXPEA_K_K@Z @ 0x1805A59D8 (--$_Assign_counted_range@PEA_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAXPEA_K_K@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x18022440C (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

char *__fastcall std::vector<unsigned __int64>::_Clear_and_reserve_geometric(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v3 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         a2);
  if ( *a1 )
  {
    std::_Deallocate<16>(*a1, (struct std::nothrow_t *)(((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<unsigned __int64>::_Buy_raw(a1, v3);
}
