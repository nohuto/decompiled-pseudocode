/*
 * XREFs of ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x18012DE84
 * Callers:
 *     _dynamic_initializer_for__idle__ @ 0x18012BA30 (_dynamic_initializer_for__idle__.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18012BC70 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     _dynamic_initializer_for__error__ @ 0x18012BE50 (_dynamic_initializer_for__error__.c)
 *     _dynamic_initializer_for__responding__ @ 0x18012CC40 (_dynamic_initializer_for__responding__.c)
 *     _dynamic_initializer_for__BlockResponding__ @ 0x18012F400 (_dynamic_initializer_for__BlockResponding__.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x180144888 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V-$initializer_l.c)
 *     _dynamic_initializer_for__thinking__ @ 0x180146BD0 (_dynamic_initializer_for__thinking__.c)
 *     ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1802B45DC (-_Clear_and_reserve_geometric@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802B9568 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::vector<int>::_Buy_raw(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v3 = 4 * a2;
  v4 = std::_Allocate<16,std::_Default_allocate_traits>(4 * a2);
  *a1 = v4;
  a1[1] = v4;
  result = v3 + v4;
  a1[2] = result;
  return result;
}
