/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1802BD490
 * Callers:
 *     ??$_Assign_counted_range@PEAH@?$vector@HV?$allocator@H@std@@@std@@AEAAXPEAH_K@Z @ 0x18022FCDC (--$_Assign_counted_range@PEAH@-$vector@HV-$allocator@H@std@@@std@@AEAAXPEAH_K@Z.c)
 *     ??$_Assign_counted_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXPEBH_K@Z @ 0x180230CD0 (--$_Assign_counted_range@PEBH@-$vector@HV-$allocator@H@std@@@std@@AEAAXPEBH_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

char *__fastcall std::vector<int>::_Clear_and_reserve_geometric(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  _BYTE *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9

  v2 = 0x3FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v5 = *a1;
  v6 = ((_BYTE *)a1[2] - v5) >> 2;
  v7 = v6 >> 1;
  if ( v6 <= 0x3FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)(4 * v6));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<int>::_Buy_raw(a1, v2);
}
